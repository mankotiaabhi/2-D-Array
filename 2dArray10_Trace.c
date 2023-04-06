/*
Ques- C program to find the trace of matrix........
Input ::


*/

#include<stdio.h>
int main(){
    int rows,columns;
    scanf("%d%d",&rows,&columns);
    int a[rows][columns];
    int trace;
    for (int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;rows>i;i++){
        trace=0;
        for (int j=0;columns>j;j++){
            trace=trace+a[j][j];
            
        }
    }
    printf("Trace of given matrix is %d",trace);
    
}