#include<stdio.h>
#include<math.h>
double func(double x){
	double sum;
	if(x<0)
	sum=cos(4.5*pow(x,2))+5*sin(pow(x,3)-1);
	else if(x==0)
	sum=7;
	else
	sum=log2(x)+sqrt(pow(x,2)+5);
	return sum;
}
int main(){
	int n,count=0;
	double a=-1.5, x[500], y[500], z[500], sum=0, temp;
	
	for(int i=0;i<204;i++){//gan gia tri cho X
		x[i]=a;
		a+=0.5;
	}
	
	for(int i=0;i<204;i++){//save f(x) to Y
		y[i]=func(x[i]);
	}
	
	scanf("%d",&n);//input a integer n;
	
	for(int i=0;i<204;i++){//save Y to Z
		if(y[i]>n){
			z[count]=y[i];
			count++;
		}	
	}
	
		for(int i=0;i<count;i++){//calculate sum of Z
		sum+=z[i];
	}
	printf("%.4lf\n",sum);
	
	for(int i=0;i<count-1;i++){//sort Z in ascending order
		for(int j=0;j<count-1-i;j++){
			if(z[j]>z[j+1]){
				temp=z[j];
				z[j]=z[j+1];
				z[j+1]=temp;
			}
			
		}
	}
	
	for(int i=0;i<count;i++){// print array Z
		printf("%.4lf ",z[i]);
	}
}
