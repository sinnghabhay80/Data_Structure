/* traversing greater than avg*/
#include<stdio.h>
int main()
{
    int a[10],sum=0,avg=0,c=0,i;
    printf("Enter Elements:");
    for(i=0;i<10;i++)
      {
          scanf("%d",&a[i]);
          sum+=a[i];
      }
     avg=sum/10;
     for(i=0;i<10;i++)
        if(a[i]>avg)
          c++;
     printf("Greater than avg:%d.",c);
     return 0;
}
