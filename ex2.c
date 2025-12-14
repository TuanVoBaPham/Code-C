#include <stdio.h>
void evenList( int *ptr,int n){
    int k=0,b[1000];
    for(int i=0;i<n;i++){
        if(*(ptr+i)%2==0){
            b[k]=*(ptr+i);
            k++;
        }
    }
    for(int i=0;i<k;i++)
        printf("%d ",b[i]);
}
int main(){
    int n,a[n];
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    printf("Nhap phan tu trong day:\n");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    printf("Day cac phan tu chan la:");
    evenList(a,n);
}