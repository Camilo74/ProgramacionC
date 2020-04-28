#include<iostream>
using namespace std;
int main(){
	float pulgadas, pies, metros;
	cout<<"Digite los metros: "; cin>>metros; cout<<endl;
	pulgadas=metros*39.27;
	pies=pulgadas/12;
	cout<<"Los pies de los metros registrados son: "<<pies<<endl;
	return 0;
}
