#include<stdio.h>
int main(){
    int rows,columns,result;
    printf("Enter the Number of Rows\n");
    scanf("%d",&rows);
    printf("Enter the Number of Columns\n");
    scanf("%d",&columns);
    int a[rows][columns];
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            if (a[j][j]==1){
                result=0;
            }
            else{
                result=1;
            }
            
        }
    }
    if (result==0){
        printf("Given matrix is Identical\n");
    }
    else{
        printf("Given matrix is not Identical\n");
    }
}
