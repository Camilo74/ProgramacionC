#include<iostream>
#include<math.h>
using namespace std;
int main(){

float C, F;
cout<<"Digite la temperatura en grados celsius: "<<endl; cin>>C;
F=(C*1.8)+32; //1.8 es una constante
cout<<"\nLa temperatura registrada en grados Farenheit es: "<<F<<endl;
return 0;
}
