#include<iostream>
using namespace std;
int count(int n)
{	
	if(n==0)
	{
	  return 0;
	}

	int smallAns = count(n / 10);
	cout<<n<<endl;
	return smallAns + 1;
	
}
int main()
 {
    int n;
	cin>>n;
	cout<<count(n)<<endl;
}
//count of digits
//678--i/p
//3 --o/p
