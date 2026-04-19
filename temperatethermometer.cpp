//this is simple thermometer program that converts temperature from celsius to fahrenheit and vice versa
#include <iostream>
using namespace std;    

int main()
{
    
    double celsius, fahrenheit; //double variables to store temperature in celsius and fahrenheit, double is used to allow for decimal values in temperature conversion results.
    char choice; // variable to store user's choice for conversion, either c for celsius to fahrenheit or f for fahrenheit to celsius

    cout << "Enter 'C' to convert from Celsius to Fahrenheit or 'F' to convert from Fahrenheit to Celsius: ";
    cin >> choice;// cin to get the user's choice for conversion, either c for celsius to fahrenheit or f for fahrenheit to celsius

    if (choice == 'C' || choice == 'c') //check if user wants to convert from celsius to fahrenheit, press c for the celcius to fahrenheit conversion
    {
        cout << "Enter temperature in Celsius: "; //prompt user to enter temperature in celsius
        cin >> celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0; //formula to convert celsius to fahrenheit
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    } 
    else if (choice == 'F' || choice == 'f') // check if user wants to convert from fahrenheit to celsius, press f for the fahrenheit to celsius conversion
    {
        cout << "Enter temperature in Fahrenheit: ";//prompt user to enter temperature in fahrenheit
        cin >> fahrenheit;
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0; //formula to convert fahrenheit to celsius
        cout << "Temperature in Celsius: " << celsius << endl;
    } 
    else //if user enters an invalid choice like any other character that is not c or f, display invalid choice message.
    {
        cout << "Invalid choice." << endl;
        //endl is used to insert a new line character and flush the output buffer, ensuring that the output is displayed immediately. It is often used at the end of a line of output to move the cursor to the next line.
    }

    return 0; // end of the program, display the result of the conversion and exit the program, return 0 indicates that the program ended successfully.
            // return 1 is when the program ends with an error, return 0 is when the program ends successfully without any errors.
}