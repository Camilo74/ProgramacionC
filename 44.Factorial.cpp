#include<iostream>
using namespace std;
int main() {
	float fact;
	float i;
	float n;
	cout<<"Digite un numero para calcular: ";
	cin >> n;
	i = 1;
	fact = 1;
	if (n==0) {
		fact = 1;
	} else {
		while (i<=n) {
			fact = fact*i;
			i = i+1;
		}
	}
	cout <<"El factorial de "<<n<<" es: "<< fact << endl;
	return 0;
}

