#include<iostream>
using namespace std;
int main(){
	float a;
	cout<<"Digite el importe bruto: "; cin>>a; cout<<endl;
	
	if(a<=20000){
		cout<<"El importe neto es: "<<a<<endl;
	}
	else{
		a-=a*0.15;
		cout<<"El importe neto es: "<<a<<endl;
	}
	return 0;
}
