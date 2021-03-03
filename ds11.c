/*Insertion and deletion in DEQueue.*/
#include<stdio.h>
#include<stdlib.h>
#define size 10
int fronti=-1,reari=-1,fronto=-1,rearo=-1;

void display(int q[size],int front,int rear)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i>=front && i<=rear)
            printf(" %d ",q[i]);
        else printf(" ~ ");
    }
}

int inserti(int q[size])
{
    int item;
       if(reari==(size-1))
       {
            printf("\n\n\t\tOVERFLOW!!!");
            return 0;
       }
       printf("\n\n\t\t Enter the Item you want to Insert:");
       scanf("%d",&item);
       if(reari==-1)
        fronti ++;
       reari++;
       q[reari]=item;
       display(q,fronti,reari);
       return 0;
}

int deletei(int q[size])
{
    int ch;
    if(fronti==-1)
    {
        printf("\n\n\t\tUNDERFLOW!!!");
        return 0;
    }
    printf("\n\n\t\t\tFrom Which End Would You like to Delete here:\n\n\t\t\t\t1.Front\n\n\t\t\t\t2.Rear\n\n\t\t\tEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :  if(fronti==reari)
                       {
                             fronti=-1;reari=-1;
                        }
                        fronti++;
                        display(q,fronti,reari);
                        break;
        case 2 : if(fronti==reari)
                       {
                             fronti=-1;reari=-1;
                        }
                        reari -- ;
                        display(q,fronti,reari);
                        break;
       default : printf("\n\n\t\t\tINVALID CHOICE!!!");
    }
    return 0;
}

int inserto(int q[size])
{
    int item,ch;
       if(rearo==(size-1))
       {
            printf("\n\n\t\tOVERFLOW!!!");
            return 0;
       }
     printf("\n\n\t\t\tFrom Which End Would You like to Insert here:\n\n\t\t\t\t1.Front\n\n\t\t\t\t2.Rear\n\n\t\t\tEnter Your Choice:");
     scanf("%d",&ch);
     switch(ch)
    {
        case 1 :  printf("\n\n\t\t Enter the Item you want to Insert:");
                       scanf("%d",&item);
                       if(fronto<=0)
                       {
                           printf("\n\n\t\t\tCANNOT ENTER IN THE QUEUE THROUGH FRONT!!!");
                           break;
                       }
                       else
                            fronto -- ;
                       q[fronto]=item;
                       display(q,fronto,rearo);
                        break;
        case 2 :  printf("\n\n\t\t Enter the Item you want to Insert:");
                       scanf("%d",&item);
                        if(rearo==-1)
                            fronto ++;
                        rearo++;
                        q[rearo]=item;
                        display(q,fronto,rearo);
                        break;
       default : printf("\n\n\t\t\tINVALID CHOICE!!!");
    }
    return 0;
}

int deleteo(int q[size])
{
    if(fronto==-1)
    {
        printf("\n\n\t\tUNDERFLOW!!!");
        return 0;
    }
    if(fronto==rearo)
    {
        fronto=-1;rearo=-1;
    }
    fronto++;
    display(q,fronto,rearo);
    return 0;
}

int main()
 {
     int deqi[size],deqo[size],ch,ch1,flag;
     while(1)
     {
            printf("\n\n\t\t\tWhich DEQueue would you like to Execute:\n\n\t\t\t\t1.Input Restricted\n\n\t\t\t\t2.Output Restricted\n\n\t\t\t\t3.Exit\n\n\t\t\tEnter Your Choice:");
            scanf("%d",&ch);
           switch(ch)
          {
               case 1 :     flag=0;
                               while(flag==0)
                             {
                                  printf("\n\n\n\t\t Which kind of Operation do you want to Implement in the Queue:\n\n\t\t\t 1.Insertion \n\n\t\t\t 2.Deletion\n\n\t\t\t 3.Display\n\n\t\t\t 4.Go Back\n\n\t\t\t Enter Your Choice:");
                                  scanf("%d",&ch1);
                                  switch(ch1)
                                 {
                                     case 1 :   inserti(deqi);
                                          break;
                                     case 2 :  deletei(deqi);
                                          break;
                                      case 3 :  display(deqi,fronti,reari);
                                          break;
                                      case 4 :   flag=1;
                                          break;
                                      default : printf("\n\n\t\t\tINVALID CHOICE!!!");
                                   }
                              }
                                   if(flag==1)
                                         break;

            case 2 :     flag=0;
                             while(flag==0)
                            {
                             printf("\n\n\n\t\t Which kind of Operation do you want to Implement in the Queue:\n\n\t\t\t 1.Insertion \n\n\t\t\t 2.Deletion\n\n\t\t\t 3.Display\n\n\t\t\t 4.Go Back\n\n\t\t\t Enter Your Choice:");
                            scanf("%d",&ch1);
                            switch(ch1)
                           {
                              case 1 :   inserto(deqo);
                                          break;
                              case 2 :  deleteo(deqo);
                                          break;
                              case 3 :  display(deqo,fronto,rearo);
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
               default : printf("\n\n\t\t\t\tINVALID CHOICE!!!");
          }
     }
     return 0;
 }
