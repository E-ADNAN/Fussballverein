/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#include "CFeldSpieler.h"
#include "CVerein.h"
#include "CTrainer.h"
#include "CTorwart.h"


template <typename T>
T aseertTypeInput(T& tracker, string warningMessage) {

	if (!(cin >> tracker) || tracker < 0) {
		ConsoleTextColor(4);
		cout << warningMessage + ": ";
		ConsoleTextColor(15);
		cin.clear();
		cin.ignore(LONG_MAX, '\n');
		return aseertTypeInput(tracker, warningMessage);
	}

	cin.clear();
	cin.ignore(LONG_MAX, '\n');

	return tracker;
}

void PersonUserInput(string& vorname, string& nachname, int& alter) {
	cout << "\nVorname eingeben: ";
	getline(cin, vorname);
	cout << "Nachname eingeben: ";
	getline(cin, nachname);
	cout << "Alter eingeben: ";
	alter = aseertTypeInput<int>(alter, "Es sollte eine natuerliche Zahl sein");

}

void FuehrungUserInput(string& vorname, string& nachname, int& alter, CVerein& verein) {
	int aufgabe{ 0 };

	PersonUserInput(vorname, nachname, alter);


	cout << "\n 1 = Praesident :" << endl;
	cout << " 2 = Vorstand" << endl;
	cout << " 3 = Sportdirektor" << endl;
	ConsoleTextColor(14);
	cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
	ConsoleTextColor(3);
	cout << "\nBitte eine Option auswaehlen: ";
	ConsoleTextColor(15);

	aufgabe = aseertTypeInput<int>(aufgabe, "Es sollte eine natuerliche Zahl sein");
	if (aufgabe == 1 || aufgabe == 2 || aufgabe == 3) { verein.add(*new CFuehrung(vorname, nachname, alter, CFuehrung::e_aufgabe(aufgabe - 1))); }

}

void feldSpielerAdditionalInput(int& tracker, CFeldSpieler& feldSpieler) {
	int starkerFuss{ 0 }, verteidigung{ 0 }, ballbeherrschung{ 0 }, schusskraft{ 0 }, schussgenauigkeit{ 0 };

	cout << "\n 1 = Starker Fuss" << endl;
	cout << " 2 = Verteidigung" << endl;
	cout << " 3 = Ballbeherrschung" << endl;
	cout << " 4 = Schusskraft" << endl;
	cout << " 5 = Schussgenauigkeit" << endl;
	ConsoleTextColor(14);
	cout << " 6 = Bestaetigen" << endl;
	cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
	cout << " 0 = Programm beenden" << endl;
	ConsoleTextColor(3);
	cout << "\nBitte eine Option auswaehlen: ";
	ConsoleTextColor(15);

	tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");



	switch (tracker)
	{

	case 1: {

		cout << "\n 1 = UnKnown" << endl;
		cout << " 2 = Links" << endl;
		cout << " 3 = Rechts" << endl;
		cout << " 4 = Gleich" << endl;

		ConsoleTextColor(14);
		cout << " Zurueck : Eine andere Zahl eingeben" << endl;
		ConsoleTextColor(3);
		cout << "\nBitte eine Option auswaehlen: ";
		ConsoleTextColor(15);

		starkerFuss = aseertTypeInput<int>(starkerFuss, "Es sollte eine natuerliche Zahl sein");
		switch (starkerFuss)
		{
		case 1: {
			feldSpieler.setSchussKraft(feldSpieler.unKnown);
			break; }
		case 2: {
			feldSpieler.setSchussKraft(feldSpieler.links);
			break; }
		case 3: {
			feldSpieler.setSchussKraft(feldSpieler.rechts);
			break; }
		case 4: {
			feldSpieler.setSchussKraft(feldSpieler.gleich);
			break; }
		default: {
			feldSpieler.setSchussKraft(feldSpieler.unKnown);
			break; }
		}
		return feldSpielerAdditionalInput(tracker, feldSpieler);
		break;
	}case 2: {
		cout << "Verteidigung eingeben: ";
		verteidigung = aseertTypeInput<int>(verteidigung, "Es sollte eine natuerliche Zahl sein");
		feldSpieler.setVerteidigung(verteidigung);
		return feldSpielerAdditionalInput(tracker, feldSpieler);
		break;
	}case 3: {
		cout << "Ballbeherrschung eingeben: ";
		ballbeherrschung = aseertTypeInput<int>(ballbeherrschung, "Es sollte eine natuerliche Zahl sein");
		feldSpieler.setBallBeherrschung(ballbeherrschung);
		return feldSpielerAdditionalInput(tracker, feldSpieler);
		break;
	}case 4: {
		cout << "Verteidigung eingeben: ";
		schusskraft = aseertTypeInput<int>(schusskraft, "Es sollte eine natuerliche Zahl sein");
		feldSpieler.setSchussKraft(schusskraft);
		return feldSpielerAdditionalInput(tracker, feldSpieler);
		break;
	}
	case 5: {
		cout << "Verteidigung eingeben: ";
		schussgenauigkeit = aseertTypeInput<int>(schussgenauigkeit, "Es sollte eine natuerliche Zahl sein");
		feldSpieler.setSchussGenauigkeit(schussgenauigkeit);
		return feldSpielerAdditionalInput(tracker, feldSpieler);
		break;
	}
	case 6: {
		cout << "Aenderungen wurden gespeichert  " << endl;
		break;
	}
	}
}

