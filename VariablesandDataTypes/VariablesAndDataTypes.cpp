#include <iostream>
#include <string> // Include the string library.
using namespace std; //Allows to use names for objects and variables from the standard library.

/* VARIABLES IN C++.
Sources: https://www.w3schools.com/cpp/ and https://www.youtube.com/@TheCherno */

int main(){

    /* General rules for naming variables:
        1. Names can contain letters, digits and underscores.
        2. Names must begin with a letter or an underscore (_).
        3. Names are case-sensitive (myVar and myvar are different variables).
        4. Names cannot contain whitespaces or special characters like !, #, %, etc.
        5. Reserved words (like C++ keywords, such as int) cannot be used as names.
    */

    //VARIABLES ----------------------------------------------------------------------------------------------------
    
    // Variable declaration: type variableName = value; No need to assign a value since the beginning.
    int variable1 = 8; 
    cout << variable1 << endl; 

    //reassignment - value overwriting
    variable1 = 20; 

    //Variable display
    cout << variable1 << endl; //Both \n and endl are used to break lines. However, \n is most used.
    cout << "My age is " << variable1 << " years old. \n";

    //Add variables together
    int x =50;
    int y=60;
    int sum = x + y;
    cout << sum << "\n";

    //CONSTANTS ------------------------------------------------------------------------------------------------------
    const int myConstNumb = 15; // unchangeable and read-only.It must be assigned with a value during declaration.
   
    //DATA TYPES -----------------------------------------------------------------------------------------------------

    //Data types specifies the size and type of info the varaible will store.

    int myIntNumber = 5; //1. INTEGER (whole number without decimals).Size 2 or 4 bytes.
    float myFloatNumber = 4.567f; //2. FLOAT (fractional numbers - 1 or more decimals). Sufficient for storing 6-7 decimals. Size: 4 bytes.
    double myDoubleNumber = 5.997899; //3. Double (fractional numbers - 1 or more decimals). Sufficient for storing 15 decimal digits. Size: 8 bytes.
    bool myBoolean = true; //4. BOOLEAN. True(1)/false(0) values. Size: 1 byte.
    char myLetter = 'A'; //5. CHARACTER. Single character/letter/number/ASCII values. Size: 1 byte.
    string myText = "Hello"; //6. String (not primitive type, its an object)- text.

    //Float and double can also be written as scientific number with an "e" to indicate the power of 10.
    float a1= 35e3;
    double d1 = 12E4;

    //SIGNED/UNSIGNED DATA. unsigned integer - integer that is always positive
    int variable2 = 8;

    //Get size of a variable
    bool isDisplayed = false;
    cout << sizeof(isDisplayed) << endl; //1 byte

}