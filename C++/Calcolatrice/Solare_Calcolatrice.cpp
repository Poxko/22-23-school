/*
	Name: calcolatrice solare
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 28/11/22 09:20
	Description: Creare un programma con il seguente menu:

Gentile Utente,
se premi 1, esegui la somma tra 2 numeri.
se premi 2, esegui la sottrazione tra 2 numeri.
se premi 3, esegui la moltiplicazione tra 2 numeri.
se premi 4, esegui la divisione tra 2 numeri.
se premi 5, esci dal programma 
*/

//1. includo le librerie
#include <iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

	int num1=0;
	int num2=0;
	int input=0;
	float div=0;


//4. input - logica - operazioni - algoritmo
	
	do{
		cout<<"Gentile Utente, \n se premi 1, esegui la somma tra 2 numeri. \n se premi 2, esegui la sottrazione tra 2 numeri. \n se premi 3, esegui la moltiplicazione tra 2 numeri. \n se premi 4, esegui la divisione tra 2 numeri. \n se premi 5, esci dal programma \n";
		cout<<"Inserire l'opzione: ";
		cin>>input;
		cout<<endl;
		
		
	switch(input)
	{
		case 1:
			
			cout<<"Inserisci il primo numero: ";
			cin>>num1;
			cout<<"Inserisci il secondo numero: ";
			cin>>num2;
			cout<<"Il risultato della somma e\': "<<num1+num2;
			cout<<endl <<endl;
		break;
		
		case 2:
			cout<<"Inserisci il primo numero: ";
			cin>>num1;
			cout<<"Inserisci il secondo numero: ";
			cin>>num2;
			cout<<"Il risultato della sottrazione e\': "<<num1-num2;
			cout<<endl <<endl;
		break;
		
		case 3:
			cout<<"Inserisci il primo numero: ";
			cin>>num1;
			cout<<"Inserisci il secondo numero: ";
			cin>>num2;
			cout<<"Il risultato della moltiplicazione e\': "<<num1*num2;
			cout<<endl <<endl;
		break;
		
		case 4:
			cout<<"Inserisci il primo numero: ";
			cin>>num1;
			cout<<"Inserisci il secondo numero: ";
			cin>>num2;
			if(num2==0)
				cout<<"Impossibile dividere per 0";
			else
				div=num1/num2;
				cout<<"Il risultato della divisione e\': "<<div;
			cout<<endl <<endl;
		break;
		
		case 5:
			
		break;	
		
		default:
			cout<<"Numero inserito errato!" <<endl;
			cout<<endl <<endl;
	}
	
	}
	while(input!=5);

//6. output


//7. ritorno al sistema operativo

	return 0;

//8. fine del programma
}
