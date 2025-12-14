#include <stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Input n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=1+pow(2,(n-i));j++){
            printf("*");
        }
    }
    printf("\n");
}
