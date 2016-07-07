/*******************************************************************************
** (C) Copyright 2016 by #CompanyName
** All rights reserved
**
** This program is the property of #CompanyName, #Location, #Country,
** and can only be used and copied with the prior written authorisation of
** #Company name.
**
** Any whole or partial copy of this program in either its original form or in a
** modified form must mention this copyright and its owner.
** *****************************************************************************
** PROJECT: grade-scores
** *****************************************************************************
** FILE NAME: FileDataHandler.cpp
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/
#include <fstream>
#include <istream>
#include <string>
#include <vector>
#include <exception>

#include <algorithm>

#include "FileDataHandler.h"
#include "Data.h"
#include "StringUtil.h"

/**
 * @brief FileDataHandler Default Construtor to initialise the object
 */
FileDataHandler::FileDataHandler()
{
    //nothing to do
}

/**
 * @brief ~FileDataHandler Destructor to handle object deletion
 */
FileDataHandler::~FileDataHandler()
{
}

/**
 * @brief sortFile Funtion sorts the file content and creates a new file
 * @param filePath Input file path
 * @return error string in case of error other wise created file name
 */
std::string FileDataHandler::sortFile(std::string filePath)
{
    //Empty file path provide
    if (filePath == "")
    {
        return "File path is empty";
    }
    try
    {
        std::ifstream inFile(filePath.c_str());
        //Check for file existence 
        if (inFile.fail())
        {
            return "File doesn\'t exists or failed to open";
        }
        std::string line;
        std::vector<Data> data;
        //To check empty file
        bool emptyFile = true;
        while (std::getline(inFile, line))
        {
            emptyFile = false;
            std::vector<std::string> nameScore = StringUtil::split(line, ',');
            //check for valid data format
            if (nameScore.size() < 3)
            {
                return "Invalid file format\n";
            }
            //construct data structure from read data
            Data lineData(StringUtil::trim(nameScore.at(0)),
                StringUtil::trim(nameScore.at(1)),
                std::stoi(StringUtil::trim(nameScore.at(2))));
            data.push_back(lineData);
        }
        inFile.close();
        if (emptyFile)
        {
            return "Emtpy file provided\n";
        }
        //vector sort method to sort data based on custom data sort method
        //uses < operator function defined in Data class. Gobal sort method avoided
        std::sort(data.begin(), data.end());

        std::string outFilePath = StringUtil::getStringBasePath(filePath) +
                                  "-graded.txt";
        //create output filepath
        std::ofstream outFile(outFilePath.c_str(), std::ios_base::out);
        if (outFile.fail())
        {
            return "Unable to create output file";
        }

        //wrire sorted data to file in reverse order as per requirement
        //sort method uses < operator, to avoid global sort method
        for (std::vector<Data>::reverse_iterator rIter = data.rbegin();
             rIter != data.rend(); rIter++)
        {
            std::string outLine = "";
            outLine += rIter->getFirstName() + ", ";
            outLine += rIter->getLastName() + ", ";
            outLine += std::to_string(rIter->getScore());
            outFile << outLine << std::endl;
            std::cout << outLine << std::endl;
        }
        outFile.close();

        return("Finished: created " + outFilePath);
    }
    catch (std::exception& e)
    {
        //if exception occures return the error
        return(e.what());
    }

}
