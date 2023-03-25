#include<stdio.h>
int main(){
    int rows,columns,sum;
    scanf("%d",&rows);
    scanf("%d",&columns);
    int a[rows][columns];
    int b[rows][columns];
    printf("Enter the elements of Ist matrix\n");
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;rows>i;i++){
        sum=0;
            for (int j=0;columns>j;j++){
                sum=sum+a[i][j]; 
            }
            printf("sum = %d\n",sum);
    }
    }