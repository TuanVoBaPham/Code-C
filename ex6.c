#include<stdio.h>
int gcd(int a, int b){
int min,c,gcd;
min=a>b?b:a;
for(int i=min;i>=1;i--){
    if(a%i==0 && b%i==0){
    gcd=i;
    break;
    }
}
return gcd;    
}
int main(){
    int a,b;
printf("Nhap 2 so a va b:\n");
scanf("%d%d",&a,&b);
printf("Uoc chung lon nhat cua a va b la:%d",gcd(a,b));
}