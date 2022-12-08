/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
int main()
{ int n,i,d,num,temp,j;
    printf("enter the size of the array: ");
    scanf("%d",&num);
    printf("enter direction of shifting array\n");
    printf("enter 1 for right\nenter 2 for left\n");
    scanf("%d",&d);
    printf("enter num for shifting position: ");
    scanf("%d",&n);
 int a[num];
    printf("enter values for the array:");
      for(i=0;i<num;i++)
      {
        scanf("%d",&a[i]);
      }
     if(d=1){
      for(i=1;i<=n;i++)
     {
      temp=a[num-1];
     for(j=num-1;j>=1;j--)
     { a[j]=a[j-1];
     }
       a[0]=temp;
     }
     }
     else
     { for(i=1;i<=n;i++)
     {
      temp=a[0];
     for(j=0;j<num;j++)
     { a[j]=a[j+1];
     }
       a[num-1]=temp;
     }

     }

     printf("==== shifted values are ====\n");
     for(i=0;i<num;i++)
     {
        printf("%d ",a[i]);
     }

}
