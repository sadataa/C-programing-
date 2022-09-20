
#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter the coordinates (x,y) value: ");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0){
        printf("Quadrant -I");
    }
    else if(x<0 && y>0){
        printf("Quadrant -II");
    }
    else if(x<0 && y<0){
        printf("Quadrant -III");
    }
    else if(x>0 && y<0){
        printf("Quadrant -IV");
    }

    else
    {
        printf("Invalid input please enter integer value: ");

    }
}
