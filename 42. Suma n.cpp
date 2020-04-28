#include<iostream>
using namespace std;
int main()
{
      int sum, i,n;
      cout<<"Digite hasta que numero ira la suma: "<<endl;
      cin>>n;
      sum = 0;

      for (i=1; i<=n;i++)
          sum = sum +i;
          cout<<"La suma de los numeros es: "<<sum<<endl;

      system("PAUSE");
      return 0;
}
