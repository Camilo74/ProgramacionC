#include<iostream>
#include<math.h>
using namespace std;
int main(){
 float a,b,c,x1,x2;
 cout<<"Ingrese el valor de a:";
 cin>>a;
 cout<<"Ingrese el valor de b:";
 cin>>b;
 cout<<"Ingrese el valor de c:";
 cin>>c;
 x1=(-(b)+sqrt((pow(b,2)-4*a*c)))/(2*a);
 x2=(-(b)-sqrt((pow(b,2)-4*a*c)))/(2*a);
 cout<<"x1="<<x1<<endl;
 cout<<"x2="<<x2;
 
 return 0;
}
