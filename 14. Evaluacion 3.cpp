#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int a,b,c,x;
   cout<<"Ingrese a, b y c: "<<endl; cin>>a>>b>>c; cout<<endl;
     x=(-(b)+sqrt((pow(b,2)-4*a*c)))/(2*a);
   cout<<"El resultado es: "<<x<<endl;
	return 0;
}
