
/*

Input :
3 3
1 2 3
4 5 6
7 8  9
Outout :
Sum of diagonal = 15
Sum of Anti-diagonal = 13
*/
#include<stdio.h>
int main(){
    int rows,columns,sum,sum1;
    scanf("%d%d",&rows,&columns);
    int a[rows][columns];
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;rows>i;i++){
        sum=0;
        for (int j=0;columns>j;j++){
            sum=sum+a[j][j];
            
        }
    }
    for (int i=0;rows>i;i++){
            sum1=sum1+a[i][columns-i-1];
    
    }
   printf("Sum of diagonal = %d\n",sum);
  printf("Sum of Anti-diagonal = %d",sum1);
}