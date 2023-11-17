#include <iostream>
#include <string>
// #include "compare.h"
// #include "operations.h"

using namespace std;

// void incr_age (int &age);
// void max_str (const string first, const string second, string &third);
// void max_int (const int first, const int second, int &third);
// void max_p_int (const int first, const int second, int *third);

int main() {
    // int age1 = 20;
    // int age2 = 30;
    // bool result = (age1 > age2);

    // if(result == true) {
    //     // cout << age1 << uppercase << " is less than " << age2 << endl;
    //     printf("%d is greater than %d\n", age1, age2);
    // } 
    // if(result != true) {
    //     printf("%d is less than %d\n", age1, age2);
    // }

    // age1 = result == true ? 40 : 50;

    // printf("%d\n", age1);

   
    // int col_width = 10;

    // cout << "First Name" << setw(col_width) << "Last Name" << setw(col_width) << "Age" << setw(col_width) << "Gender" << endl;
    // cout << setw(col_width) << "Michael" << setw(col_width) << "Abiona" << setw(col_width) << 24 << setw(col_width) << "Male" << endl;
    // cout << setw(col_width) << "Victoria" << setw(col_width) << "Abiona" << setw(col_width) << 22 << setw(col_width) << "Female" << endl;
    // cout << setw(col_width) << "Israel" << setw(col_width) << "Abiona" << setw(col_width) << -20 << setw(col_width) << "Male" << endl;

    // cout << log10(10) << endl;

    // const size_t COUNT = 20;
    // size_t i = 0;

    // for (i = 0; i < COUNT; ++i) {
    //     cout << i + 1 << " - I love C++ {for loop}" << endl;
    // }

    // cout << i << endl;
    
    // while (i < COUNT) {
    //     cout << i + 1 << " - I love C++ {while loop}" << endl;

    //     ++i;
    // }

    // do {
    //     cout << i + 1 << " - I love C++ {do while loop}" << endl;

    //     ++i;
    // } while (i < COUNT);

    // cout << "Loop done" << endl;

    // int scores[] = {2, 3, 7, 4, 5, 8, 7};
    // int sum = 0;

    // double height[7] = {4.3, 2.4, 4.5, 3.5, 1.2};

    // for (int element : scores) {
    //     sum += element;
    // }

    // int arr_size = size(scores);

    // for (size_t i = 0; i < size(scores); ++i) {
    //     sum += scores[i];
    // }

    // for(auto element : scores) {
    //     sum += element;
    // }

    // cout << arr_size << endl;
    // cout << "Sum = " << sum << endl;

    // char name[] = "Michael";
    // const char *name1 = "Michaellly";
    // char name2[] = "Michael";

    // cout << name << endl;
    // cout << name1 << endl;
    // cout << *name1 << endl;
    // cout << name2 << endl;

    // int age = 45;
    // int *age_ptr = &age;

    // cout << "Address: " << age_ptr << endl;
    // cout << "Reference: " << *age_ptr << endl;

    // int number1 = 34;
    // int *p_number1;

    // p_number1 = &number1;

    // cout << "Address: " << p_number1 << endl;
    // cout << "Reference: " << number1 << endl;

    // int *p_number2 = new int (42);

    // cout << "Address: " << *p_number2 << endl;
    // cout << "Reference: " << p_number2 << endl;

    // // Release memory
    // delete p_number2;
    // p_number2 = nullptr;

    // int *data = new int[10000000000000];
    // for (size_t i = 0; i < 100; i++) {
    //     try {
    //         int *data = new int[1000000000000000];
    //     }
    //     catch(const exception& e) {
    //         cout << "Something went wrong : " << e.what() << '\n';
    //     }
    // }

    // const size_t size = 10;

    // double *temp = new double[size] {1.5, 3.4, 1.9, 4.2, 9.2, 8.4, 9.4, 5.4, 6.6, 4.5};

    // if(temp) {
    //     // Prints out elements using regular array access notation or pointer notation
    //     for (size_t i = 0; i < size; i++) {
    //         cout << "Value : " << temp[i] << " --- " << *(temp + i) << endl;
    //     }
    // }

    // cout << "Temp: " << *temp << " --- " << temp << endl;

    // // Release memory
    // delete[] temp;
    // temp = nullptr;

    // cout << "==================================" << endl;

    // // Static Array
    // int scores[size] = {2, 3, 5, 7, 1, 4, 5, 9, 4, 4}; // Lives on the stack

    // cout << "Scores : " << std::size(scores) << endl; 

    // for(auto score : scores) {
    //     cout << "Score: " << score << endl;
    // }

    // cout << "+++++++++++++++++++++++++++" << endl;

    // for (size_t i = 0; i < (end(scores) - begin(scores)); i++) {
    //     cout << "Score: " << scores[i] << endl;
    // }
    
    
    // cout << "==================================" << endl;

    // // Dynamic Array
    // int *p_score = new int[size] {2, 3, 5, 7, 1, 4, 5, 9, 4, 4}; //Lives on the heap

    // range-based for loop and std::size does not work on dynamic arrays
    // cout << "P_scores : " << std::size(p_score) << endl; 
    // for(auto score : p_score) {
    //     cout << "Score: " << score << endl;
    // }

    // The size of an array allocated with new[] is not stored in any way in which it can be accessed, so the length is hardcoded in the for loop below as initialized 'size'
    // for (size_t i = 0; i < size; i++) {
    //     cout << "Score: " << p_score[i] << endl;
    // }

    // int int_data = 89;
    // double double_data = 99.23;

    // // reference
    // int &ref_int_data = int_data;
    // double &ref_double_data = double_data;

    // cout << "Int data : " << int_data <<endl;
    // cout << "int data reference : " << ref_int_data <<endl;
    // cout << "Double data : " << double_data <<endl;
    // cout << "double data reference : " << ref_double_data <<endl;

    // cout << "&Int data : " << &int_data << endl;
    // cout << "&Double data : " << &ref_double_data << endl;

    // ref_int_data = 702;
    // ref_double_data = 37.22;

    // cout << "Int data : " << int_data <<endl;
    // cout << "int data reference : " << ref_int_data <<endl;
    // cout << "Double data : " << double_data <<endl;
    // cout << "double data reference : " << ref_double_data <<endl;

    // cout << "&Int data : " << &int_data << endl;
    // cout << "&Double data : " << &ref_double_data << endl;

    // Character Manipulation
    // cctype library

    // cout << "D is alphanumberic : " << isalnum('K') << endl;
    // cout << "D is alphanumberic : " << isalnum('^') << endl;

    // char input_char = '8';

    // if(isalnum(input_char)) {
    //     cout << input_char << " is alphanumberic" << endl;
    // } else {
    //     cout << input_char << " is not alphanumberic" << endl;
    // }

    // cout << "8 is alphabetic : " << isalpha('8') << endl;
    // cout << "F is alphabetic : " << isalnum('F') << endl;


    // char message[] = "Hello there. How are you doing? The sun is shining.";
    // size_t count = 0;
    
    // for(auto character: message) {
    //     if(isblank(character)) {
    //         ++count;
    //     }
    // }

    // cout << "Blank Message Count : " << count << endl;

    // char thought[] = "The C++ Programming Language is one of the most used on the Planet";
    // size_t lower_count = 0;
    // size_t upper_count = 0;
    // size_t total_count = 0;

    // for(auto charc : thought) {
    //     if(islower(charc)) {
    //         ++lower_count;
    //     } else {
    //         ++upper_count;
    //     }

    //     ++total_count;
    // } 

    // cout << "Thought has " << lower_count << " lowercase character and " << upper_count << ". That totals to " << total_count << endl;

    // char dest_thought[size(thought)];

    // for (size_t i = 0; i < size(thought); ++i) {
    //     if(i == 0) {
    //         dest_thought[i] = toupper(thought[i]);
    //     } else {
    //         dest_thought[i] = tolower(thought[i]);
    //     }
    // }

    // cout << thought << endl;
    // cout << dest_thought << endl;

    // char text[] = "We have 20 balls and 40 black bags";
    // size_t digit_count = 0;

    // for(auto txt : text) {
    //     if(isdigit(txt)) {
    //         ++digit_count;
    //     }
    // }

    // cout << "We have " << digit_count << " digits in the text" <<endl;


    // cstring manipulation
    // // Find the number of times a letter occur in a string
    // const char *str = "Try not. Do, or do not. There is no try";
    // const char *result = str;
    // char target = 'T';
    // size_t iteration = 0;

    // result = strchr(result, target);

    // cout << "Here: " << (result = strchr(result, target)) << endl;

    // while ((result = strchr(result, target)) != nullptr) {
    //     cout << "Found '" << target << "' starting at " <<  result << endl;

    //     ++result;
    //     ++iteration;
    // }

    // Find last occurenc
    // char input[] = "/home/user/hello.cpp";
    // char *output = strrchr(input, '/');

    // if(output) {
    //     cout << output + 1 << endl;
    // }
    
    // Concatenation std::strcat

    // char dest[50] = "Hello ";
    // char src[50] = "World!";

    // strcat(dest, src);
    // strcat(dest, " Goodbye World!");

    // cout << "dest: " << dest << endl;

    // Functions
    // int maximum = get_max_value(213, 14);
    // int minimum = get_min_value(112, 54);
 
    // cout << "Max : " << maximum << endl;
    // cout << "Min : " << minimum << endl;
    // cout << "Inc & Multiply : " << incr_multiply(4, 5) << endl;

    // Function pass by value
    // int age = 39;

    // cout << "Age befor function call : " << age << endl;

    // incr_age(age);

    // cout << "age after function call : " << age << endl;

    // Function pass by pointer
    // int age = 39;

    // cout << "Age before function call : " << age << endl;
    // cout << "Age address before function call : " << &age << endl;

    // incr_age(&age);

    // cout << "age after function call : " << age << endl;

    // cout << "Program ending well" << endl;

    // Function pass by reference
    // int age = 39;

    // cout << "Age before function call : " << age << endl;
    // cout << "Age address before function call : " << &age << endl;

    // incr_age(age);

    // cout << "age after function call : " << age << endl;

    // Input and Output Parameters
    // string out_str;
    // string string1 = "Casablanca";
    // string string2 = "Balablu";

    // int out_int;
    // int input1 = 30;
    // int input2 = 112;

    // max_str(string1, string2, out_str);
    // max_int(input1, input2, out_int);
    
    // cout << "Final output string "  << out_str << endl;
    // cout << "Final output int "  << out_int << endl;

    // max_str(string1, string2, out_str);
    // max_int(input1, input2, out_int);
    // max_p_int(input1, input2, &out_int);
    
    // cout << "Final output string "  << out_str << endl;
    // cout << "Final output int "  << out_int << endl;

    // Lambda functions
    // auto res = []() {
    //     cout << "Inside the lambda function" << endl;
    // };
    // res();

    // [](double a, double b) {
    //     cout << "a + b = " << a + b << endl;
    // }(2.3, 4.1);

    // auto result = [](double a, double b) ->double {
    //     return a + b;
    // }(2.3, 4.5);

    // cout << "a + b = " << result <<endl;

    // Capture list in lambda functions: used to access variable outside the function
    // Capture by value
    // int a = 34;

    // auto func = [a]() {
    //     cout << "Inner value: " << a << endl;
    // };

    // for (size_t i = 0; i < 5; i++) {
    //     cout << "Outer value: " << a << endl;
    //     func();
    //     ++a;
    // };

    // Capture by reference
    int a = 34;

    auto func = [&a]() {
        cout << "Inner value: " << a << endl;
    };

    for (size_t i = 0; i < 5; i++) {
        cout << "Outer value: " << a << endl;
        func();
        ++a;
    };
    
    cout << "Program ending well" << endl; 

    // Pointers stores the address of a variable; the address is gotten by cout-ing the variable without the *
    // And to get the actual value of the variable, we cout the variable with the *

    return 0;
}

// void max_str (const string first, const string second, string &third) {
//     if(first > second) {
//         third = first;
//     }  else {
//         third = second;
//     }
// }

// void max_int (const int first, const int second, int &third) {
//     if(first > second) {
//         third = first;
//     }  else {
//         third = second;
//     }
// }

// void max_p_int (const int first, const int second, int *third) {
//     if(first > second) {
//         *third = first;
//     }  else {
//         *third = second;
//     }
// }

// void incr_age (int &age) {
//     ++age;

//     cout << "The new age is " << age << endl;
//     cout << "The new age address is " << &age << endl;
// }