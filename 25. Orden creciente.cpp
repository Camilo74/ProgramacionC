#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Digite 3 numeros: "; cin>>a>>b>>c; cout<<endl;
	if((a<b)&&(b<c)){
		cout<<"Los numeros van en orden creciente"<<endl;
	}
	else{
		cout<<"No estan en orden creciente"<<endl;
	}
	
	
	return 0;
}
