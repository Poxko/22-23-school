/*
	Name: Solare_FunzioneMedia
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 24/01/23 13:18
	Description: Scrivi una funzione CalcolaMedia(x,y) che dati in input due numeri reali, dia in output la loro media. VARIANTE: aggiungere alla media 10 e stampare il risultato nell'int main
*/

#include <iostream>
using namespace std;

double CalcolaMedia(double x , double y)
{
	double media;
	media = ( x + y ) / 2;
	media += 10 ;
	
	return media;
}

int main()
{
	double a , b = 0;
	
	cout << "Inserisci il primo numero ";
	cin >> a;
	cout << "Inserisci il secondo numero ";
	cin >> b;	
	
	double tot = CalcolaMedia(a , b);
	
	cout << "La media dei voti e\' " << tot;
	
	return 0;
}
