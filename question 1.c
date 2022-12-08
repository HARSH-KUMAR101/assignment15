/*Write a function to find the greatest number from the given array of any size. (TSRS)*/
#include<stdio.h>
int maximum(int a[],int b)
{ int max=a[0],i;
      for(i=1;i<b;i++)
      { if(max<a[i])
          max=a[i];
      }
 return max;
}
int main()
{ int a[10],i,ans;
    printf("enter any 10 numbers and the maximum num:\n ");
      for(i=0;i<10;i++)
      {
          scanf("%d",&a[i]);
      }
    ans=maximum(a,10);
      printf("maximum number is %d",ans);
  return 0;
}
