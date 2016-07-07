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
** FILE NAME: Data.cpp
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/

#include "Data.h"

/**
 * @brief Data Default Construtor to initialise the object
 */
Data::Data():
    firstName(""),
    lastName(""),
    score(0)
{
    //nothing to do
}

/**
 * @brief Data Construtor to initialise the object
 * @param fName Person firstname
 * @param lName Person lastname
 * @param score Person score
 */
Data::Data(std::string fName, std::string lName, int nScore)
{
    firstName = fName;
    lastName = lName;
    score = nScore;
}

/**
 * @brief ~Data Destructor to handle object deletion
 */
Data::~Data()
{
    //nothing to do
}

/**
 * @brief operator < Operator defined for custom data sort;used by vector
 * sort method.
 * Sort algorithm : Orders the names by their score. If scores are the same,
 * order by their last name followed by first name
 * @param data Reference to the data for comparison
 * @return returns true when custom operator condition satisfies
 * otherwise false
 */
bool Data::operator<(const Data & data)
{
    //Comare scores first
    if (score < data.score)
    {
        return true;
    }
    //if scores are equal
    else if (score == data.score)
    {
        //compare last name
        if (lastName < data.lastName)
        {
            return true;
        }
        //if last names are same
        else if (lastName == data.lastName)
        {
            //compare first name
            if (firstName < data.firstName)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

/**
 * @brief getFirstName Function to return person first name
 * @return returns person first name
 */
std::string Data::getFirstName() const
{
    return firstName;
}

/**
 * @brief getLastName Function to return person last name
 * @return returns person last name
 */
std::string Data::getLastName() const
{
    return lastName;
}

/**
 * @brief getScore Function to return person score
 * @return returns person score
 */
int Data::getScore() const
{
    return score;
}
