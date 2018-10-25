#include <iostream>
// iostream contains input and output services for C++

using namespace std;
//This is the standard library and where all elements for C++ are found thus we declare it to use the said elements 

int main()
// This is the entry point for a program to be excecuted. There should therefore only be one main function

{
    string fullname;
    // This is the declaration of a variable called fullname in string datatype
    cout<<"Input your name: "<<endl;
    // cout is used to output whatever is declared in it after the "<<" which are the characters used to show output
    getline (cin, fullname);
    // getline is used when the input is supposed to have a space in it
    // cin is used to initiate input of a certain variable eg in this case is the local variable "fullname"
    cout<<"Hello \a"<<fullname;
    // this line outputs Hello and whatever the user inputs as the fullname
    return 0;
    // this is used to show a success status by returning the number 0 which is required at the beginning of the function by "int" 
}
// The curly braces hold the instructions of a function