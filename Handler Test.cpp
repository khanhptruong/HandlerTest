// Handler Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "NumberValidator.h"
#include "BaseValidator.h"
#include "EvenValidator.h"
#include "OddValidator.h"

int main()
{
    NumberValidator* numValidator = new BaseValidator;
    numValidator
        ->setNext(new EvenValidator)
        ->setNext(new OddValidator);
    numValidator->validate(10);
    delete numValidator;

    return EXIT_SUCCESS;
}
