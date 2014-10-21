/*Harjoitus16
Versio 1.0
Sami Liimatainen
IIO14S1
21.10.2014

Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot:
etunimi (merkkijono; C:n merkkitaulukko)
sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku)
osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko)
kengannumero (kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot naytölle.

*/

#include <iostream>
using namespace std;

struct TIEDOT
{
	char ETUNIMET[50];
	char SUKUNIMI[30];
	char OSOITE[30];
	int POSTINUMERO;
	int KENGANNUMERO;
	float KOULUMATKA;
};

int main()
{
	TIEDOT TIEDOT1;
	/*
	cout << "Anna tietosi muodossa Etunimet Sukunimi Osoite Postinumero Kengannumero Koulumatka";
	cin >> (TIEDOT1.ETUNIMET) >> TIEDOT1.SUKUNIMI >> TIEDOT1.OSOITE >> TIEDOT1.POSTINUMERO >> TIEDOT1.KENGANNUMERO >> TIEDOT1.KOULUMATKA;
	*/
	
	cout << "Anna kaikki etunimesi";
	cin.getline(TIEDOT1.ETUNIMET, 50);

	cout << "Anna sukunimesi";
	cin >> TIEDOT1.SUKUNIMI;
	cin.get();

	cout << "Anna osoitteesi";
	cin.get(TIEDOT1.OSOITE, 30);
	cin.get();

	cout << "Anna postinumero kengannumero ja koulu matka muodossa 00000 00 *.*";
	cin >> TIEDOT1.POSTINUMERO >> TIEDOT1.KENGANNUMERO >> TIEDOT1.KOULUMATKA;

	cout << TIEDOT1.ETUNIMET << ' ' << TIEDOT1.SUKUNIMI << ' ' << TIEDOT1.OSOITE << ' ' << TIEDOT1.POSTINUMERO << ' ' << TIEDOT1.KENGANNUMERO << ' ' << TIEDOT1.KOULUMATKA;



}