#include <iostream>
using namespace std;

int main (){
	int n, p;
	cout<<"Ingrese el tamano de la matriz: ";cin>>n;
	int A[100][100];

	
	for (int i=0; i<n; i++){
		for (int j=0; j< n; j++){
		
		A[i][j]=1;
	}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j< n; j++)
		if (i=j){
			A[i][j]=1;
		}
	}
	p=3*n;
	for (int i=0; i<p; i++){
		for (int j=0; j< p; j++){
		
		if (i<j)
		A[i][j]=1;
		}
	}
	for (int i=0; i<p; i++){
		for (int j=0; j< p; j++){
		
		if (i<j)
		A[i][j]=1;
		}
	}
	//profesor considere que el internete staba muy malo al incio, por favor.
	 
return 0;	
}