/*Alexis Maldonado y Alexis Cuevas
Operaciones con Punteros
    
6/09/2023*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a=6;
	int* p_array= new int[a] {1,2,3,4,5,6};
	cout<<"*p_array[0] + p_array[-1]: "<<*(p_array) + *(p_array+(a-1))<<endl; 
	cout<<"La resta del penultimo elemento menos el segundo: "<< *(p_array+(a-2)) - *(p_array+1)<<endl;
	cout<<"Multiplicando los terminos por 10: "<<endl;
	for(size_t i=0; i<a; i++){
		cout<<i<<" : "<<p_array[i] * 10<<endl; 
	}
	return 0;
}