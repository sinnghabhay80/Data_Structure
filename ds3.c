/*max and min of an array.*/
#include<stdio.h>
int main()
{
    int n,a[50],i,max,min;
    printf("Enter the number of elements:");
    scanf("%d",&n);
     printf("Enter Elements:");
    for(i=0;i<n;i++)
          scanf("%d",&a[i]);
    max=min=a[0];
    for(i=0;i<n;i++)
    {
         if(a[i]>max)
            max=a[i];
          else if(a[i]<min)
            min=a[i];
    }
      printf("Max:%d , Min:%d",max,min);
      return 0;
}
