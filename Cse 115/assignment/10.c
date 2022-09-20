#include<stdio.h>
int checkPalindrome();
int main()
{
    int m,n,i,result;
    int count=0,pal;
    printf("Enter n: ");
    scanf("%d",&pal);
    i=1;
    while(count<pal)
    {

        result= checkPalindrome(i);
        if(result==i)
        {
            printf("%d is palindrome\n",i);
            count++;
        }

        i++;


    }
}



int checkPalindrome(int num)
{
    int rem,revers=0;

    while(num!=0)
    {
        rem=num%10;
        revers=revers*10 + rem;
        num=num/10;
    }

    return revers;
}
