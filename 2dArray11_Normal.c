/*
PROBLEM - C program to find the normal of a matrix...........
NORMAl of the matrix = sum of the square of matrix elements ......
Input..............................................:
3 3
9 8 7
5 4 6
1 2 3
Output.............................................:
Normal of the matrix = 16.881943

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
            normal=normal+(a[i][j]*a[i][j]);
        }
    }
    printf("Normal of the matrix = %f",sqrt(normal));
}