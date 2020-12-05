/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#pragma once
#include "CSpieler.h"

class CTorwart : public CSpieler {

	unsigned int strafRaumBeherrschung{ 0 };
	unsigned int linienQualitaet{ 0 };
	unsigned int abwehrKommunikation{ 0 };

public:
	void print() const override;
	CTorwart(string name, string vorname, unsigned int alter, e_position  position, unsigned int nummer);
	void setStrafRaumBeherrschung(unsigned int strafRaumBeherrschung);
	void setLinienQualitaet(unsigned int linienQualitaet);
	void setAbwehrKommunikation(unsigned int abwehrKommunikation);


};
