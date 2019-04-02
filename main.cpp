#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include "algorytmy.hh"

using namespace std;


const int Rozmiar = 10000;



int main()
{
	int **wsk = new int *[100];
	for (int i = 0; i < 100; i++)
		wsk[i] = new int[Rozmiar];
	
	//wypelnijPosortowanymi (wsk,100,Rozmiar);
	wypelnijLosowo(wsk,Rozmiar);
	//wypelnijMalejaco(wsk,Rozmiar);
	cout<<"\n\nUłożenie przed sortowaniem = "<<sprawdzSortowanie(wsk, Rozmiar);
/*
	cout << "\n" << "Przed sortowaniem pierwszej: " << endl;

	for (int i = 0; i < Rozmiar; i++)
		cout << wsk[0][i] << "\t";
	cout << endl;
	
        cout << "\n" << "Przed sortowaniem drugiej: " << endl;

	for (int i = 0; i < Rozmiar; i++)
		cout << wsk[1][i] << "\t";
	cout << endl;
*/	
	double start = clock();

	
	cout << "\n\nsortowanie ... " << endl;
	for (int i = 0; i < 100; i++)
	{
		//quickSort(wsk[i] ,0, Rozmiar - 1);
		//mergeSort(wsk[i],0, Rozmiar - 1);
		hybrydowe(wsk[i],Rozmiar);
	}
	double czas = (clock() - start) / CLOCKS_PER_SEC;
	cout<<"\nUłożenie po sortowaniu = "<< sprawdzSortowanie(wsk, Rozmiar);
/*	
        cout<<"\n"<<"Po sortowaniu pierwszej: "<<endl;

	for(int i=0; i<Rozmiar; i++)
		cout<<wsk[0][i]<<"\t";

	cout << "\n" << "Po sortowaniu drugiej: " << endl;

	for (int i = 0; i < Rozmiar; i++)
		cout << wsk[1][i] << "\t";
*/
	cout << "\n\n" << "Czas sortowania 100 tablic: " << czas <<" sec" <<endl;
	cout<<"Średni czas sortowania 1 tablicy: "<<czas/100<<" sec"<<endl;


}
