#include <iostream>
using namespace std;
int main ()
{
char c;
int n;
cout << "Enter Number: ";
cin>>n;
for (int i=0;i<n;i++)// creates character till the entered number
{
	c=i;
	cout <<i<<"\t"<<c<<endl;
}
return 0;
}
