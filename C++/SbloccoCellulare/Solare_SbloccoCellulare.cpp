/*
	Name: solare_challenge
	Copyright: Colamonico Chiarulli
	Author: Solare Antonio
	Date: 28/11/22 09:20
	Description: Gentile Utente

	se premi 1, imposti il pin.
	se premi 2, rimuovi il pin.
	se premi 3, sblocchi il telefono.

*/

//1. includo le librerie
#include <iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

	int pin=0;
	int conpin=0;
	int errori=0;
	int conpin2=0;
	int input=0;


//4. input - logica - operazioni - algoritmo -output
	
	do{
		cout<<"Gentile Utente \n se premi 1, imposta il pin. \n se premi 2, rimuovi il pin. \n se premi 3, sblocchi il telefono. \n" ;
		cout<<"Inserire l'opzione(1,2 o 3): ";
		cin>>input;
		cout<<endl;
		
		
	switch(input)
	{
		case 1:
			if(pin==0)
			{
				do
				{
					cout<<"Inserisci il nuovo pin: ";
					cin>>pin;
					cout<<"Conferma il nuovo pin: ";
					cin>>conpin2;
					if(conpin2!=pin)
					{
						cout<<"I pin non corrispondono " <<endl <<endl;
					}
					else
					{
						cout<<"Pin configurato!" <<endl <<endl;
					}
				}while(conpin2!=pin);
			}
			else
			{
				do
				{
					cout<<"Inserisci il pin precedente: ";
					cin>>conpin2;
					if(conpin2==pin)
					{
						do
						{
							cout<<"Inserisci il nuovo pin: ";
							cin>>pin;
							cout<<"Conferma il nuovo pin: ";
							cin>>conpin2;
							if(conpin2!=pin)
							{
								cout<<"I pin non corrispondono" <<endl <<endl;
							}
							else
							{
								cout<<"Pin configurato!";
							}
						}while(conpin2!=pin);
					}
					else
					{
						cout<<"Pin non valido \n";
					}
				}while(conpin2!=pin);
			}
			cout<<endl;
		break;
		
		case 2:
			if(pin==0)
			{
				cout<<"In questo momento non e\' presente nessun pin. \n" <<endl <<endl;
			}
			else
			{
				do
				{
					cout<<"Inserisci il vecchio pin: ";
					cin>>conpin;
					if(conpin!=pin)
					{
						cout<<"I pin non corrispondono" <<endl <<endl;
					}
					else
					{
						pin=0;
						cout<<"Pin rimosso!" <<endl <<endl;
					}
				}while(pin!=0);
			}
			cout<<endl;
		break;
		
		case 3:
			if(pin==0)
			{
				cout<<"Telefono sbloccato!";
			}
			else
			{
				do
				{
					cout<<"Inserire il pin: ";
					cin>>conpin2;
					if(conpin2!=pin)
					{
						cout<<"Pin errato! \n";
						errori++;
						if(errori==3)
						{
							cout<<"Telefono bloccato!";
							return 0;
						}
					}
					else
					{
						cout<<"Telefono sbloccato!";
					}
				}while(conpin2!=pin || errori==3);
			}
		break;
		
	}
	
	}
	while(input!=3);


//5. ritorno al sistema operativo

	return 0;

//6. fine del programma
}
