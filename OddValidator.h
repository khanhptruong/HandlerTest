#pragma once
#ifndef ODDVALIDATOR_H
#define ODDVALIDATOR_H

#include "BaseValidator.h"

class OddValidator : public BaseValidator
{
public:
    int validate(int testNumber) override;
};

#endif // !ODDVALIDATOR_H
