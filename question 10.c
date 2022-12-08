/*Write a function in C to count the frequency of each element of an array.*/
#include<stdio.h>
void hash(int a[],int b)
{ int h[100]={0},i;
    for(i=0;i<b;i++)
    {
      h[a[i]]++;
    }
   for(i=0;i<100;i++)
   { if(h[i]!=0)
     printf("%d ==> %d\n",i,h[i]);
   }
}
int main()
{ int n,i;
    printf("enter the length of the array: ");
    scanf("%d",&n);
  int a[n];
     printf("enter elements of the array\n");
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
    hash(a,n);
 return 0;
}
