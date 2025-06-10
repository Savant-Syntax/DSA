#include <iostream>     // Preprocessor Directive
using namespace std;    // Avoids naming conflict

int main(){                             // Code exectution starts
    char Symbol = '$';                  // Variable declaration and definition
    cout << "Hello World" << "\n";      // Output   --->    Hello World
    cout << Symbol << "\n";             // Output   --->    $
    cout << sizeof(Symbol) << "\n";     // Output   --->    1

    float PI = 3.14;                               
    cout << PI << "\n" << sizeof(PI) << "\n";       // Output   ---> 3.14, 4

    // Typecasting

    // Conversion
    char grade = 'A';           
    int value = grade;
    cout << value << "\n";      // Output   --->    65

    // Casting
    float price = 100.99;
    int mrp = price;
    cout << mrp << "\n";        // Output   --->    100
    return 0;
}