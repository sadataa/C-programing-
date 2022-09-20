#include <stdio.h>
int getseriseSum(int n);

int main (){
     int x;
     printf("Enter the value :");
     scanf("%d",&x);
     getseriseSum(x);

    return 0;
}
int getseriseSum(int n){
    int i,j,b=0;
 int k=0, z=0;
for ( i=2 ;i<=n;i=i+4){


      k=k+i;
      //    printf (" k=%d \n",k);
      }
      for ( j=4 ;j<=n;j=j+4){

          z=z+j;
         //    printf (" j=%d \n",z);

    }

    b= b-k+z;
     printf (" sum=%d \n",b);

}
