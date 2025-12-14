#include<stdio.h>
#include<math.h>
double comp_h(double x,double y){
	double sum;
	if(x<y-2)
	sum=3*pow(x,2)-log(y);
    else if(y-2<=x&&x<=y+2)
	sum=(x+y)*0.5+8;
	else
	sum=pow(y,3)+2*sin(x);
	return sum;
}
int main(){
	double b[20];
	double x=-2;
	double y=5;
	double temp;
	for(int i=0;i<17;i++){
		b[i]=comp_h(x,y);
		x+=0.5;
		y+=-1;
	}
	for( int i=0;i<16;i++){
		for(int j=0;j<16-i;j++){
			if(b[j]>b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}		
		}	
		}
	for ( int i=0;i<17;i++){
			printf("%.4lf ",b[i]);
	}	
}
