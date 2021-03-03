/*Insertion and deletion i priority Queue.*/
#include<stdio.h>
#include<stdlib.h>
#define R 10
#define C 10
void display(int pq[][C],int pr,int f[pr],int r[pr])
{
    int i,j;
    for(i=0;i<pr;i++)
    {
        for(j=0;j<C;j++)
        if(j>=f[i] && j<=r[i])
            printf(" %d ",pq[i][j]);
        else printf(" ~ ");
        printf("\n");
    }
}

void insertpr(int pq[][C],int pr,int f[pr],int r[pr])
{
    int item,p;
    printf("\n\n\t\t\tEnter the Element you want to insert:");
    scanf("%d",&item);
    printf("\n\n\t\t\tEnter the Priority of the element entered:");
    scanf("%d",&p);
    if(r[p]==(C-1))
    {
        printf("\n\n\t\t\tOVERFLOW!!!");
        exit(1);
    }
    if(f[p]==-1)
        f[p]==0;
    r[p]++;
    pq[p][r[p]]=item;
    display(pq,pr,f,r);
}

int deletepr(int pq[][C],int pr,int f[pr],int r[pr])
{
      int i,flag;
      for(i=0;i<pr;i++)
      {
          if(f[i] == -1)
            flag=1;
          else
          {
              flag = 0;
              if(f[i]==r[i])
              {
                  f[i]=-1;r[i]=-1;
              }
              f[i]++;
              break;
          }
      }
      if(flag==1)
        {
        printf("\n\n\t\t\tUNDERFLOW!!!");
        return 0;
        }
     display(pq,pr,f,r);
     return 0;
}


int main()
{
    int PQ[R][C],pr,front[R],rear[R],i,ch;
    printf("\n\n\t\t\tHow Many Priority Do you want to have: ");
    scanf("%d",&pr);
    i=0;
    while(i<pr)
    {
        front[i]=-1;rear[i]=-1;
        i++;
    }
    while(1)
   {
    printf("\n\n\t\t\tWhat Action do you want to perform:\n\n\t\t\t\t1.Insertion\n\n\t\t\t\t2.Deletion\n\n\t\t\t\t3.Display\n\n\t\t\t\t4.Exit\n\n\t\t\tEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : insertpr(PQ,pr,front,rear);
                      break;
        case 2 : deletepr(PQ,pr,front,rear);
                       break;
        case 3 : display(PQ,pr,front,rear);
                       break;
        case 4 : exit(0);
                       break;
        default : printf("\n\n\t\t\tINVALID CHOICE!!!");
    }
        }
    return 0;
}
