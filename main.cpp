#include <iostream>
#include <string>
#include <concepts>

using namespace std;

// template <typename Y> 

// Pass by value (copies are made and gives different addresses)
// Y maximum(Y a, Y b) {
//     return (a > b) ? a : b;
// }

// Pass by reference (no copies made, values will be store in the same address location)
// const Y& maximum(const Y& a, const Y& b) {
//     return (a > b) ? a : b;
// }

int main() {
    // Function templates: are used to avoid code repetitions in a function e.g in a function overload
    // Function templates are not real C++ code.

    // int x = 7;
    // int y = 8;

    // string first = "Hello";
    // string second = "World";

    // auto result = maximum(x, y);
    // auto result2 = maximum(first, second);

    // cout << "Result 1: " << result << endl;
    // cout << "Result 2: " << result2 << endl;

    // Template type deductions and explicit arguments:
    // this is used when two different types are passed in as arguments, a type of the two is explicit statment so C++ can use it as the return type

    // int x = 7;
    // int y = 8;

    // double a = 3.4;
    // double b = 5.6;

    // string e = "Hello";
    // string f = "World";

    // auto result = maximum<double>(a, x); //explicit templte argument
    // cout << "Result : " << (result) <<endl;
    // auto result2 = maximum(e, f);

    // Concepts: they are a mechanism to place constraints on your templates type parameters

    cout << "Program ending well" << endl; 

    return 0;
}
