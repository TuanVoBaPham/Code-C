#include<stdio.h>
int main(){
    int a[100];
    for(int i=0;i<100;i++){
        a[i]=i+1;
    }
    for(int i=0;i<100;i++){
        if(a[i]%3==0){
            printf(" FIZZ ");

        }
        else if(a[i]%5==0){
            printf(" BUZZ ");
        }
        else if(a[i]%10==3)
        printf(" FIZZ ");
        else if(a[i]/10==3)
        printf(" FIZZ ");
        else{
            printf(" %d ",a[i]);
        }
    }
}