#include "EvenValidator.h"

int EvenValidator::validate(int testNumber)
{
    if (testNumber % 2 != 0)
    {
        std::puts("EvenValidator: not even, returning handler");
        return EXIT_SUCCESS;
    }
    std::puts("EvenValidator: is even");
    return BaseValidator::validate(testNumber);
}