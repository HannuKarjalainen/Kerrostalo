#include "katutaso.h"



Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;


}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();

}

double Katutaso::laskeKulutus(double hinta)
{
   double kulutus = hinta * (as1.asukasmaara * as1.neliot) + (as2.neliot * as2.asukasmaara)+(Kerros::as1.asukasmaara*Kerros::as1.neliot)+(Kerros::as2.asukasmaara*Kerros::as2.neliot)+(Kerros::as3.asukasmaara*Kerros::as3.neliot)+(Kerros::as4.asukasmaara*Kerros::as4.neliot);

   return kulutus;
}
