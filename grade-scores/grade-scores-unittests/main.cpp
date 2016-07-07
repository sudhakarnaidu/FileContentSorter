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
** FILE NAME: main.cpp
** *****************************************************************************
** REVISION HISTORY:
** 1).Initial draft version.
********************************************************************************
** AUTHOR NAME: Sudhakar NAIDU
*******************************************************************************/
#include <iostream>
#include "UnitTests.h"
/**
 * @brief main Main funtion where execution starts
 * @param argc Command line arguments count
 * @param argv Command line arguments
 * @return Returns error code
 */
int main(int argc, char* argv[])
{
    UnitTests uts;
    uts.performUnittests();
    return 0;
}
