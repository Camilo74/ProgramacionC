#include<iostream>
using namespace std;
int main(){
	float a,b,c,d;
	cout<<"Ingrese el capital y los intereses"<<endl; cin>>a>>b; cout<<endl;
     c= a*(b/100);
	d= c*12;
	cout<<"El total de dinero tras 12 meses es: "<<d<<endl;
	return 0;
}
