#include<iostream>
using namespace std;
int checkNumber(int array[], int size, int x)
{
	if(array[size] == x)
	{	
		return size;
	}
	if(size == 1)
	{
		return -1;
	}
	cout<<"op1: "<<array[size]<<endl;
	cout<<"op2: "<<array[size-1]<<endl;
	return checkNumber(array, size-1, x);
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





/* Last Index of Number
Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
last index or -1
Constraints :
1 <= N <= 10^3
Sample Input :
4
9 8 10 8
8
Sample Output :
3 */


