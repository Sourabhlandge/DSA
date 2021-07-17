#include<iostream>
using namespace std;
int checkNumber(int array[], int size, int x)
{
	if(array[0] == x)
	{
		return 1;
	}
	if(size == 1)
	{
		return -1;
	}
	return checkNumber(array+1, size-1, x);
}
int main()
{
	int size,x;
	cout<<"Enter size of array:";
	cin>>size;
	int array[size];
	cout<<"Enter Element of array:";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter CheckNumber:";
	cin>>x;
	cout<<checkNumber(array, size, x)<<endl;
}





/* Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
'true' or 'false'
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true
Sample Input 2 :
3
9 8 10
2
Sample Output 2 :
false */


