/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
#include<stdio.h>
int hash(int a[],int b)
{ int count=0,i,n;
   for(i=0;i<b-1;i++)
   {   if(a[i]==a[i+1]){
        break;
       }
   }n=a[i];
    for(i=0;i<b;i++)
    { if(a[i]==n){
        if(a[i+1]==n)
           count++;
        else if(a[i+1]!=n){
           count=count+1;
            break;
        }
     }
    }
    printf("%d is the first adjacent duplicate which occurs %d times at first time ",n,count);
}
int main()
{ int n,i,ans;
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
