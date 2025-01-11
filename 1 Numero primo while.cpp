#include<iostream>
using namespace std;
int main(){
	int x;
	do{
		cout<< "Escriba un numero: \n";
		cin>>x;
	}while(x<=1);
	bool noprimo=true;
	int d=2;
	while(d<x){
		if(x%d!=0){
			noprimo=false;
			break;
		}
	}
	if(noprimo){
		cout<<"El numero "<< x <<" no es primo ";
	}else{
		cout<<"El numero "<< x <<" es primo "; 
	}
	
	
	return 0;
}