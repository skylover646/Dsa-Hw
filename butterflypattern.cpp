#include<iostream>
using namespace std;
int main()
{int n=4;
for (int i = 0; i <= n; i++)
    {
        // Print the left side stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        // Print spaces in the middle
        for (int j = 0; j <= 2 * (n - i); j++)
        {
            cout << " "; // Single space for alignment
        }

        // Print the right side stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom part of the pattern
    for (int i = n; i >= 0; i--)
    {
        // Print the left side stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        // Print spaces in the middle
        for (int j = 0; j <= 2 * (n - i); j++)
        {
            cout << " "; // Single space for alignment
        }

        // Print the right side stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}