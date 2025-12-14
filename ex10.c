#include<stdio.h>
void fibo(int n){
    int a[1000]={0,1,1};
    if(n==3){
        printf("Day Fibonacci la:");
        for(int i=0;i<3;i++){
            printf("%d ",a[i]);
        }
    }
    else{
        for( int i=0;i<=n-3;i++){
            a[i+3]=a[i+1]+a[i+2];
        }
    printf("Day Fibonacci la:");
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
}
int main(){
    int n;   
    do{
        printf("Nhap so n:");
        scanf("%d",&n);
    }while(n<3);  
    fibo(n);
}