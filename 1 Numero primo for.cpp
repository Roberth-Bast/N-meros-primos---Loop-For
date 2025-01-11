#include<iostream>
using namespace std;
int main(){
	int x;
	do{
	cout<< "Escriba un numero: \n";
	cin>>x;
	}while(x<=1);
	for(int i=0; i<1; i++){
		if(x%2==0){
		cout<<"El numero "<< x <<" no es primo \n";
		}else{
		cout<<"El numero "<< x <<" es primo";
		}
	}
	
	
	return 0 ;
}