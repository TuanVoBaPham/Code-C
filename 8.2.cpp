#include<stdio.h>
#include<math.h>
int prime(int n){
    int count=0;
    if(n<=1)
    return 0;
    else{
        for (int i=2;i<n;i++){
            if(n%i==0){
               count++; 
            }
        }
        if(count==0)
        return 1;
        else
        return 0;
    }
}
int main(){
    int n, a[100], cnt=0;
    float sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(prime(a[i])==1){
			sum+=a[i];
			cnt++;
		}
	}
	if(cnt==0)
	printf("Error");
	else 
	printf("%f",sum/cnt);
}
