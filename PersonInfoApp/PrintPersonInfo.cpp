#include <iostream> // Include the iostream library for input and output
#include <string> // Include the string library for string data type

using namespace std; // Standard namespace for input/output

// Main function to execute the program
int main()
{
    string firstName = "Chris";
    string lastName = "Warren";
    string streetAddress = "123 Warren Blvd";
    string city = "Somewhere";
    string zipCode = "12345";

    // Cout is used to print the output to the console and endl is used to end the line
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    // Return 0 to indicate the program ran successfully
    return 0;
}