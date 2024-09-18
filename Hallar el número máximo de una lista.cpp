#include <iostream>
#include <cstdlib>
#include <ctime>
//HALLAR EL NÚMERO MÁXIMO DE UNA LISTA DE NÚMEROS ALEATORIOS
using namespace std;

void generarSemilla()
{
	srand(time(0));
}

double numAleatorio()
{
	double aleatorio = (double)rand() / RAND_MAX;
	return aleatorio;	
}


void hallarMax()
{
	double max=0;
	int size = 0;

	cout<<"** HALLAR EL NUMERO MAXIMO DE UNA LISTA DE NUMEROS ALEATORIOS ** "<<endl;
	cout<<"Ingrese el tamanio del arreglo: ";cin>>size;
	
	double arreglo[size];
	for (int i=0;i<size;i++)
	{
		arreglo[i]=numAleatorio();
	}	
	
	for (int j=0;j<size;j++)
	{
		cout<<"Valor "<<j<<" : "<<arreglo[j]<<endl;
		if(arreglo[j]>max)
		{
			max=arreglo[j];
		}
	}
	cout<<"\nValor maximo: "<<max<<endl;
}

int main()
{
	generarSemilla();
	hallarMax();
	return 0;
}
