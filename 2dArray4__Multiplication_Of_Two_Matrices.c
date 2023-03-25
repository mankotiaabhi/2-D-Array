#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter the number of Rows\n");
    scanf("%d",&rows);
    printf("Enter the number of Columns\n");
    scanf("%d",&columns);
    int a[rows][columns],b[rows][columns],mul[10][10];
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
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            mul[i][j]=0;
            for(int k=0;columns>k;k++){
            mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
         } 
         }  
    }
    printf("The Sum of Two Matrices :\n");
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            printf("%d ",mul[i][j]);
            
        }
        
    }    
}
