#include<iostream>
using namespace std;
int sum(int input[], int size)
{
	if(size == 0)
	{
		return 0;
	}
	return input[0]+sum(input+1, size-1);
}
int main()
{	
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	int input[size];
	cout<<"Enter Element of array:";
	for(int i=0;i<size;i++)
	{
		
		cin>>input[i];
		cout<<input[i];

	}
	cout<<"Sum of array: "<<sum(input,size)<<endl;
	
}
//Line 1 : An Integer N i.e. size of array
//Line 2 : N integers which are elements of the array, separated by spaces
//input--Enter size of array:4
//--Enter Element of array: 2 3 4 5
//output--2345Sum of array: 14