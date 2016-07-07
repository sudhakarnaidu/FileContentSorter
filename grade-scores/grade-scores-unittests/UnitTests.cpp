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
** PROJECT: grade-scores-unittests
** *****************************************************************************
** FILE NAME: UnitTests.cpp
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <istream>
#include <string>

#include "UnitTests.h"

/**
* @brief UnitTests Constructor initializes the object
*/
UnitTests::UnitTests()
{
    fdHandler = new FileDataHandler();
}

/**
* @brief UnitTests Destructor to hangle object deletion
*/
UnitTests::~UnitTests()
{
    delete fdHandler;
}

void UnitTests::performUnittests()
{
    unitTest1();
    unitTest2();
    unitTest3();
    unitTest4();
    unitTest5();
}

/**
* @brief unitTest1 Function to test empty path
*/
void UnitTests::unitTest1()
{
    std::string returnStr = fdHandler->sortFile("");
    if (returnStr == "File path is empty")
    {
        std::cout << "Test case 1: Pass\n";
    }
    else
    {
        std::cout << "Test case 1: Fail\n";
    }
}

/**
* @brief unitTest2 Function to test invalid path
*/
void UnitTests::unitTest2()
{
    std::string returnStr = fdHandler->sortFile("abc");
    if (returnStr == "File doesn\'t exists or failed to open")
    {
        std::cout << "Test case 2: Pass\n";
    }
    else
    {
        std::cout << "Test case 2: Fail\n";
    }
}

/**
* @brief unitTest3 Function to test empty input file
*/
void UnitTests::unitTest3()
{
    std::string returnStr = fdHandler->sortFile("./DataFiles/emptyfile.txt");
    if (returnStr == "Emtpy file provided\n")
    {
        std::cout << "Test case 3: Pass\n";
    }
    else
    {
        std::cout << "Test case 3: Fail\n";
    }
}

/**
* @brief unitTest4 Function to test invalid format file
*/
void UnitTests::unitTest4()
{
    std::string returnStr = fdHandler->sortFile("./DataFiles/invalidformat.txt");

    if (returnStr == "Invalid file format\n")
    {
        std::cout << "Test case 4: Pass\n";
    }
    else
    {
        std::cout << "Test case 4: Fail\n";
    }
}

/**
* @brief unitTest4 Function to test valid format file
*/
void UnitTests::unitTest5()
{
    std::string returnStr = fdHandler->sortFile("./DataFiles/names.txt");
    if (returnStr == "Finished: created ./DataFiles/names-graded.txt")
    {
        std::ifstream inFile("./DataFiles/names-graded.txt");
        if (inFile.fail())
        {
            std::cout << "Test case 5: Fail\n";
            return;
        }
        std::ifstream expFile("./DataFiles/names-expected.txt");

        std::string outLine;
        std::string expLine;
        while(std::getline(inFile, outLine))
        {
            std::getline(expFile, expLine);
            if (outLine != expLine)
            {
                std::cout << "Test case 5: Fail\n";
                return;
            }
        }

        inFile.close();
        expFile.close();
        std::cout << "Test case 5: Pass\n";
    }
    else
    {
        std::cout << "Test case 5: Fail\n";
    }
}