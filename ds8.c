/*Program to convert a sparse matrix into the 3-column representation.*/
#include<stdio.h>
void sparse3c(int mat[][50],int r,int c,int *flag)
{
    int i,j,czero=0,cnonzero=0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
           if(mat[i][j]==0)
              czero++;
            else
               cnonzero++;
    if(czero>cnonzero)
    {
        *flag=0;
        int sparse[cnonzero+1][3];
        int x=0;
        sparse[x][0]=r;
        sparse[x][1]=c;
        sparse[x][2]=cnonzero;
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                 if(mat[i][j]!=0)
                 {
                     x++;
                     sparse[x][0]=i;
                     sparse[x][1]=j;
                     sparse[x][2]=mat[i][j];
                 }
        printf("\n\n\t\tObtained 3 Column Representation:");
        for(i=0;i<=cnonzero;i++)
            {
                printf("\n\t\t\t\t\t\t");
            for(j=0;j<3;j++)
                printf("%d ",sparse[i][j]);
            }
    }
    else
        printf("\n\n\t\tEntered Matrix is not Sparse.");
}
int main()
{
    int a[50][50],r,c,flag,i,j;
    while(1)
    {
    flag=1;
    printf("\n\n\t\tEnter the Sparse Matrix:");
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
         printf("\n\t\t\t\t\t\t");
         for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
     }

     sparse3c(a,r,c,&flag);
     if(flag==0)
        break;
    }
    return 0;
}
