#include<iostream>
#include<math.h>
#define  pi 3.141592
using namespace std;
int main(){
	int radio,a,b;
	cout<<"Digite el valor del radio: "; cin>>radio; cout<<endl;
	
	a=2*pi*radio;
	b= pi*radio*radio;
	
	cout<<"La longitud de la circunferencia es: "<<a<<endl;
	cout<<"El area de la circunferencia es: "<<b<<endl;
	
	return 0;
}
