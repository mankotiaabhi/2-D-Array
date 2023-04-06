/*
Problem : WAP to print upper triangle.........
INPUT :
3 3         
1 2 3
4 5 6
7 8 9
OUTPUT :
1 2 3
  5 6
    9


*/
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
            if (j<=i){
            printf("%d ",a[i][j]);
            }     
    }
     printf("\n");
}
}