#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter the number of Rows\n");
    scanf("%d",&rows);
    printf("Enter the number of Columns\n");
    scanf("%d",&columns);
    int a[rows][columns],b[rows][columns];
    printf("Enter the Elements Of Ist Matrix\n");
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Elements of 2nd Matrix\n");
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The Sum of Two Matrices :\n");
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
    printf("\n");    
    }
}