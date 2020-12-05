/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#pragma once
#include "CPerson.h"

class CSpieler : public CPerson
{
public:
    virtual void print() const override {};
    enum e_position
    {
        torwart, abwehr, mittelfeld, sturm
    };


protected:
    unsigned int nummer{ 0 };
    e_position position{ torwart };

};

