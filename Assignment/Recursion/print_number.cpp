#include<iostream>
using namespace std;
int print(int n)
{	
	if(n==1)
	{
	  cout<<n<<" ";
	  return 1;
	}

	print(n-1);
	cout<<n<<" ";
	
}
int main()
 {
    int n;
	cin>>n;
	print(n);
}
//5 input
//12345 o/p

