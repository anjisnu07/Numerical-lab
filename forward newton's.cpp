#include<iostream>
using namespace std;

class air{
	int x[5],y[5][5];
	int i,j,k;
	
	public:
		void getdata(){
			cout << "Enter the values of x and y:" << endl;
			#include<iostream>
using namespace std;


void interpolation(){
	int x[50],n,f[50][50],i,j,l;
	
	cout << "Enter no of elements:\n";
	cin >> n;
	cout << "Elements are:\n";
	for(i=1;i<n+1;i++){
		cin >> x[i];
	}
	
	cout << "Enter it's values:\n";
	for(i=1;i<n+1;i++){
		
		cin >> f[i][0];
		
	}
	
    
    for(i=1;i<n+1;i++){
    	
    	for(j=1;j<n+1-i;j++){
    		
    		f[j][i]=f[j+1][i-1]-f[j][i-1];
		}
	}
	
	
	 for(i=1;i<n+1;i++){
    	cout << x[i] << " ";
    	cout << f[i][0] << " ";
    	for(j=1;j<n+1-i;j++){
    		cout << f[i][j] << " ";
		}
		cout <<endl;
	}

	
	
	
	
}

int main(){
	
	interpolation();
}
			for(i=1;i<5;i++){
			cout << "value of x(" <<  i	<<")";
			cin >> x[i];
			cout << "value of y(" <<  i	<<")"<<"(0)";
			cin >>y[i][0];
			}
		
		}

		void interpolation(){
			
			
			for(i=1;i<5;i++){
		for(j=1;j<5-i;j++){
	
  		 y[j][i] = y[j+1][i-1] - y[j][i-1];
 
		}
	}
}
		
		
void disp(){
				for(i=1;i<5;i++){
					cout << x[i] <<" ";
					cout << y[i][0] <<" ";
		for(j=1;j<5-i;j++){
	
  		  cout << y[i][j] << " ";
 
		}
		cout << endl;
		}
	}
};
int main(){
	air o1;
	o1.getdata();
	o1.interpolation();
	o1.disp();
	return 0;
	
	
}
