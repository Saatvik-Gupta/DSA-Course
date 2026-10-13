// 0/1 Knapsack using Dynamic Programming

#include<iostream>
using namespace std;

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;

    int wt[n], val[n];

    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; i++)
        cin >> wt[i];

    cout << "Enter profits of items:\n";
    for (int i = 0; i < n; i++)
        cin >> val[i];

    cout << "Enter knapsack capacity: ";
    cin >> W;

    int m[n + 1][W + 1];

    // Initialize DP table
    // step 1: Initialize first row and column as zero

    for(int i=0;i<=n;i++){ // first column zero initialize
        m[i][0]=0;
    }

    for(int j=0;j<=W;j++){ // first row zero initialize
        m[0][j]=0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            
             if (wt[i - 1] <= j)
                m[i][j] = max(
                    val[i - 1] + m[i - 1][j - wt[i - 1]],
                    m[i - 1][j]
                );
            else
                m[i][j] = m[i - 1][j]; // same copy
        }
    }

    // Print DP table
    cout << "\nDP Table m[n+1][W+1]:\n";
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }

    cout << "\nMaximum profit = " << m[n][W] << endl;
    return 0;
}