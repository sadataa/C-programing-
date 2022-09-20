#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main (){


int size,i;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int str[size];
    printf("Enter the elements of aray: ");

    for( i=0; i<size; i++)
    {
        scanf("%d",&str[i]);
    }






  printf("even: ");

for(i=0;i<=size; i++)

{

if(str[i]%2==0){


    printf("%d\n",str[i]);
}

}







return 0;
}
