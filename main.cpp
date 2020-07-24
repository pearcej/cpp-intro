// This program is designed to introduce C++

/* Multiline comments in
C++ look like this.*/

//comments that run to the end of the line in C++ look like this

#include <iostream>   //this is a library which makes input & output possible
using namespace std;  // this is the standard namespace

// C++ requires a main function and execution begins here
int main(){// braces in C++ are used to organize logical blocks of code
    
    // cout stands for console output
    // it is for printing to the screen
    cout << "Hello world!" << endl;// note that endl is an end of line.

    cout << "Hello" << " world" << "!" << endl;
   
    return 0;   // This is required in the main function, indicating 
                // that the main() function terminated correctly
} // This ends the main() function block
