/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/11/22 09:20
	Description: Creare un programma con il seguente menu:

Gentile Utente,

se premi 1, chiede all'utente il numero della lunghezza (es. 5) e fa un ciclo (es. 5 volte) per caricare i dati nel vettore.
se premi 2, stampa a video il vettore con un ciclo.
se premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato
se premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato
se premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato
se premi 6, esca dal programma
*/

//1. includo le librerie
#include <iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

	int i;
	int input=0;
	int vettore[10];
	int num=0;
	int npari=0;
	int ndispari=0;
	int nmagg=0;
	int con=0;

//4. input - logica - operazioni - algoritmo
	
	do{
		cout<<"Gentile Utente, \n se premi 1, inserisci la lunghezza del vettore. \n se premi 2, stampa a video il vettore con un ciclo. \n se premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato \n se premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato \n se premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato \n se premi 6, esca dal programma \n";
		cout<<"Inserire l'opzione: ";
		cin>>input;
		cout<<endl;
		
		
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
		cout<<endl;
		break;
		
		case 2:
			for(i=0;i<num;i++)
			{
				cout<<"l'elemento " <<i <<" e\': " <<vettore[i] <<endl;
			}
		cout<<endl;
		break;
		
		case 3:
			for(i=0;i<num;i++)
			{
				if(vettore[i]%2==0)
					npari++;
			}
			cout<<"I numeri pari sono " <<npari <<endl;
		    cout<<endl;
		break;
		
		case 4:
			for(i=0;i<num;i++)
			{
				if(vettore[i]%2!=0)
					ndispari++;
			}
			cout<<"I numeri dispari sono " <<ndispari <<endl;
		    cout<<endl;
		break;
		
		case 5:
			cout<<"Inserire il numero da confrontare: ";
			cin>>con;
			cout<<endl;
			for(i=0;i<num;i++)
			{
				if(con<vettore[i])
					nmagg++;
			}
			cout<<"I numeri maggiori di " <<con <<" sono: " <<nmagg;
			cout<<endl;
		break;
		
		case 6:
			
		break;
		
	}
	
	}
	while(input!=6);

//6. output


//7. ritorno al sistema operativo

	return 0;

//8. fine del programma
}
