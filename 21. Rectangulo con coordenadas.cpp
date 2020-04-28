#include<iostream>
using namespace std;
int main(){
	int x1,x2,y1,y2,resultado,d,e;
	cout<<"Digite las coordenadas: "<<endl;
	cout<<"x1: "; cin>>x1;
	cout<<"x2: "; cin>>x2;
	cout<<"y1: "; cin>>y1;
	cout<<"y2: "; cin>>y2;
	if(x1>x2){
		d=x2-x1;
	}else
	{
	
	d=x1-x2;
}

if(y1>y2){
		e=y2-y1;
	}else
	{
	
	e=y1-y2;
}
resultado=d*e;
if(resultado==0){
	cout<<"Las coordenadas dan una recta"<<endl;
}else
{
	cout<<"El area del rectangulo es: "<<resultado<<" metros cuadrados"<<endl; 
}
return 0;
}
