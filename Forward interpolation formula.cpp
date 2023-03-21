#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    float x, sum = 0, prod;

    cout << "Enter number of data points: ";
    cin >> n;

    float X[n], F[n][n];

    cout << "Enter data points:" << endl;

    for(i = 0; i < n; i++)
    {
        cout << "X[" << i << "]: ";
        cin >> X[i];

        cout << "Y[" << i << "]: ";
        cin >> F[i][0];
    }

    // Forward interpolation formula
   

    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n - i; j++)
        {
            F[j][i] = (F[j + 1][i - 1] - F[j][i - 1]) / (X[j + i] - X[j]);
        }
    }

    // Input value for estimation
    cout << "Enter value of x for estimation: ";
    cin >> x;

    // Calculation using the formula
    prod = 1;

    for(i = 0; i < n; i++)
    {
        sum += F[0][i] * prod;
        prod *= (x - X[i]);
    }

    cout << "Estimated value at x = " << x << " is " << sum;

    return 0;
}
