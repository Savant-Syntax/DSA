#include <iostream>
using namespace std;

int printHello(){                    // function definition
    cout << "Hello World \n";
    return 5;
}

int sum(int a, int b){              // int a, int b => Parameters => copies of arguments
    int s = a + b;
}

int min(int a, int b){
    if (a > b)
    {
        return a;
    }   else    {
        return b;
    }
}

// Calculate sum of number from 1 to n
int sumN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// Calulate  N factorial
int factorialN(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Passed by value
int sum2(int a, int b){
    a = a + 10;                         // 15   changed value
    b = b + 10;                         // 14   changed value
    return a + b;                       // 29
}

void changeX(int x){
    x = 2 * x;
    cout << "x = " << x << endl;
}

    int main(){
        cout << printHello() << endl;   // function call
        cout << sum(5, 8) << endl;      // 5, 8 => Arguments => actual values
        cout << min(8, 4) << endl;
        cout << sumN(6) << endl;
        cout << factorialN(6) << endl;

        int a = 5, b = 4;
        cout << sum2(a, b) << endl;
        cout << "Unchanged value of a: " << a << endl;
        cout << "Unchanged value of b: " << b << endl;

        int x = 5;
        changeX(x);
        cout << "x =  " << x << endl;
        return 0;
}