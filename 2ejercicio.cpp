/*
Generador de N�meros Aleatorios: Crea un programa que genere y muestre una serie de n�meros 
aleatorios entre 0 y un n�mero m�ximo especificado por el usuario. El programa solicitar� al usuario 
la cantidad de n�meros aleatorios que desea generar y el valor m�ximo permitido. Utiliza la funci�n 
rand de la librer�a cstdlib para generar los n�meros aleatorios.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int m, P, i, na;
	
	cout << "Ingrese la cantidad de numero aleatorios que desea generar: ";
	cin >> m;
	cout << "Ingrese el numero maximo que desea generar: ";
	cin >> P;
	srand(time(0));
	
	for (int i=1;i<=m;i++){
		
		na = rand() % P + 1;
		cout << na << endl;
	}
	
	
	
	return 0;
}

