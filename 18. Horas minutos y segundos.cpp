#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int h,m,s, segundos=3700;
	h=segundos/3600;
	segundos=segundos%3600;
	m=segundos/60;
	segundos=segundos%60;
	s=segundos;
	cout<<"horas: "<<h<<endl<<"Minutos: "<<m<<endl<<"Segundos: "<<s;
	return 0;
}

	
	
