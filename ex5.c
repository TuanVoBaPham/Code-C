#include<stdio.h>
int primeCheck(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0)
        count++;
    }
    if(count!=0)
    return 0;
    else
    return 1;
}

int main(){
    int n;
    printf("Nhap so n:");
    scanf("%d",&n);
    if(primeCheck(n)!=0)
    printf("TRUE");
    else
    printf("FALSE");

}