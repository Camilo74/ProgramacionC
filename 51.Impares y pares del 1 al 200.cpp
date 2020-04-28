#include<iostream>
using namespace std;
int main(){
	int a,n,y=0,z=0,Tam=200;
	for(a=1;a<Tam;a+=2){
		z+=a;
	}
	cout<<"La suma de los impares: "<<z<<endl;
	cout<<"La media de los impares: "<<z/100<<endl;
	
	
	for(n=0;n<=Tam;n+=2){
		y+=n;
	}
	
	cout<<"La suma de los pares: "<<y<<endl;
	cout<<"La media de los pares: "<<y/100<<endl;
	return 0;
}
