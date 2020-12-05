/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#pragma once
#include "CPerson.h"

class CTrainer :public CPerson
{
private:
	unsigned int lizenzStufe{ 0 };

public:
	void print() const override;
	CTrainer(string name, string vorname, unsigned int alter);
	void setLizenzStufe(unsigned int lizenzStufe);

};


