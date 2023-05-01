#include<iostream>
using namespace std;

int main(){
	int x[100],y[100],i,j;
	float p,n,point,value=0;
	
	cout <<"Enter total no of values:\n";
	cin >> n;
	
	cout<<"Enter values:\n";
	
	for(i=0;i<n;i++){
		cout <<"X values:";
		cin >> x[i];
		cout<<"\n Y values";
		cin >> y[i];
	}
	cout <<"\n Enter interpolation point:\n";
	cin >> point;
	

	for(i=0;i<n;i++){
		p=1;
		for(j=0;j<n;j++){
			
			if(i != j){
				p=p*(point-x[j])/(x[i]-x[j]);
			}
		}
		value=value+p*y[i];	
	}
	cout <<value;
}
