#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double n;
	n=log(2)/log(1.05);
	cout.precision(4);
	cout<<"Cualquier capital con 5% de intereses se duplicara en "<<n<<" años";
	return 0;
}

/*

Cn=2Co
Cn=Co(1+i)^n  => 2Co=Co(1+i)^´n   => 2=(1+i)^n   

=> log2=log(1+i)^n    => log2=nlog(1+i)        => log2/log(1+i)=n


=>log2/log1.05=n    */

