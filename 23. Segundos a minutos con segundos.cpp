#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int vi,m,s;
	cout<<"Digite los segundos: "; cin>>vi; cout<<endl;
	m=vi/60;
	vi=vi%60;
	s=vi;
	cout<<m<<" minutos con "<<s<<" segundos "<<endl;
	return 0;
}

