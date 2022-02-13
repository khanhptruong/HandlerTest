#pragma once
#ifndef EVENVALIDATOR_H
#define EVENVALIDATOR_H

#include "BaseValidator.h"

class EvenValidator : public BaseValidator
{
public:
    int validate(int testNumber) override;
};

#endif // !EVENVALIDATOR_H
