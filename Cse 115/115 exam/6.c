
#include<stdio.h>

void getridofshift(char str[], char ch);
int main()
{
   char s1[100],s2[100];
   int i, j;
   char c;

   printf("Enter string: ");
 gets(s1);

  printf("Enter the charecter ");
scanf("%c",&c);
getridofshift(s1,c);
}

void getridofshift(char str[], char ch){


   char s2[100];
   int i, j;

   for(i=0,j=0;str[i]!='\0';i++)
   {
     if(!(str[i]==ch))
     {
        s2[j]=str[i];
        j++;
     }
   }
   s2[j]='\0';

   printf("Displaying string: %s",s2);

}
