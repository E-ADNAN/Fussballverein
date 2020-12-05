/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#include "CVerein.h"

bool CVerein::add(const CFuehrung& arg)
{

    if (lenght < fuehrungMitglieder.size()) {
        fuehrungMitglieder[this->lenght] = const_cast<CFuehrung*>(&arg);
        ConsoleTextColor(2);
        cout << "\nInfo - Fuehrungsmitglied wurde hinzugefuegt " << endl;
        ConsoleTextColor(15);
        this->lenght++;
        return true;
    }
    ConsoleTextColor(4);
    cout << "\nError - Die maximale Fuehrung Mitglieder ist bereits erreicht" << endl;
    ConsoleTextColor(15);
    return false;
}

bool CVerein::add(const CKader& arg)
{
    if (this->pMyKader == nullptr) {
        this->pMyKader = const_cast<CKader*>(&arg);
        return true;
    }
    ConsoleTextColor(4);
    cout << "\nError - Kader ist bereits vorhanden" << endl;
    ConsoleTextColor(15);
    return false;
}

void CVerein::print() const
{

    if (this->pMyKader) {
        this->pMyKader->print();
    }

    cout << "\nFuehrung Mitglieder: " << endl;
    for (int i = 0; i < this->lenght; i++)
    {
        fuehrungMitglieder[i]->print();
    }

}
