/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#include "CFuehrung.h"

CFuehrung::CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->aufgabe = aufgabe;
}

void CFuehrung::print() const
{


	switch (this->aufgabe)
	{
	case praesident:
		cout << " + Praesident -> ";
		break;
	case vorstand:
		cout << " + Vorstand -> ";
		break;
	case sportdirektor:
		cout << " + Sportdirektor -> ";
		break;
	}
	cout << "Vorname: " + vorname + " Nachname : " + name + " Alter : " << alter << endl;

}
