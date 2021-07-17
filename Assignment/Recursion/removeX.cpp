#include<iostream>
using namespace std;
void removeX(char input[]) {
  if(input[0] == '\0')
  {
      return;
  }
  if(input[0]!='x')
  {		
	  cout<<"Using recursion: "<<input<<endl;
      removeX(input+1);
	  cout<<"Using recursion: "<<input<<endl;
  }
  if(input[0]=='x')
   {
   		int i=1;
       for(;input[i]!='\0';i++)
       {
           input[i-1]=input[i];
       }
       input[i-1]=input[i];
	   cout<<"Using for loop: "<<input<<endl;
       removeX(input);
   }
}
int main()
{
	char input[100];
	cin>>input;
	removeX(input);
	cout<<input<<endl;
}