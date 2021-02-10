/*Menu driven program for upper,lower triangular,diagonal and transpose of matrix.*/
#include<stdio.h>
#include<stdlib.h>
void uppert(int r,int c,int arr[][50])
{
    int i,j,ut[50][50];
    printf("\n\n\t\tObtained Upper Triangular Matrix:");
    for(i=0;i<r;i++)
        {
            printf("\n\t\t\t\t\t\t\t");
        for(j=0;j<c;j++)
          {
           if(i<=j)
            ut[i][j]=arr[i][j];
           else
            ut[i][j]=0;
            printf("%d ",ut[i][j]);
          }
        }
}

void lowert(int r,int c,int arr[][50])
{
    int i,j,lt[50][50];
    printf("\n\n\t\tObtained Lower Triangular Matrix:");
    for(i=0;i<r;i++)
    {
        printf("\n\t\t\t\t\t\t\t");
        for(j=0;j<c;j++)
          {
           if(i>=j)
            lt[i][j]=arr[i][j];
           else
            lt[i][j]=0;
            printf("%d ",lt[i][j]);
          }
    }
}

void diagonal(int r,int c,int arr[][50])
{
    int i,j,dm[50][50];
    printf("\n\n\t\tObtained Diagonal Matrix:");
    for(i=0;i<r;i++)
    {
        printf("\n\t\t\t\t\t\t");
        for(j=0;j<c;j++)
          {
           if(i==j)
            dm[i][j]=arr[i][j];
           else
            dm[i][j]=0;
            printf("%d ",dm[i][j]);
          }
    }
}

void transpose(int r,int c,int arr[][50])
{
    int i,j,trans[50][50];
    printf("\n\n\t\tObtained Transpose Matrix:");
    for(i=0;i<r;i++)
    {
        printf("\n\t\t\t\t\t\t");
        for(j=0;j<c;j++)
          {
            trans[i][j]=arr[j][i];
            printf("%d ",trans[i][j]);
          }
    }
}

int main()
{
    int a[50][50],i,j,r,c,ch;
     printf("\n\n\t\tEnter the Matrix:");
    printf("\n\n\t\t No. of Rows in the Matrix:");
    scanf("%d",&r);
    printf("\n\n\t\t No. of Columns in the Matrix:");
    scanf("%d",&c);
    printf("\n\n\t\tEnter the Elements of the Matrix:");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    printf("\n\n\t\t Entered Matrix is:");
     for(i=0;i<r;i++)
     {
         printf("\n");
         for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
     }
       while(1)
     {
     printf("\n\n\tWhat action would you like to perform?\n\n\t\t1.Upper Triangular Matrix\n\n\t\t2.Lower Triangular Matrix\n\n\t\t3.Diagonal Matrix\n\n\t\t4.Transpose Matrix\n\n\t\t5.Exit\n\n\t\tEnter Your Choice:");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1 :  uppert(r,c,a);
                        break;
         case 2 :  lowert(r,c,a);
                        break;
         case 3 : diagonal(r,c,a);
                        break;
         case 4 :  transpose(r,c,a);
                        break;
         case 5 : exit(0);
                        break;
         default : printf("\n\n\t\tINVALID CHOICE!!!");
     }
     }
    return 0;
}
