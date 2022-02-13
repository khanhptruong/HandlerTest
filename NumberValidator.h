#pragma once
#ifndef NUMBERVALIDATOR_H
#define NUMBERVALIDATOR_H

class NumberValidator
{
public:
    virtual ~NumberValidator() {};
    virtual NumberValidator* setNext(NumberValidator* nextValidator) = 0;
    virtual int validate(int) = 0;
};

#endif // !NUMBERVALIDATOR_H
