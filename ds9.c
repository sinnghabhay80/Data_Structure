/*Insertion and deletion in ordinary and circular queue. */
#include<stdio.h>
#include<stdlib.h>
#define size 10
 int front=-1,rear=-1;
void display(int q[size])
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i>=front && i<=rear)
            printf(" %d ",q[i]);
        else printf(" ~ ");
    }
}
int insertordinary(int q[size])
{
    int item;
       if(rear==(size-1))
       {
            printf("\n\n\t\tOVERFLOW!!!");
            return 0;
       }
       printf("\n\n\t\t Enter the Item you want to Insert:");
       scanf("%d",&item);
       if(rear==-1)
        front ++;
       rear++;
       q[rear]=item;
       display(q);
       return 0;
}

int deleteordinary(int q[size])
{
    if(front==-1)
    {
        printf("\n\n\t\tUNDERFLOW!!!");
        return 0;
    }
    if(front==rear)
    {
        front=-1;rear=-1;
    }
    front++;
    display(q);
    return 0;
}

int insertcircular(int q[size])
{
    int item;
       if(front=(rear+1)%size)
       {
            printf("\n\n\t\tOVERFLOW!!!");
            return 0;
       }
       printf("\n\n\t\t Enter the Item you want to Insert:");
       scanf("%d",&item);
       if(rear==-1)
        front ++;
       rear=(rear+1)%size;
       q[rear]=item;
       display(q);
       return 0;
}

int deletecircular(int q[size])
{
    if(front==-1)
    {
        printf("\n\n\t\tUNDERFLOW!!!");
        return 0;
    }
    if(front==rear)
    {
        front=-1;rear=-1;
    }
    front=(front+1)%size;
    display(q);
    return 0;
}

int main()
{
    int Q[size],ch,ch1,flag;
    while(1)
    {
    printf("\n\n\n\t\t Which kind of Queue do you want to Implement:\n\n\t\t\t 1.Ordinary Queue\n\n\t\t\t 2.Circular Queue\n\n\t\t\t 3.Exit\n\n\t\t\t Enter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1 :    flag=0;
                     while(flag==0)
                    {
                             printf("\n\n\n\t\t Which kind of Operation do you want to Implement in the Queue:\n\n\t\t\t 1.Insertion \n\n\t\t\t 2.Deletion\n\n\t\t\t 3.Display\n\n\t\t\t 4.Go Back\n\n\t\t\t Enter Your Choice:");
                           scanf("%d",&ch1);
                            switch(ch1)
                       {
                          case 1 :   insertordinary(Q);
                                          break;
                          case 2 :  deleteordinary(Q);
                                          break;
                          case 3 :  display(Q);
                                          break;
                          case 4 :   flag=1;
                                          break;
                          default : printf("\n\n\t\t\tINVALID CHOICE!!!");
                       }
                    }
                    if(flag==1)
                        break;

        case 2 :  flag=0;
                       while(flag==0)
                       {
                             printf("\n\n\n\t\t Which kind of Operation do you want to Implement in the Queue:\n\n\t\t\t 1.Insertion \n\n\t\t\t 2.Deletion\n\n\t\t\t\n\n\t\t\t3.Display\n\n\t\t\t4.Go Back\n\n\t\t\t Enter Your Choice:");
                           scanf("%d",&ch1);
                             switch(ch1)
                           {
                          case 1 :   insertcircular(Q);
                                          break;
                          case 2 :  deletecircular(Q);
                                          break;
                          case 3 :  display(Q);
                                          break;
                          case 4 :   flag=1;
                                          break;
                          default : printf("\n\n\t\t\tINVALID CHOICE!!!");
                          }
                       }
                         if(flag==1)
                              break;

          case 3 : exit(0);
                       break;

        default : printf("\n\n\t\t\tINVALID CHOICE!!!!");
    }
    }
    return 0;
}
