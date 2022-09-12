#include<iostream>
using namespace std;

int main(){
	double numero, suma;
	while (numero >= 0){
		cout << "ingrese un numero" << endl;
		cout << "ingresar un numero negativo para salir" << endl;
		cin >> numero;
		if (numero >=0){
			suma = suma + numero;
    	}
    	
	}
	cout << "la suma es: " << suma;
	}
