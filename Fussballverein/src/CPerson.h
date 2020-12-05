/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#pragma once
#include <string>
#include<iostream>
using namespace std;

class CPerson
{
public:
	virtual void print() const = 0;
protected:
	string name{ " " };
	string vorname{ " " };
	unsigned int alter{ 0 };

};

