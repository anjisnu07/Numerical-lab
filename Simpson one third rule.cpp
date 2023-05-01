#include<iostream>
using namespace std;
#define f(x) x*x*x*x
int main(){
	float a,b,h,x,n,sum=0;
	cout<<"Enter upper limit:\n";
	cin >>b;
	cout<<"Enter Lower limit:\n";
	cin >>a;
	cout<<"Enter Interval:\n";
	cin >>n;
	
	h=(b-a)/n;
	
	for(int i=1;i<n;i++){
		x=a+i*h;
		if(i%2==0){
			sum=sum+2*f(x);
		}
		else{
			sum=sum+4*f(x);
		}
	}
float y=h*(f(a)+f(b)+sum)/3;

cout <<y;
}
