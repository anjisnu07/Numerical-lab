#include<iostream>

using namespace std;

class air{
	int a[50][50],b[50][50],c[50][50],i,j,m,n,o,p,k;
	
	public:
		
		void getdata(){
			
			cout << "Enter no of row of 1st matrix:";
		cin >> m;
		
		cout << "Enter no of coloumn of 1st matrix:";
		cin >> n;
		
		cout << "Enter no of row of 2nd matrix:";
		cin >> o;
		cout << "Enter no of coloumn of 2nd matrix:";
		cin >> p;
		}
		
		void takelement1(){
		cout << "Enter elements of 1st matrix:"<<"\n";
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
					cin >> a[i][j];
			}
			
		}
		}
		
		void takelement2(){
			
			cout << "Enter elements of 2nd matrix:"<<"\n";
		for(i=1;i<=o;i++){
			for(j=1;j<=p;j++){
					cin >> b[i][j];
			}
		}
		}
		
		void showelement1(){
			
		cout << "Elements of 1st matrix:"<<"\n";
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
					cout << a[i][j] << " ";
			}
			cout << "\n";
		}
		}
		
		void showelement2(){
			
		cout << "Elements of 2nd matrix:"<<"\n";
		for(i=1;i<=o;i++){
			for(j=1;j<=p;j++){
					cout << b[i][j] << " ";
			}
			cout << "\n";
		}
		}
		
		void showoutput(){
			
			for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
					cout << c[i][j] << " " ;
			}
			cout << "\n";
		}
	}
		
		void addition(){
	
		
		getdata();
		
		if(m==o && n==p){
			cout << "Addition possible"<<"\n"; 
		}
		else{
			cout << "Addition not possible"<<"\n";
			exit(0);
		}
		
		
		takelement1();
		showelement1();
	
		
		takelement2();
		showelement2();
	
	cout << "\n Addition \n";
	
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
					c[i][j]=a[i][j]+b[i][j];
			}
		}
		
		showoutput();
}
			
	
	
	
	
	
	void multi(){
		
		getdata();
		
		if(n==o){
			cout << "multiplication possible"<<"\n"; 
		}
		else{
			cout << "multiplication not possible"<<"\n";
			exit(0);
		}
		
		
	takelement1();
	showelement1();
	takelement2();
	showelement2();
	
	cout << "\n Multi \n";
	
		for(i=1;i<=m;i++){
			
			
			for(j=1;j<=o;j++){
				
				c[i][j]=0;
				
				for(k=1;k<=n;k++){
				
					c[i][j]= c[i][j]+ (a[i][k]*b[k][j]);
					}
			}
		}
		
		showoutput();
		
	}
	
		void sub(){
	
	getdata();
		
		if(m==o && n==p){
			cout << "Sub possible"<<"\n"; 
		}
		else{
			cout << "Sub not possible"<<"\n";
			exit(0);
		}
		
	takelement1();
	showelement1();
	takelement2();
	showelement2();
	
	cout << "\n Sub \n";
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
					c[i][j]=a[i][j]-b[i][j];
			}
		}
		showoutput();
	}
	
	
	
	void transpose()
	{
		cout << "Enter no of row of 1st matrix:";
		cin >> m;
		
		cout << "Enter no of column of 1st matrix:";
		cin >> n;

	
	showelement1();
		
		cout << "the transpose of the matrix is:"<<"\n";
		for(j=1;j<=n;j++){
			for(i=1;i<=m;i++){
					cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
};

int main(){
	
	air ob;
	int n;
while(1){	
	cout << "\n1.Matrix addition\n";
	cout << "\n2.Multplication\n";
	cout << "\n3.Matrix subtraction\n";
	cout << "\n4.transpose\n";
	cout << "\n5.Exit\n";	
	cout << "\n Choose option: \n";
	cin >> n;
	
	
	switch(n){
		case 1:ob.addition();
		break;
		case 2:ob.multi();
		break;
		case 3:ob.sub();
		break;
		case 4:ob.transpose();
		break;
		case 5:exit(0);
		break;
	}
	
}
	
}
