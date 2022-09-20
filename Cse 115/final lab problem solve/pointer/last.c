
# include <stdio.h>
int  found(int *a, int leng,int found);
int main(){

int arr[]={10,11,5,6,5};
int len ,find=5;

printf("enter the length ");

scanf("%d",&len);



found(arr,len,find);

}
 int found (int *a,int leng,int found){

 int i;
 for(i=0;i<leng;i++){

        if(*(a+i)==found){

            printf("Found in %d\n",i+1);
                        printf("address in %d",(a+i));


        }
        else {

            printf("address in %d\n",(a+i));

        }




 }


 }
