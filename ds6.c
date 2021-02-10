/*Menu Driven program for matrix add,sub and multiply. */
#include<stdio.h>
#include<stdlib.h>
void add(int r1,int r2,int c1,int  c2,int m1[][50],int m2[][50])
{
    int  i,j,result[r1][c2];
    if(r1==r2 && c1==c2)
    {
        printf("\n\n\t\tResultant Matrix:");
    for(i=0;i<r1;i++)
        {
            printf("\n\t\t\t\t\t");
        for(j=0;j<c1;j++)
        {
            result[i][j]=m1[i][j]+m2[i][j];
             printf("%d ",result[i][j]);
        }
        }
    }
    else
        printf("\n\n\t\tINVALID MATRICES TO ADD!!!");
}
void sub(int r1,int r2,int c1,int  c2,int m1[][50],int m2[][50])
{
    int  i,j,result[r1][c2];
        if(r1==r2 && c1==c2)
    {
        printf("\n\n\t\tResultant Matrix:");
    for(i=0;i<r1;i++)
        {
            printf("\n\t\t\t\t\t");
        for(j=0;j<c1;j++)
           {
             result[i][j]=m1[i][j]-m2[i][j];
             printf("%d ",result[i][j]);
           }
        }
}
    else
        printf("\n\n\t\tINVALID MATRICES TO SUBTRACT!!!");
}
void multiply(int r1,int r2,int c1,int  c2,int m1[][50],int m2[][50])
{
       int i,j,k,result[r1][c2];
       if(c1==r2)
       {
           printf("\n\n\t\tResultant Matrix:");
            for(i=0;i<r1;i++)
                {
                    printf("\n\t\t\t\t\t");
                for(j=0;j<c2;j++)
                {
                    result[i][j]=0;
                    for(k=0;k<c1;k++)
                        result[i][j]+=m1[i][k]*m2[k][j];
                         printf("%d ",result[i][j]);
                }
       }
       }
       else
            printf("\n\n\t\tINVALID MATRICES TO MULTIPLY!!!");
}
int main()
{
    int mat1[50][50],mat2[50][50],i,j,r1,r2,c1,c2,ch,flag;
    while(1)
    {
    flag=1;
    printf("\n\n\t\tEnter the first Matrix:");
    printf("\n\n\t\t No. of Rows in the first Matrix:");
    scanf("%d",&r1);
    printf("\n\n\t\t No. of Columns in the first Matrix:");
    scanf("%d",&c1);
    printf("\n\n\t\tEnter the Elements of the First Matrix:");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&mat1[i][j]);
    printf("\n\n\t\t Entered Matrix is:");
     for(i=0;i<r1;i++)
     {
         printf("\n\t\t\t\t\t");
        for(j=0;j<c1;j++)
            printf("%d ",mat1[i][j]);
     }

      printf("\n\n\t\tEnter the second Matrix:");
    printf("\n\n\t\t No. of Rows in the second Matrix:");
    scanf("%d",&r2);
    printf("\n\n\t\t No. of Columns in the second Matrix:");
    scanf("%d",&c2);
    printf("\n\n\t\tEnter the Elements of the Second Matrix:");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&mat2[i][j]);
    printf("\n\n\t\t Entered Matrix is:");
     for(i=0;i<r2;i++)
     {
         printf("\n\t\t\t\t\t");
        for(j=0;j<c2;j++)
            printf("%d ",mat2[i][j]);
     }
     while(1)
     {
     printf("\n\n\tWhat action would you like to perform?\n\n\t\t1.Addition\n\n\t\t2.Subtraction\n\n\t\t3.Multiplication\n\n\t\t4.Re-Enter Matrices\n\n\t\t5.Exit\n\n\t\tEnter Your Choice:");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1 : add(r1,r2,c1,c2,mat1,mat2);
                       break;
         case 2 : sub(r1,r2,c1,c2,mat1,mat2);
                       break;
         case 3 : multiply(r1,r2,c1,c2,mat1,mat2);
                       break;
         case 4 : flag=0;
                        break;
         case 5 : exit(0);
                       break;
         default: printf("INVALID CHOICE!!!");
     }
     if(flag==0)
        break;
     }
     }
    return 0;
}

