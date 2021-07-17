#include<iostream>
using namespace std;
// Change in the given string itself. So no need to return or print anything
 int length(char input[], int &len) {
    for(int i = 0; input[i] != '\0'; i++) { 
        len++;
    }
    return len;
}
char removeX1(char input[], char ans[], int len, int &i) {
    // Write your code here
  if(len == 0)
  {
      return;
  }
  if(input[0]!='x')
  {
      ans[i]=input[0];
	  i++;
  }
   ans+removeX1(input+1, ans, len-1, i) ;
}
char removeX(char input[]) {
    // Write your code here
  int len = 0,i=0;
  char ans[100];
  len = length(input,len);
  removeX1(input, ans, len, i);  
  return ans;
}
int main(){
    //cout<<"Hello World"<<endl;
	char input[50] = "xcxvxvxav";
	removeX(input);
	cout<<input<<endl;
	/* 
	cout<<input[0]<<endl;
	int len = 0;
	for(int i=0;input[i]!='\0';i++)
	{
		len++;
	}
	char ans[];
	if (input[0]!='x')
	{
	cout<<"NOthing__"<<s<<endl;
	}
	cout<<len<<endl; */
}