/*
1 Ejercicio
Hallar el area del circulo
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int r;

    cout << "Introduce el radio del circulo: ";
    cin >> r;
    double area = M_PI * pow(r, 2);
    cout << "El area del circulo  " << r << " sera: " << area << endl;

    return 0;
}