void torwartAdditionalInput(int& tracker, CTorwart& torwart) {
	int strafRaumBeherrschung{ 0 }, linienQualitaet{ 0 }, abwehrKommunikation{ 0 };

	cout << "\n 1 = StrafRaum Beherrschung" << endl;
	cout << " 2 = Linien Qualitaet" << endl;
	cout << " 3 = Abwehr Kommunikation" << endl;
	ConsoleTextColor(14);
	cout << " 4 = Bestaetigen" << endl;
	cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
	cout << " 0 = Programm beenden" << endl;
	ConsoleTextColor(3);
	cout << "\nBitte eine Option auswaehlen: ";
	ConsoleTextColor(15);
	tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");
	switch (tracker)
	{
	case 1: {
		cout << "StrafRaum Beherrschung eingeben: ";
		strafRaumBeherrschung = aseertTypeInput<int>(strafRaumBeherrschung, "Es sollte eine natuerliche Zahl sein");
		torwart.setStrafRaumBeherrschung(strafRaumBeherrschung);
		return torwartAdditionalInput(tracker, torwart);
		break;
	}case 2: {
		cout << "Linien Qualitaet eingeben: ";
		linienQualitaet = aseertTypeInput<int>(linienQualitaet, "Es sollte eine natuerliche Zahl sein");
		torwart.setLinienQualitaet(linienQualitaet);
		return torwartAdditionalInput(tracker, torwart);
		break;
	}case 3: {
		cout << "Abwehr Kommunikation eingeben: ";
		abwehrKommunikation = aseertTypeInput<int>(abwehrKommunikation, "Es sollte eine natuerliche Zahl sein");
		torwart.setAbwehrKommunikation(abwehrKommunikation);
		return torwartAdditionalInput(tracker, torwart);
		break;
	}
	case 4: {
		cout << "Aenderungen wurden gespeichert  " << endl;
		break;
	}
	}

}


