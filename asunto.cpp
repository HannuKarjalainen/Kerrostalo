#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int asukkaat, int neliomaara)
{
    asukasmaara = asukkaat;
    neliot = neliomaara;
    cout << "Asunto maaritetty asukkaita = " << asukasmaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = hinta * asukasmaara * neliot;
    return kulutus;
}
