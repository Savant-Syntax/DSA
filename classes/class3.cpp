#include <iostream>
using namespace std;

int main(){

    // Find the number is positive or negeative.
    // int n = -60;
    // if (n >= 0)
    // {
    //     cout << "It is a positive number";
    // } else{
    //     cout << "It is a negative number";
    // }

    // Eligible for voting
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You can vote.";
    }   else    {
        cout << "You can't vote";
    }
    

    return 0;
}
