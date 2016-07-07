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
** FILE NAME: StringUtil.h
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/
#pragma once

#include <vector>

/**
 * @brief The StringUtil class String custom utitlity class
 */
class StringUtil
{
public:

    /**
     * @brief split Function spilts the given string by provided delimiter
     * @param str Input string
     * @param delim Delimiter character
     * @return Returns the sustrings after split
     */
    static std::vector<std::string> split(const std::string &str, char delim);

    /**
     * @brief getStringBasePath Function to trim file extension from given path
     * @param str Input file path
     * @return Returns trimmed path
     */
    static std::string getStringBasePath(const std::string& str);

    /**
     * @brief trim Function to trim whitespaces
     * @param str Input string
     * @return Returns trimmed string
     */
    static std::string trim(std::string& str);
};

