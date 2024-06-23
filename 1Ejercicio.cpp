/*
1 Ejercicio
Hallar el area del circulo
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int radio;

    cout << "Introduce el radio del circulo: ";
    cin >> radio;
    double area = M_PI * pow(radio, 2);
    cout << "El area del circulo  " << radio << " sera: " << area << endl;

    return 0;
}
