#include <iostream>
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
void pairStar(char input[]) {
    int len = length(input);

    if(input[0] == '\0'){
        return ;
    }
    if(input[0] == input[1]){

        for(int i = len; i >= 2; i--){
            
       input[i] = input[i-1];
        }
        
        input[2] = input[1];
        input[1] = '*';
    }
    pairStar(input+1);
    
}
  
// Driver code
int main()
{
    char input[100];
	cin>>input;
    pairStar(input);
    cout << input << endl;
}