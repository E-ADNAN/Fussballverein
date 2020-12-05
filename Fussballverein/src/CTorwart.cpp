/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#include "CTorwart.h"

void CTorwart::print() const
{
	cout << " + Torwart -> Vorname : " + vorname + " Nachname : " + name + " Alter: " << alter << " Nummer: " << nummer
		<< " StrafRaum Beherrschung: " << strafRaumBeherrschung << " Linien Qualitaet: " << linienQualitaet
		<< " Abwehr Kommunikation: " << abwehrKommunikation << endl;
}

CTorwart::CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
}

void CTorwart::setStrafRaumBeherrschung(unsigned int strafRaumBeherrschung)
{
	this->strafRaumBeherrschung = strafRaumBeherrschung;
}

void CTorwart::setLinienQualitaet(unsigned int linienQualitaet)
{
	this->linienQualitaet = linienQualitaet;
}

void CTorwart::setAbwehrKommunikation(unsigned int abwehrKommunikation)
{
	this->abwehrKommunikation = abwehrKommunikation;
}
