#include<string.h>
#include<stdio.h>
#include<ctype.h>
int checkVowel(char);
int main()
{
    int size ;
     int d=0,s,i;
    printf("Enter size: ");
    scanf("%d",&size);


    printf("Enterchar: ");
    scanf("%d",&s);


  int nh[size];






    printf("Enter Your String: ");


    for(i=0;i<=size;i++){

    scanf("%d",&nh[i]);

    }





    for( i=0 ; i<=size; i++)
    {

            if(nh[i]==s){

                d++;
            }



}

if(d==0){

     printf("not found  ");

}
else{

   printf(" found=%d",d);
}

return 0;
}
