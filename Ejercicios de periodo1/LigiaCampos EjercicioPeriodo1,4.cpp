#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
 
	int CPA=0, i=0, PP;
	float LP;
	cout<<"Ingresar la cantidad de piezas a procesar :"<<endl;
	cin>>PP;
 
	while (i>=PP)
	{
		cout<<"Indicar longitud de la pieza :"<<endl;
		cin>>LP;
		if(LP>=1.20 && LP<=1.30)
		{
			CPA=+CPA;
			i++;
		}
 
	}
	cout<<"Cantidad de piezas aptas :"<<CPA<<endl;
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
