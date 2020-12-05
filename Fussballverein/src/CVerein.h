/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#pragma once
#include "CFuehrung.h"
#include "CKader.h"

class CVerein {

	CKader* pMyKader;
	unsigned int anzFuehrung;
	static const unsigned int maxAnzFuehrung = 20;
	array<CFuehrung*, maxAnzFuehrung> fuehrungMitglieder;
	unsigned int lenght{ 0 };
public:
	bool add(const CFuehrung& arg);
	bool add(const CKader& arg);
	void print() const;

};
