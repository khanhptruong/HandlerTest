#include "BaseValidator.h"

BaseValidator::~BaseValidator() { delete next; };

NumberValidator* BaseValidator::setNext(NumberValidator* nextValidator)
{
    next = nextValidator;
    return nextValidator;
}

int BaseValidator::validate(int testNumber)
{
    if (this->next)
    {
        std::puts("NumberValidator: going next");
        return this->next->validate(testNumber);
    }

    std::puts("BaseValidator: end of chain, next is null, returning handler");
    return EXIT_SUCCESS;
}