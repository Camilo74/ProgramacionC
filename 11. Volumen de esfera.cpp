#include<iostream>
#include<math.h>
#define pi 3.141592
using namespace std;
int main(){
	float r,a,b;
	cout<<"Digite el radio de la esfera: "<<endl; cin>>r;
	a=4/3*(pi*pow(r,3));
	cout.precision(4);
	cout<<"El volumen de la esfera es: "<<a;
	return 0;
}
