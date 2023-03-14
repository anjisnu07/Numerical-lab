
#include<iostream>
using namespace std;
int main(){
	int a[3][3],i,j;
	
	cout << "Enter elements of the matrix:";
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin >> a[i][j];
		}
	}
	cout << " the matrix is:" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << a[i][j] << " ";
		}
		cout<<endl;
	}
	
	cout << " the upper traingular matrix  is:" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			if(i<=j){

			cout << a[i][j] << " ";
			}
			else{
				cout << "  ";
			}
		}
		cout<<endl;
	}

	
	cout << " the Lower traingular matrix is:" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			if(i>=j){
			
			cout << a[i][j] << " ";
			
			}
		}
		cout<<endl;
	}
	
}
