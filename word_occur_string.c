#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i;
  	int count=0;
 
  	printf("\n Please Enter any String : ");
  	gets(str);
  	
  	
  	for(i = 0; i < strlen(str); i++)
  	{
  		if(str[i] == ' ')  
		{
  		
  		    count++;

 		}
 		
	}

	printf("\nTotal number of words in sentence is: %d",count+1);
  	return 0;
}