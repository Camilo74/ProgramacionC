#include<iostream>
using namespace std;
int main(){
	int a,b,c=0;
	cout<<"Digite un numero: "; cin>>a;
	for(b=1;b<=a;b++){
		if(a%b==0){
			c++;
		}
	}
	if(c==2){
			cout<<"Es primo"<<endl;
		}else
		{
			cout<<"No es primo"<<endl;
		}
	return 0;
}
