/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#include "CFeldSpieler.h"


void CFeldSpieler::print() const
{
	switch (this->position)
	{
	case abwehr:
		cout << " + Abwehr -> ";
		break;
	case mittelfeld:
		cout << " + Mittelfeld -> ";
		break;
	case sturm:
		cout << " + Sturm -> ";
		break;
	}
	cout << "Vorname: " + vorname + " Nachname : " + name + " Alter : " << alter << " Nummer : " << nummer
		<< " Starker Fuss: " << starkerFuss << " Verteidigung: " << verteidigung << " Ballbeherrschung: " << ballBeherrschung
		<< " Schusskraft: " << schussKraft << " Schussgenauigkeit: " << schussGenauigkeit << endl;

}

CFeldSpieler::CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
}

void CFeldSpieler::setStarkerFuss(e_starkerFuss starkerFuss)
{
	this->starkerFuss = starkerFuss;
}

void CFeldSpieler::setVerteidigung(unsigned int verteidigung)
{
	this->verteidigung = verteidigung;
}

void CFeldSpieler::setBallBeherrschung(unsigned int ballBeherrschung)
{
	this->ballBeherrschung = ballBeherrschung;
}

void CFeldSpieler::setSchussKraft(unsigned int schussKraft)
{
	this->schussKraft = schussKraft;
}

void CFeldSpieler::setSchussGenauigkeit(unsigned int schussGenauigkeit)
{
	this->schussGenauigkeit = schussGenauigkeit;
}
