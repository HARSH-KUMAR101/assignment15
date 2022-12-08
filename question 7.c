/*Write a function in C to count a total number of duplicate elements in an array.(Means
elements that occurs 2 times in an array)*/
#include<stdio.h>
void hash(int a[],int b)
{ int h[100]={0},i,count=0;
    for(i=0;i<b;i++)
    {
      h[a[i]]++;
    }
   for(i=0;i<100;i++)
   { if(h[i]>=2)
       count++;
   }
   printf("total %d duplicates are there in the array",count);
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
