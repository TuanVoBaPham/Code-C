#include <stdio.h>
#include <math.h>
int checkAms(int n){
    int temp=0,a,b=n,d=n;
    long sum=0;
    // dem so chu so cua n
    while(d!=0){
        temp++;
        d=d/10;
    }
    // tinh tong
    while(b!=0){
        a=b%10;
        sum+=pow(a,temp);
        b=b/10;
    }
    //check dieu kien
    if(sum==n)
    return 1;
    else
    return 0;
}
int main(){
    int n;
    printf("Nhap so n:");
    scanf("%d",&n);
    if(checkAms(n)==1)
    printf("n la so Amstrong");
    else
    printf("n khong la so Amstrong");
}