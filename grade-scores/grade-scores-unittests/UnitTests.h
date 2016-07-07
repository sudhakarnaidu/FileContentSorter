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
** FILE NAME: UnitTests.h
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/
#pragma once
#include "../grade-scores/FileDataHandler.h"

/**
* @brief The UnitTests class to perfrom unit tests
*/
class UnitTests
{

public:
    /**
    * @brief UnitTests Constructor initializes the object
    */
    UnitTests();

    /**
    * @brief UnitTests Destructor to hangle object deletion
    */
    ~UnitTests();

    /**
    * @brief performUnittests Function to perfrom unittests
    */
    void performUnittests();
private:

    /**
    * @brief unitTest1 Function to test empty path
    */
    void unitTest1();

    /**
    * @brief unitTest2 Function to test invalid path
    */
    void unitTest2();

    /**
    * @brief unitTest3 Function to test empty input file 
    */
    void unitTest3();

    /**
    * @brief unitTest4 Function to test invalid format file
    */
    void unitTest4();

    /**
    * @brief unitTest5 Function to test valid format file
    */
    void unitTest5();

    /**
    * @brief fdHandler Reference to FileDataHandler object to from tests
    */
    FileDataHandler *fdHandler;
};
