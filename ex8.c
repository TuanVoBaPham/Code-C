#include <stdio.h>
#include<stdlib.h>
void inputMatrix(double **a,int m,int n){
    a=(double**)malloc(m*sizeof(double*)); // cap phat dong cho mang
    for(int i=0;i<m;i++){
        a[i]=(double*)malloc(n*sizeof(double));
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Nhap phan tu hang %d, cot %d\n",i,j);
            scanf("%lf",a[i][j]);
        }
    }
}
void transpose(double **a,int m,int n){
    double temp;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
}
void free_matrix(double **a,int m){
    for(int i=0;i<m;i++){
        free(a[i]);
    }
    free(a);
}
int main(){
    int m,n;
    double **a;
    printf("Nhap so hang va so cot:\n");
    scanf("%d%d",&m,&n);
    inputMatrix(a,m,n);
    printf("Ma tran chuyen vi la:");
    transpose(a,m,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    free_matrix(a,m);
}