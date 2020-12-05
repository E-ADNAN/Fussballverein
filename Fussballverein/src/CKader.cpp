/*
* @author ADNAN <ADNAN.E@TUTANOTA.DE>
*/

#include "CKader.h"
using namespace std;



bool CKader::add(const CPerson& arg)
{

    if (lenght < pKaderMitglieder.size()) {
        pKaderMitglieder[this->lenght] = const_cast<CPerson*>(&arg);

        ConsoleTextColor(10);
        cout << "\nInfo - Kader wurde hinzugefuegt " << endl;
        ConsoleTextColor(15);

        this->lenght++;
        return true;
    }
    ConsoleTextColor(4);
    cout << "\nError - Die maximale Kaderanzahl ist bereits erreicht" << endl;
    ConsoleTextColor(15);
    return false;
}


void CKader::print() const
{

    cout << "\nKader Mitglieder:" << endl;

    for (int i = 0; i < this->lenght; i++)
    {
        pKaderMitglieder[i]->print();
    }
}

CKader::~CKader()
{
    for (int i = 0; i < this->lenght; i++)
    {
        delete pKaderMitglieder[i];
    }
    lenght = 0;
}
