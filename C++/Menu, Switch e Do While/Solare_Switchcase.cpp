/*
    Name: solare_switchcase
    Copyright: Colamonico Chiarulli
    Author: Antonio Solare
    Date: 18/11/2022 09:39
    Description: Creare un programma con il seguente menu:

Gentile Utente,

se premi 1, inserisci il vettore
se premi 2, stampi a video il vettore
se premi 3, stampi il vettore ordinato al contrario
se premi 4, esci dal programma

*/


//1. includo le librerie
#include <iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

	int i;
	int num=0;
	int vettore[i];
	int input=0;

//4. input
	
	
//5. logica - operazioni - algoritmo
	
	do{
		cout<<"Gentile Utente, \n se premi 1, inserisci il vettore \n se premi 2, stampi a video il vettore \n se premi 3, stampi il vettore ordinato al contrario \n se premi 4, esci dal programma \n";
		cout<<"Inserire l'opzione (1,2,3 o 4): ";
		cin>>input;
		
		
	switch(input)
	{
		case 1:
			cout<<"Inserire quanti elementi si vuole desiderare: ";
			cin>>num;
			
			for(i=0;i<num;i++)
			{
				cout<<"Inserisci l'elemento " <<i <<" : ";
				cin>>vettore[i];
			}
		break;
		
		case 2:
			for(i=0;i<num;i++)
			{
				cout<<"l'elemento " <<i <<" e\': \n" <<vettore[i] <<endl;
			}
		break;
		
		case 3:
			for(i=num-1;i>=0;i--)
			{
				cout<<"l'elemento " <<i <<" e\' " <<vettore[i] <<endl;
			}
		break;
		
		case 4:
			
		break;
	}
	
	}
	while(input!=4);
//6. output

//7. ritorno al sistema operativo

	return 0;

//8. fine del programma
}
