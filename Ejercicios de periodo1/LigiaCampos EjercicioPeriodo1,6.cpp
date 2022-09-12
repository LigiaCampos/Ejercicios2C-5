#include<iostream>
using namespace std;

int main(){
	int numero1, numero2,suma;
	cout << "ingrese el primer numero: ";
	cin >> numero1;
	cout << "ingrese el segundo numero: ";
	cin >> numero2;
	for (int i = numero1; i <= numero2; i++){
		suma = suma + i;
	}
	cout << "la suma es:"<< suma;
	
}
