#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float km,m,a,b,c;
	cout<<"Digite los km recorridos y los minutos que transcurren: "; cin>>km>>m;
	a=km*1000;
	b=m*60;
	c=a/b;
	cout.precision(3);
	cout<<"La velocidad del proyectil es: "<<c<<" m/s";

return 0;
}
