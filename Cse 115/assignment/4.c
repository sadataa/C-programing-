
/////1812796642
#include <stdio.h>

void LCM(int a ,int b);
int main() {

    int a, b;
printf("Enter two integer: ");
    scanf("%d %d",&a,&b);


 LCM(a ,b);
Gdc(a,b);

return 0;
}


void LCM(int a ,int b){
       int  fact=0,learge;


   learge =(a>b)?a:b;
  // printf("%d",learge);
  while (fact==0){

      if(learge%a==0 &&learge%b==0){
      printf(" the lcm=%d\n",learge);
      fact=1;

  }
  else{

      learge++;
  }

  }


}

void Gdc(int num1,int num2){
 int  gcd;


    int coun=1,small;
    small= num1<num2 ? num1:num2;

    while(coun<=small)
    {
        if (num1%coun== 0 && num2%coun==0)
        {
            gcd=coun;
        }

        coun++;

    }

    printf(" the GDC = %d",gcd);


    return 0;
}
