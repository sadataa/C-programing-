#include<stdio.h>


int main (){

void getridofshift(char str[], char ch);




char st[100],c;
printf("enter string -" );
gets(st);

printf("Enter the charecter ");
scanf("%c",&c);

getridofshift(st,c);

}
getridofshift(char str[], char ch){

    char s2[100];
    int i ,j ;

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









