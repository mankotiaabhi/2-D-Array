#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&columns);
    int a[rows][columns];
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&a[i][j]);
        }    
    }
    int b[columns][rows];
    for (int i=0;columns>i;i++){
        for (int j=0;rows>j;j++){
            b[i][j]=0;
            b[i][j]=a[j][i];
        }    
    }
    for (int i=0;columns>i;i++){
        for (int j=0;rows>j;j++){
            printf("%d ",b[i][j]);
        }
    printf("\n");        
    }
}