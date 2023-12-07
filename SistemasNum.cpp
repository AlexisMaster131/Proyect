/*Alexis Cuevas y Alexis Maldonad
Titulo:Operaciones con Sistemas Numericos
25/08/23
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Introduzca un numero"<<endl;
	int n1=0;
	int n2=0;
	int x=0;
	cin>>n1;
	cout<<"Introduzca otro numero"<<endl;
	cin>>n2;
	cout<<"Que operacion? "<<endl;
	int opt=0;
	do{
		cout<<"1. Suma\n2.Resta \n3.Multiplicacion\n4.Division\n";
		cin>>opt;
	}while(opt>4||opt<1);
	cout<<endl;
	switch(opt){
		case 1 :
		x = n1+n2;
		cout<<"su numero en diferentes bases (dec, hex y oct): "<<endl;cout<<dec<<x<<"en decimal "<<endl;
	cout<<oct<<x<<"en octal "<<endl;
	cout<<uppercase;
	cout<<hex<<x<<"en hexadecimal "<<endl;
		break;
		case 2 : x = n1-n2;
		cout<<"su numero en diferentes bases (dec, hex y oct): "<<endl;
	cout<<dec<<x<<"en decimal "<<endl;
	cout<<oct<<x<<"en octal "<<endl;
	cout<<uppercase;
	cout<<hex<<x<<"en hexadecimal "<<endl;
		break;
		case 3 : x = n1*n2;
		cout<<"su numero en diferentes bases (dec, hex y oct): "<<endl;
	cout<<dec<<x<<"en decimal "<<endl;
	cout<<oct<<x<<"en octal "<<endl;
	cout<<uppercase;
	cout<<hex<<x<<"en hexadecimal "<<endl;
		break;
		case 4 : x = n1/n2;
		cout<<"El resultado es: "<<endl;
	cout<<dec<<x<<"en decimal "<<endl;
	cout<<oct<<x<<"en octal "<<endl;
	cout<<uppercase;
	cout<<hex<<x<<"en hexadecimal "<<endl;
		break;
	}
	
}