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
** FILE NAME: Data.h
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/
#pragma once
#include <iostream>

/**
 * @brief The Data class Data structure to store file contenet
 */
class Data
{
public:
    /**
     * @brief Data Default Construtor to initialise the object
     */
    Data();

    /**
     * @brief Data Construtor to initialise the object
     * @param fName Person firstname
     * @param lName Person lastname
     * @param score Person score
     */
    Data(std::string fName, std::string lName, int score);

    /**
     * @brief ~Data Destructor to handle object deletion
     */
    ~Data();

    /**
     * @brief operator < Operator defined for custom data sort;used by vector
     * sort method.
     * Sort algorithm : Orders the names by their score. If scores are the same,
     * order by their last name followed by first name
     * @param data Reference to the data for comparison
     * @return returns true when custom operator condition satisfies
     * otherwise false
     */
    bool operator<(const Data &data);

    /**
     * @brief getFirstName Function to return person first name
     * @return returns person first name
     */
    std::string getFirstName() const;

    /**
     * @brief getLastName Function to return person last name
     * @return returns person last name
     */
    std::string getLastName() const;

    /**
     * @brief getScore Function to return person score
     * @return returns person score
     */
    int getScore() const;

private:

    /**
     * @brief firstName Variable to store person first name
     */
    std::string firstName;

    /**
     * @brief lastName Variable to store person last name
     */
    std::string lastName;

    /**
     * @brief lastName Variable to store person score
     */
    int score;
};

