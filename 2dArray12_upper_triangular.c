#include<stdio.h>
#include<math.h>
int main(){
    int rows,columns;
    scanf("%d%d",&rows,&columns);
    int a[rows][columns],normal=0;
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            if (i<=j){
            printf("%d ",a[i][j]);
            }     
            else{
                printf("  ");
            }       
    }
     printf("\n");
}
}