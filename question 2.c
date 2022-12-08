/*Write a function to find the smallest number from the given array of any size. (TSRS)*/
#include<stdio.h>
int minimum(int a[],int b)
{ int min=a[0],i;
      for(i=1;i<b;i++)
      { if(min>a[i])
          min=a[i];
      }
 return min;
}
int main()
{ int a[10],i,ans;
    printf("enter any 10 numbers and the minimum num:\n ");
      for(i=0;i<10;i++)
      {
          scanf("%d",&a[i]);
      }
    ans=minimum(a,10);
      printf("minimum number is %d",ans);
  return 0;
}
