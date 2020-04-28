#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Digite dos numeros: "; cin>>a>>b; cout<<endl;
	cout<<"Antes"<<endl<<endl;
	cout<<"A: "<<a<<endl;
	cout<<"B: "<<b<<endl;
	if(a>b){
		c=b;
		b=a;
		a=c;
		
	}
	cout<<"\n\nDespues"<<endl<<endl;
	cout<<"A: "<<a<<endl;
	cout<<"B: "<<b<<endl;;
	return 0;
}
