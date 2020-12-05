/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#pragma once
#include "CPerson.h"
#include <array>
#include <windows.h>
#include <string>
//red == 4 ,  green = 10, white= 15
#define ConsoleTextColor(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);

class CKader {

	unsigned int anzKader{ 0 };
	static const unsigned int maxAnzKader = 50;

	array<CPerson*, maxAnzKader> pKaderMitglieder;
	unsigned int lenght{ 0 };

public:

	bool add(const CPerson& arg);
	void print() const;
	CKader() {};
	~CKader();
};