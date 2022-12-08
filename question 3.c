/*Write a function to sort an array of any size. (TSRN)*/
#include<stdio.h>
void sort(int a[],int b)
{ int i,j,temp;
        for(i=0;i<b-1;i++)
         { for(j=i+1;j<b;j++)
           { if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
           }
         }
         for(i=0;i<b;i++)
         {
            printf("%d ",a[i]);
         }
}
int main()
{  int n,i;
    printf("enter length of the array: ");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    sort(a,n);
 return 0;
}
