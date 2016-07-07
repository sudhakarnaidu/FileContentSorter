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
** FILE NAME: FileDataHandler.h
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/
#pragma once
#include <iostream>

/**
 * @brief The FileDataHandler class To handle file operations and sort the data
 */
class FileDataHandler
{
public:

    /**
     * @brief FileDataHandler Default Construtor to initialise the object
     */
    FileDataHandler();

    /**
     * @brief ~FileDataHandler Destructor to handle object deletion
     */
    ~FileDataHandler();

    /**
     * @brief sortFile Funtion sorts the file content and creates a new file
     * @param filePath Input file path
     * @return error string in case of error other wise created file name
     */
    std::string sortFile(std::string filePath);
};
