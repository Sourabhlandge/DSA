#include<iostream>
using namespace std;
int allIndexes1(int input[], int size, int x, int output[], int &oi, int index=0) 
{
if(index == size )
{
    return 0;
}
if(input[index] == x)
{
    output[oi] = index;
    oi++;
}
 allIndexes1(input, size, x, output, oi, index+1);
}
int allIndexes(int input[], int size, int x, int output[]) 
{
int oi = 0;
allIndexes1(input, size, x, output,oi);
return oi;
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}
/*
All Indices of Number
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
indexes where x is present in the array (separated by space)
Constraints :
1 <= N <= 10^3
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/