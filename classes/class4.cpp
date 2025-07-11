#include <iostream>
using namespace std;

int main(){

    // Pattern Question

    // 1. Square Pattern (for numbers 1 to n)
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 1.2 Square Pattern in Star form
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 1.3 Square Pattern in Alphabetic form
    // int n;
    // char ch ='A';
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // 1.4 Square Pattern in continue form (from number 1 to n)
    // int n;
    // int num = 1;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // cout << "After pattern completion the value of num: "<< num;    // Checking the process

    // Homework
    // Square Pattern in continue form in Alphabetic form (from character A to)
    // int n;
    // char ch = 'A';
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Triangle pattern

    // 1.1 Right Angled Triangle (using star)
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // 1.2 Floyd's Triangle Pattern
    // int n;
    // int num = 1;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << num++ << " ";
    //     }
    //     cout << endl;
    // }

    // 1.3 Right Angled Triangle (using number, each row has same number and the number is in continous manner for the columns.)
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }

    // 1.4 Right Angled Triangle 
    // int n;
    // int num = 1;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < i+1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 1.5 Reverse Right Angle Triangle
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    
    // Inverted Triangle Pattern
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }
    
    // Pyramid Pattern
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    
    // for (int i = 0; i < n; i++)
    // {
    //     //spaces: n-i-1
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << " ";
    //     }

    //     //nums1
    //     for (int j = 1; j <= i+1; j++)
    //     {
    //         cout << j;
    //     }

    //     //nums2
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    //Hollow Diamond Pattern
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // // top
    // for (int i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != 0)
    //     {
    //             // spaces
    //             for (int j = 0; j < 2*i-1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // bottom
    // for (int i = 0; i < n-1; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != n-2)
    //     {
    //         // spaces
    //         for (int j = 0; j < 2*(n-i)-5; j++)
    //         {
    //             cout << " ";
    //         }
            
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // Butterfly Pattern
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // top half 
    for (int i = 1; i <= n; i++) {
        // stars on the left
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // stars on the right
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // bottom half 
    for (int i = n; i >= 1; i--) {
        // stars on the left
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // stars on the right
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}