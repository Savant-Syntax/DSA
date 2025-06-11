#include <iostream>
using namespace std;

int main(){

    //* if-else
    // Find the number is positive or negeative.
    // int n = -60;
    // if (n >= 0)
    // {
    //     cout << "It is a positive number";
    // } else{
    //     cout << "It is a negative number";
    // }

    // Eligible for voting
    // int age;
    // cout << "Enter age: ";
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "You can vote.";
    // }   else    {
    //     cout << "You can't vote";
    // }
    
    // Find the number is even or odd.
    // int num;
    // cout << "Enter the number: ";
    // cin >> num;
    // if (num % 2 == 0)
    // {
    //     cout << "Number is even";
    // }   else    {
    //     cout << "Number is odd";
    // }
    
    //* if-else if-else
    // Grading system
    // int marks;
    // cout << "Enter the marks: ";
    // cin >> marks;
    // if (marks >= 90)
    // {
    //     cout << "Grade is A";
    // }   else if (marks <= 90 && marks >= 80)
    // {
    //     cout << "Grade is B";
    // }   else    {
    //     cout << "Grade is C";
    // }

    // Check lowerCase or uupperCase
    // char ch;
    // cout << "Enter the character: ";
    // cin >> ch;
    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "lowercase";
    // }   else    {
    //     cout << "uppercase";
    // }
    
    //* Ternary Operator
    // int n = 60;
    // cout << (n >= 0 ? "positive" : "negative") << endl;

    // * while loop
    // Print number from 1 to n
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int count = 1;
    while (count <= n)
    {
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;
}
