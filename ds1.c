/*traversing even-odd*/
#include<stdio.h>
int main()
{
    int a[15],i,oddc=0,evenc=0;
    printf("Enter Elements:");
    for(i=0;i<15;i++)
      {
          scanf("%d",&a[i]);
          if(a[i]%2==0)
            evenc++;
          else
            oddc++;
      }
      printf("odd:%d , Even:%d",oddc,evenc);
    return 0;
}
