#include<iostream>
using namespace std;
int main()
{
float a,x=1,b,s=0,f;
do{

cout<<"Digite un numero"<<endl; 
cin>>b;
if(b>0){
	x++;
}
s=s+b;

}while(b!=0);

cout<<"La media es: "<<s/x;
return 0;
}
