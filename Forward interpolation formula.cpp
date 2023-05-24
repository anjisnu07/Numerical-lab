#include<iostream>
using namespace std;


int main(){

float x[100][100],u,u1,k,y;
int i,j,n;

cout <<"Enter no of terms:";
cin >> n;

cout <<"Enter x-values:";
for(int i=0;i<n;i++){
	cin >> x[i][0];
}
cout <<"Enter y-values:";
for(int i=0;i<n;i++){
	cin >> x[i][1];
}

for(j=2;j<n+1;j++){
	for(i=0;i<(n-(j-1));i++){
		x[i][j]=x[i+1][j-1]-x[i][j-1];
	}
}

for(i=0;i<n;i++){
	for(j=0;j<=(n-i);j++){
		cout << x[i][j]<<"\t";
	}
	cout <<endl;
}
	cout <<"Enter interpolation point:";
cin >> k;

u=(k-x[0][0])/(x[1][0]-x[0][0]);
u1=u;
y=x[0][1];
int fact=1;

for(i=2;i<n;i++){
	y=y+(u1*x[0][i])/fact;
	fact=fact*i;
	u1=u1*(u-(i-1));
}
cout <<y;


}
