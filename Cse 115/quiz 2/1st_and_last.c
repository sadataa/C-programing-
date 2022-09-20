#include <stdio.h>


int main (){



int arr[100]={1,5,7,5};
int i , size=4 , val=5;

int first=-1,last=-1;

for(i=0;i<=size;i++){

    if(arr[i]==val){



            if(first==-1||last==-1){



                first=i;
                last=i;
            }


            else{


                last=i;
            }





    }





}



if(first!=-1){


    printf("first=%d",first);

    printf("last=%d",last);


}

else{
     printf("not found");
}



return 0;
}

