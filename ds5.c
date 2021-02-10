/*Linear and Binary Search*/
#include<stdio.h>
int binsearch(int arr[],int n)
{
    int item,i,lb=0,ub=(n-1),mid,pos=n;
    printf("\n\n\t Enter the Number You Want to Search:");
    scanf("%d",&item);
    while(lb<=ub)
    {
        mid=(ub+lb)/2;
        if(arr[mid]==item)
        {
            pos=mid+1;
            return pos;
        }
        else if(arr[mid]>item)
            ub=mid-1;
        else
            lb=mid+1;
    }
    return pos;
}

int linsearch(int arr[],int n)
{
     int item,i=0,pos=n;
      printf("\n\n\t Enter the Number You Want to Search:");
     scanf("%d",&item);
     while(i<n)
     {
         if(arr[i]==item)
         {
             pos=i+1;
             return pos;
         }
         else
            i++;
     }
     return pos;
}
void main()
{
    int a[50],ch,num,n,i,pos;
    printf("\n Which Kind of Array Do You Want to Enter:-\n\n\t1. Sorted Array\n\n\t2. Unsorted Array\n\n\tEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :   printf("\n\n\tHow many elements you want to Enter:");
                        scanf("%d",&n);
                        printf("\n\n\t Enter Your Sorted Array:");
                        for(i=0;i<n;i++)
                            scanf("%d",&a[i]);
                        pos=binsearch(a,n);
                        if(pos>=n)
                            printf("\n\n\t Element does not exist in the Provided Array!!");
                        else
                            printf("\n\n\t Element found at %d Position.",pos);
                        break;

        case 2: printf("\n\n\tHow many elements you want to Enter:");
                        scanf("%d",&n);
                        printf("\n\n\t Enter Your Unsorted Array:");
                        for(i=0;i<n;i++)
                            scanf("%d",&a[i]);
                        pos=linsearch(a,n);
                        if(pos>=n)
                            printf("\n\n\t Element does not exist in the Provided Array!!");
                        else
                            printf("\n\n\t Element found at %d Position.",pos);
                        break;

        default : printf("\n Invalid Choice!!!");
    }
}
