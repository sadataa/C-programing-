#include<stdio.h>
    int main (){



    int a[100]={4,5,4,5,10,11,12,5};


int length,i,j;







  for (int i = 0; i < length; i++)
  {
        int match_found = 0;
    // iterate over all elements with index j

    for (int j = 0; j < length; j++)
      // if we find a matching elements (that is not the same element) then
      // the element is not unique
      if (a[i] == a[j] && i != j)
        match_found = 1;

    // only print out the element if it is NOT unique
    if (match_found==0) printf("%d\n", a[i]);
  }



    return 0;
}
