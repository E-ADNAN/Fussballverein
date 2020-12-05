/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#include "CTrainer.h"

void CTrainer::print() const
{
	cout << " + Trainer -> Vorname : " + vorname + " Nachname : " + name + " Alter: " << alter << " Lizenz Stufe: " << lizenzStufe << endl;
}

CTrainer::CTrainer(string name, string vorname, unsigned int alter)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
}

void CTrainer::setLizenzStufe(unsigned int lizenzStufe)
{
	this->lizenzStufe = lizenzStufe;
}
