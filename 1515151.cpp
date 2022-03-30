#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int matriz1[10][10],matriz2[10][10];
    int filas, columnas;
    int i, j;
    cout<<"Hola mundo yo he creado lo demas";
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;
    
    cout<<"\nLlenando matriz 1"<<endl;
    
    for(i=0; i<filas; i++){
    	for(j=0; j<columnas; j++){
    		
    		cout<<"Ingrese un numero ["<<i+1<<"]["<<j+1<<"]: ";
    		cin>>matriz1[i][j];
		}
	}
	cout<<"\nLLenando matriz 2"<<endl;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			
			cout<<"Ingrese un numero ["<<i+1<<"] ["<<j+1<<"]: ";
			cin>>matriz2[i][j];
		}
	}
	cout<<"\n";
	
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			
			matriz1[i][j] += matriz2[i][j];
			
			cout<<matriz1[i][j];
		}
		cout<<"\n";
	}
    
    cout<<"\n";
    system("pause");
    return 0;
}
