
#include<stdio.h>
void fill_array(int* x, int, int);
int main(){
	int x[5],i;

	for (i=0; i<5;i++){
	  printf("Get the number %d ",i);
    scanf ("%d",&x[i]);
	}
    fill_array(x, 5, 1);

	for (i=0; i<5;i++){
	  printf("the number are %d \n",x[i]);
	}
	return 0;
}


//void fill_array(int list[],int n, int in_val){
void fill_array(int *list,int n, int in_val){
	int i,max;

	max = *(list+0) ;


	for (i=0;i<n;i++)
	{

        if ( *(list+i)>max ){

            max=*(list+i);

        }

	}

	printf("max = %d\n",max );
}
