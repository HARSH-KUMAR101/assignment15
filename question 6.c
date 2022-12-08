/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
#include<stdio.h>
void reverse_array(int a[],int y)
{ int i,x;
     printf("reverse order array\n");
        for(x=0,i=y-1;x<y,i>=0;x++,i--)
        {
          printf("a[%d]=%d\n",x,a[i]);
        }
}
int main()
{ int n,num,i,x,y;
      printf("enter length of array: ");
      scanf("%d",&n);
      y=n;
   int a[n];
      for(i=0;i<n;i++)
      {
          printf("a[%d]=",i);
          scanf("%d",&a[i]);
      }
    reverse_array(a,y);
  return 0;
}
