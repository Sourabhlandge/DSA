#include<iostream>
using namespace std;
int multiply(int m, int n)
{
	return m*n;
}
int main()
{
	int m, n;
	cin>>m>>n;
	cout<<multiply(m, n);
}