void trainerAdditionalInput(int& tracker, CTrainer& trainer) {

	int lizenzStufe{ 0 };
	cout << "\n 1 = Lizenz Stufe " << endl;
	ConsoleTextColor(14);
	cout << " 2 = Bestaetigen" << endl;
	cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
	cout << " 0 = Programm beenden" << endl;
	ConsoleTextColor(3);
	cout << "\nBitte eine Option auswaehlen: ";
	ConsoleTextColor(15);
	tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");
	switch (tracker)
	{
	case 1: {
		cout << "LizenzStufe eingeben: ";
		lizenzStufe = aseertTypeInput<int>(lizenzStufe, "Es sollte eine natuerliche Zahl sein");
		trainer.setLizenzStufe(lizenzStufe);
		return trainerAdditionalInput(tracker, trainer);
		break;
	}
	case 2: {
		cout << "Aenderungen wurden gespeichert  " << endl;
		break;
	}
	}
}

void KaderUserInput(int& tracker, string& vorname, string& nachname, int& alter, CKader& kader) {

	cout << "\n 1 = Trainer Hinzufuegen" << endl;
	cout << " 2 = Spieler Hinzufuegen" << endl;
	ConsoleTextColor(14);
	cout << " 0 = Programm beenden" << endl;
	cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;

	ConsoleTextColor(3);
	cout << "\nBitte eine Option auswaehlen: ";
	ConsoleTextColor(15);

	tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");

	if (tracker == 1 || tracker == 2) {

		cout << "\n--- > ";
		ConsoleTextColor(1);
		cout << "MAIN > MITGLIED HINZUFUEGEN > KADER HINZUFUEGEN > ";
		ConsoleTextColor(9);
		if (tracker == 1) { cout << "TRAINER HINZUFUEGEN" << endl; }
		else { cout << "SPIELER HINZUFUEGEN" << endl; };
		ConsoleTextColor(15);
		PersonUserInput(vorname, nachname, alter);
	}


	switch (tracker)
	{
	case 1: {

		cout << "\n Zusaetzliche Optionen hinzufuegen bzw. bearbeiten" << endl;
		cout << " 1 = JA" << endl;
		cout << " 2 = NEIN" << endl;
		ConsoleTextColor(14);
		cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
		cout << " 0 = Programm beenden" << endl;
		ConsoleTextColor(3);
		cout << "\nBitte eine Option auswaehlen: ";
		ConsoleTextColor(15);
		tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");
		CTrainer* trainer = new CTrainer(vorname, nachname, alter);

		if (tracker == 1) {
			trainerAdditionalInput(tracker, *trainer);
			kader.add(*trainer);
		}
		else if (tracker == 2) kader.add(*trainer);


		break;
	}

	case 2: {
		int nummer{ 0 };
		int position{ 0 };
		cout << "Nummer eingeben: ";
		nummer = aseertTypeInput<int>(nummer, "Es sollte eine natuerliche Zahl sein");


		cout << "\n 1 = Torwart" << endl;
		cout << " 2 = Abwehr" << endl;
		cout << " 3 = Mittelfeld" << endl;
		cout << " 4 = Sturm" << endl;
		ConsoleTextColor(14);
		cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
		ConsoleTextColor(3);
		cout << "\nBitte eine Option auswaehlen: ";
		ConsoleTextColor(15);

		position = aseertTypeInput<int>(position, "Es sollte eine natuerliche Zahl sein");

		cout << "\n Zusaetzliche Optionen hinzufuegen bzw. bearbeiten" << endl;
		cout << " 1 = JA" << endl;
		cout << " 2 = NEIN" << endl;
		ConsoleTextColor(14);
		cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
		cout << " 0 = Programm beenden" << endl;
		ConsoleTextColor(3);
		cout << "\nBitte eine Option auswaehlen: ";
		ConsoleTextColor(15);
		tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");

		if (position == 1) {

			CTorwart* torwart = new CTorwart(vorname, nachname, alter, CSpieler::e_position::torwart, nummer);
			if (tracker == 1) {
				torwartAdditionalInput(tracker, *torwart);
				kader.add(*torwart);
			}
			else if (tracker == 2) kader.add(*torwart);

		}
		else if (position <= 4)
		{
			CFeldSpieler* feldSpieler = new CFeldSpieler(vorname, nachname, alter, CSpieler::e_position(position - 1), nummer);
			if (tracker == 1) {
				feldSpielerAdditionalInput(tracker, *feldSpieler);
				kader.add(*feldSpieler);
			}
			else if (tracker == 2) kader.add(*feldSpieler);
		}

		break;
	}

	}

}




