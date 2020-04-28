#include<iostream>
using namespace std;
int main()
{
float a,x,b,s=0,f;
cout<<"Digite la cantidad de numeros a analizar: "; cin>>x;
for(a=1; a<=x;a++){
cout<<"Digite el numero "<<a<<endl; 
cin>>b;
s=s+b;
}
cout<<"La media es: "<<s/x;
return 0;
}
