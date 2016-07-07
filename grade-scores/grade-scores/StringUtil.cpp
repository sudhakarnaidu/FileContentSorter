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
** FILE NAME: StringUtil.cpp
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/
#include <sstream>
#include <iostream>
#include "StringUtil.h"

/**
 * @brief split Function spilts the given string by provided delimiter
 * @param str Input string
 * @param delim Delimiter character
 * @return Returns the sustrings after split
 */
std::vector<std::string> StringUtil::split(const std::string & str, char delim)
{
    std::vector<std::string> elems;
    std::stringstream ss(str);
    std::string item;
    while (std::getline(ss, item, delim))
    {
        elems.push_back(item);
    }
    return elems;
}

/**
 * @brief getStringBasePath Function to trim file extension from given path
 * @param str Input file path
 * @return Returns trimmed path
 */
std::string StringUtil::getStringBasePath(const std::string & str)
{
    char sep = '.';
    size_t index = str.rfind(sep, str.length());
    if (index != std::string::npos)
    {
        return(str.substr(0, index));
    }
    return std::string();
}

/**
 * @brief trim Function to trim whitespaces
 * @param str Input string
 * @return Returns trimmed string
 */
std::string StringUtil::trim(std::string& str)
{
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}
