#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int h,m,s, segundos;
	cout<<"Digite una hora (HH-MM-SS)"<<endl; cin>>h>>m>>s;
	h=segundos/3600;
	segundos=segundos%3600;
	m=segundos/60;
	segundos=segundos%60;
	s=segundos;
	cout<<"horas: "<<h<<endl<<"Minutos: "<<m<<endl<<"Segundos: "<<s;
	return 0;
}

	
	
