

# include <stdio.h>
int  found(int *a, int leng,int *b);
int main(){

int arr[]={10,11,5,6,5};

int arr2[]={10,11,5,6,5};
int len;

printf("enter the length ");

scanf("%d",&len);



found(arr,len,arr2);

}
 int found (int *a,int leng,int *b){

 int i,array[10];
 for(i=0;i<leng;i++){


       array[i]=*(a+i)+*(b+i);
       printf("%d\n",array[i]);
 }



 }

