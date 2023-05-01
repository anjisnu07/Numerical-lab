#include<iostream>
using namespace std;
#define f(x) x*x*x*x
int main(){
	int a,b,h,x,n,sum=0;
	cout<<"Enter upper limit:\n";
	cin >>b;
	cout<<"Enter Lower limit:\n";
	cin >>a;
	cout<<"Enter Interval:\n";
	cin >>n;
	
	h=(b-a)/n;
	
	for(int i=1;i<n;i++){
		x=a+i*h;
		sum=sum+2*f(x);
	}
int y=h*(f(a)+f(b)+sum)/2;

cout <<y;
}
