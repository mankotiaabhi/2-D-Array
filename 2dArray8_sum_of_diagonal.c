#include<stdio.h>
int main(){
    int rows,columns,sum;
    scanf("%d%d",&rows,&columns);
    int a[rows][columns];
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            sum=0;
            sum=sum+a[j][j];
            
        }
    }
    printf("%d",sum);
}