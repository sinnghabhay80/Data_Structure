/*Insertion , Deletion and Display in a array (Menu Driven)*/
#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int num)
{
    int i;
    printf("\n\n The Current Array:");
    for(i=0;i<num;i++)
       printf("%d ",arr[i]);
}
int insert(int arr[],int num)
{
    int i,item,pos;
     if(num==50)
    {
        printf("\n\n\n\t\t OVERFLOW!!");
        return num;
    }
    printf("\n Enter the Position you want to enter the element at:");
    scanf("%d",&pos);
    printf("\n Enter the Item you want to Insert:");
    scanf("%d",&item);
    if(pos<=num)
    {
    i=num-1;
    while(i>=pos)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[pos]=item;
    num++;
    }
    else if(pos>num)
    {
        printf("\n\n Inserting at the End off the Array...");
        arr[num]=item;
        num++;
    }
    printf("\n\n\t Insertion Successful!!");
    return num;
}
int del(int arr[],int num)
{
    int i,pos;
    if(num==0)
     {
         printf("\n\n\n\t\tUNDERFLOW!!");
         return num;
     }
     printf("\nWhich element position you want to delete:");
     scanf("%d",&pos);
     i=pos;
    while(i<=(num-1))
    {
        arr[i]=arr[i+1];
        i++;
    }
    num--;
    printf("\n\n\t Deletion Successful!!");
    return num;
}
int main()
{
    int a[50],n,i,ch,t=1;
    printf("\n How many elements you want in the array:");
    scanf("%d",&n);
    if(n>=0 && n<=50)
    {
    printf("\n Enter the Elements of Array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Elements Entered Successfully!!");
    while(t=1)
    {
    printf("\n\n\n\t What Operation would you like to perform: \n\n\t1.Insertion in the Array\n\n\t2.Deletion from the Array\n\n\t3.Display elements of the Array\n\n\t4.Exit\n\n\tEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1 :  n=insert(a,n);
                      break;
       case 2 :  n=del(a,n);
                      break;
        case 3 : display(a,n);
                       break;
        case 4 : exit(0);
                       break;
        default : printf("\n Invalid!!");
    }
    }
    }
    else
    {
        printf("\n\n\t\t INVALID!!\n\n\t\t\t\tRedirecting.....");
        system("cls");
        main();
    }
    return 0;
}
