#include "OddValidator.h"

int OddValidator::validate(int testNumber)
{
    if (testNumber % 2 == 0)
    {
        std::puts("OddValidator: not odd, returning handler");
        return EXIT_SUCCESS;
    }
    std::puts("OddValidator: is odd");
    return BaseValidator::validate(testNumber);
}