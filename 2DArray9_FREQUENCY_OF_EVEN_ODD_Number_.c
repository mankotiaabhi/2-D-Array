/*
=> To check the occurence of even and odd number in an 2d array....
Input ::
3 3
1 2 3
4 5 6
7 8 9
Output ::
Occurrence of EVEN number : 4
Occurrence of ODD number : 5
*/

#include<stdio.h>
int main(){
    int rows,columns,count=0,count1=0;
    scanf("%d%d",&rows,&columns);
    int a[rows][columns];
    for(int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
             scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            if (a[i][j]%2==0){
                count++;
            }
        }
    }
    for(int i=0;rows>i;i++){
        for (int j=0;columns>j;j++){
            if (a[i][j]%2!=0){
                count1++;
            }
        }
    }
    printf("Occurrence of EVEN number : %d\n",count);
    printf("Occurrence of ODD number : %d\n",count1);

}
