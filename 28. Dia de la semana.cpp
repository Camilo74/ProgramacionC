#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Digite un numero del 1 al 7 "<<endl; cin>>a; cout<<endl;

switch(a)
{
	case 1: cout<<"Lunes"; break;
	case 2: cout<<"Martes"; break;
	case 3: cout<<"Miercoles"; break;
	case 4: cout<<"Jueves"; break;
	case 5: cout<<"Viernes"; break;
	case 6: cout<<"Sabado"; break;
	case 7: cout<<"Domingo"; break;
	default: cout<<"el numero no esta entre 1 y 7"; break;
}
return 0;

}
