#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int A,B,C,D;
	cout<<"Digite A y B: "<<endl;
	cin>>A;
	cin>>B;
	C=A/B;
	D=A%B;
	cout<<"El resultado de la division es: "<<C<<" y su residuo es: "<<D<<endl;
	return 0;
}
