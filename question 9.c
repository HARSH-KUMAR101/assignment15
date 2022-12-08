/*Write a function in C to merge two arrays of the same size sorted in descending
order.*/
#include<stdio.h>
void merge(int a1[],int a2[])
{ int a3[20],i,j,temp;
      for(i=0;i<20;i++)
      {   if(i<10)
          a3[i]=a1[i];
        else
          a3[i]=a2[i-10];
      }
   for(i=0;i<19;i++)
   { for(j=i+1;j<20;j++)
     { if(a3[i]<a3[j]){
         temp=a3[i];
         a3[i]=a3[j];
         a3[j]=temp;
     }
     }
   }
   printf("merged and sorted array in descending order :\n");
   for(i=0;i<20;i++)
   {
     printf("%d ",a3[i]);
   }
}
int main()
{ int a1[10]={10,12,9,13,11,34,67,12,48,20};
  int a2[10]={12,15,16,18,49,81,11,27,17,28};
     merge(a1,a2);
 return 0;
}
