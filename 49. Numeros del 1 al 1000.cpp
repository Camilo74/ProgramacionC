#include<iostream>
using namespace std;
int main(){
	char r;
	int x=1, max=1000, paso= 20;
	do{
		cout<<x<<endl;
		if(x%paso==0 && x!=max){
			cout<<endl<<"Desea continuar (s/n)";
			cin>>r;
		}
	}while(r!='n' && x++<max);
	cout<<endl;
	
	return 0;
}
