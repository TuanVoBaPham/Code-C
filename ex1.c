#include<stdio.h>
#include<string.h>
char* strrv(char a[]){
    char temp;
        for (int i=0;i<strlen(a)/2;i++){
            temp=a[i];
            a[i]=a[strlen(a)-1-i];
            a[strlen(a)-1-i]=temp;
        }
   
return a;
}
int main(){
    char a[200];
    scanf("%s",&a);
    strrv(a);
    printf("%s",a);
}