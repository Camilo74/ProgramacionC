#include<iostream>
using namespace std;
int main(){
	char a;
	cout<<"Digite una letra minuscula"<<endl; cin>>a; cout<<endl;
	switch(a)
	{
		case 'a':cout<<"Es una vocal"; break;
		case 'e':cout<<"Es una vocal"; break;
		case 'i':cout<<"Es una vocal"; break;
		case 'o':cout<<"Es una vocal"; break;
		case 'u':cout<<"Es una vocal"; break;
		default:cout<<"No es una vocal"; break;
	}
	return 0;
}
