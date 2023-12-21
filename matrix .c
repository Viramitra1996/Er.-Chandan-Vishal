#include<stdio.h>
int main(){
int i,j,k;
int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int result[3][3] = {0};
for (i=0;i<3;i++);
for(j=0;j<3;j++);
for (k=0;k<3;k++);
result[i][j] += matrix1[i][k] *matrix2[j][k];


return 0;
}
