/*String to Integer
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 <= |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567
--------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int length(char input[])
{
	if(input[0]=='\0')
	{
		return 0;
	}
	int len =length(input+1);
	return 1+len;  //return 1+length(input+1);
	
}
int stringToInteger1(char input[], int len)
{
	if(len == 0)
	{
		return input[len]-48;
	}
	int smallOutput = stringToInteger1(input,len-1);
	int lastElement = input[len]-48;
	return smallOutput*10+lastElement;
}
int stringToInteger(char input[])
{
	int len = length(input);
	//cout<<len<<endl;
	return stringToInteger1(input, len-1);
	
}
int main()
{
	char input[50];
	cin>>input;
	int x = stringToInteger(input);
	int a=10;
	cout<<a+x<<endl;
}