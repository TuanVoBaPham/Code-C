#include<stdio.h>
#include<math.h>
int binaryconv(int a){
    int sum=0,i=0,b;
    while(a!=0){
    b=a%10;
    a/=10;
    sum+=b*pow(2,i);
    i++;
    }
    return sum;
}
int main(){
    int a;
    printf("Nhap so nhi phan:");
    scanf("%d",&a);
    printf("So thap phan tuong ung la:%d",binaryconv(a));
}