#include<iostream>
#define f(x) (x*x*x -2*x-5)
using namespace std;

int main(){
	float x1,x2,x;
	int i=1,n;
	cout << "Enter the value of x1:";
	cin >>x1;
	
	cout << "Enter the value of x2:";
	cin >>x2;
	
	cout <<"Enter upto how much approximaton you want:";
	cin >>n;
	
	while(i<=n){
		
		x=(x1+x2)/2;
		
		if(f(x)*f(x1)<0){
			x2=x;
		}
		else if(f(x)*f(x2)<0){
			x1=x;
		}
		else{
			cout <<"Invalid root";
		}
		i++;
	}
	cout <<"root is:"<<x;
}
