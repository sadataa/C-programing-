# include <stdio.h>
    int main(){
    int a=200,x=0,sum=0,avg;

    while(a<=250){

        if(a%4==0&&a%5!=0){
            x++;
            sum=sum+a;
            printf("%d\n",a);

        }
        a++;
    }
    avg=sum/x;
    printf("a =%d\n",x);
    printf("sum =%d\n",sum);

printf("%d",avg);

    return 0;

        }