int main() {

	int tracker{ -1 };

	CVerein verein;
	CKader kader;
	verein.add(kader);


	while (tracker != 0)
	{
		string nachname{ " " };
		string vorname{ " " };
		int alter{ 0 };

		cout << "\n--- > ";
		ConsoleTextColor(9);
		cout << "MAIN " << endl;
		ConsoleTextColor(15);
		cout << "\n 1 = Mitglied hinzufuegen" << endl;
		cout << " 2 = Print " << endl;
		ConsoleTextColor(14);
		cout << " 0 = Programm beenden" << endl;
		ConsoleTextColor(3);
		cout << "\nBitte eine Option auswaehlen: ";
		ConsoleTextColor(15);

		tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");

		switch (tracker)
		{
		case 1: {
			cout << "\n--- > ";
			ConsoleTextColor(1);
			cout << "MAIN > ";
			ConsoleTextColor(9);
			cout << "MITGLIED HINZUFUEGEN" << endl;
			ConsoleTextColor(15);

			cout << "\n 1 = Kader hinzufuegen" << endl;
			cout << " 2 = Fuehrung hinzufuegen" << endl;
			ConsoleTextColor(14);
			cout << " 0 = Programm beenden" << endl;
			cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
			ConsoleTextColor(3);
			cout << "\nBitte eine Option auswaehlen: ";
			ConsoleTextColor(15);

			tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");

			switch (tracker)
			{
			case 1: {
				cout << "\n--- > ";
				ConsoleTextColor(1);
				cout << "MAIN > MITGLIED HINZUFUEGEN > ";
				ConsoleTextColor(9);
				cout << "KADER HINZUFUEGEN" << endl;
				ConsoleTextColor(15);
				KaderUserInput(tracker, vorname, nachname, alter, kader);
				break;
			}
			case 2: {
				cout << "\n--- > ";
				ConsoleTextColor(1);
				cout << "MAIN > MITGLIED HINZUFUEGEN > ";
				ConsoleTextColor(9);
				cout << "FUEHRUNG HINZUFUEGEN" << endl;
				ConsoleTextColor(15);
				FuehrungUserInput(vorname, nachname, alter, verein);
				break; }
			}
			break; }

		case 2: {
			cout << "\n--- > ";
			ConsoleTextColor(1);
			cout << "MAIN > ";
			ConsoleTextColor(9);
			cout << "PRINT" << endl;
			ConsoleTextColor(15);

			cout << "\n 1 = Nur Kader Mitglieder" << endl;
			cout << " 2 = Vereinsmitglieder" << endl;
			ConsoleTextColor(14);
			cout << " 0 = Programm beenden" << endl;
			cout << " Hauptmenue : Eine andere Zahl eingeben" << endl;
			ConsoleTextColor(3);
			cout << "\nBitte eine Option auswaehlen: ";
			ConsoleTextColor(15);

			tracker = aseertTypeInput<int>(tracker, "Es sollte eine natuerliche Zahl sein");

			cout << "\n--- > ";
			ConsoleTextColor(1);
			cout << "MAIN > PRINT > ";
			switch (tracker)
			{
			case 1: {

				ConsoleTextColor(9);
				cout << "NUR KADER MITGLIEDER" << endl;
				ConsoleTextColor(15);

				kader.print(); break; }
			case 2: {
				ConsoleTextColor(9);
				cout << "VEREINSMITGLIEDER" << endl;
				ConsoleTextColor(15);
				verein.print(); break; }
			}
			break;
		}

		}


	}


}



