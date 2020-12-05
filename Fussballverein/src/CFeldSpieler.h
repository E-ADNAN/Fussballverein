/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#pragma once
#include "CSpieler.h"


class CFeldSpieler : public CSpieler {
public:
	enum e_starkerFuss
	{
		unKnown, links, rechts, gleich
	};


	void print() const override;
	CFeldSpieler(string name, string vorname, unsigned int alter, e_position  position, unsigned int nummer);

	void setStarkerFuss(e_starkerFuss starkerFuss);
	void setVerteidigung(unsigned int verteidigung);
	void setBallBeherrschung(unsigned int ballBeherrschung);
	void setSchussKraft(unsigned int schussKraft);
	void setSchussGenauigkeit(unsigned int schussGenauigkeit);

private:
	e_starkerFuss starkerFuss{ unKnown };
	unsigned int verteidigung{ 0 };
	unsigned int ballBeherrschung{ 0 };
	unsigned int schussKraft{ 0 };
	unsigned int schussGenauigkeit{ 0 };



};