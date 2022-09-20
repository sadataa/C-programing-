
#include <stdio.h>

#include <math.h>

int getseriseSum(int a, int n);

int main() {
    int a,n;
    printf("enter value of a ");
    scanf("%d",&a);
    printf("enter value of n ");
    scanf("%d",&n);
  getseriseSum(a,n);

return 0;

}

int getseriseSum(int a, int n){
  int i;
  float sum=0 ;


for (i=1;i<=n;i++ ){


//printf("%d\n",i);
sum=sum+(i/pow(a,i));

}

printf("sum =%f\n",sum);



}
