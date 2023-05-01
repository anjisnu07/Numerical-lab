#include<iostream>
#include<iomanip>
#include<math.h>


#define f(x)cos(x) - x * exp(x)

using namespace std;

int main()
{
	 
	 float x0, x1, x, f0, f1, f, e;
	 int step = 1;

	 
     cout<< setprecision(6)<< fixed;

	 up:
	 cout<<"Enter first value: ";
     cin>>x0;
     cout<<"Enter second value: ";
     cin>>x1;
     cout<<"Enter tolerable value: ";
     cin>>e;

	 
	 f0 = f(x0);
	 f1 = f(x1);

	 
	 if( f0 * f1 > 0.0)
	 {
		  cout<<"Incorrect values(one should be negative and other pos)"<< endl;
		  goto up;
	 }

	 do 
	 {
		 
		  x = (x0 + x1)/2;
		  f = f(x);

		  cout<<step<<":\n\t"<<"\tvalue of x = "<< setw(10)<< x<<"\n\tvalue of f(x) = "<< setw(10)<< f(x)<< endl;

		  if( f0 * f < 0)
		  {
			   x1 = x;
		  }
		  else
		  {
			   x0 = x;
		  }
		  step = step + 1;
	 }while(fabs(f)>e);

	 cout<< endl<< "Root is: "<<  x<< endl;

	 return 0;
}
