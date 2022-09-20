
#include<stdio.h>
#include<string.H>



int main (){

char str[1000];


int i,j,k;

char x;

printf("get string ");
gets(str);




  	for(i = 0; str[i] != '\0'; i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}





printf("%s",str);

return 0;
}
