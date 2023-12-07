/*
Autores: Alexis Maldonado y Alexis Cuevas
Titulo: Tarea Arreglo 3D

Fuentes: https://cplusplus.com/reference/cstdlib/rand/
    
Fecha: 31 ago 2023
*/
#include<iostream>
using namespace std;
int main(){
  //Para random
	srand(time(NULL));
	//Num aleatorio del 1 al 5
	int a=rand() % 5+1;
	int b=rand() % 5+1;
	int c=rand() % 5+1;
	int arr [a][b][c];
	//dim x 1D
	int dimX=sizeof(arr) / sizeof(arr[0]);
	cout<<"dimX: "<<dimX<<endl;
	//dim y 2D
	int dimY = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<"dimY: "<<dimY<<endl;
	//dim z 3D
	int dimZ  = sizeof(arr[0][0])/sizeof(arr[0][0][0]);
	cout<<"dimZ: "<<dimZ<<endl;
	
	for(int i=0;i<dimX;i++){
		for(int j=0;j<dimY;j++){
			for(int k=0;k<dimZ;k++){
        //Num aleatorio del 0-99
				arr[i][j][k] = rand()%100;
				cout<<"["<<arr[i][j][k]<<"]";
			}
			cout<<endl;
		}
		cout<<endl<<endl;
	}
}