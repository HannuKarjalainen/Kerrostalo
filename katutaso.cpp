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
   double kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta)+Kerros::as1.laskeKulutus(hinta)+Kerros::as2.laskeKulutus(hinta)+Kerros::as3.laskeKulutus(hinta)+Kerros::as4.laskeKulutus(hinta);
   return kulutus;
}
