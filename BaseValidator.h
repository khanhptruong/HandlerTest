#pragma once
#ifndef BASEVALIDATOR_H
#define	BASEVALIDATOR_H

#include <iostream>
#include "NumberValidator.h"

class BaseValidator : public NumberValidator
{
protected:
    NumberValidator* next = nullptr;
public:
    ~BaseValidator();
    NumberValidator* setNext(NumberValidator* nextValidator) override;
    virtual int validate(int testNumber) override;
};

#endif // !BASEVALIDATOR_H
