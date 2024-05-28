#include <iostream>
using namespace std;

//If a user-defined function is declared after the main() function, an error will occur. This is in the case we don't have a function declaration above.

void MultiplyTwoNumbers(int a, int b){
    cout << "The result is: " << a * b << endl;
}

//Function with default parameters. Parameter with a default value is called "optional parameter".
void MyFunction (string name = "Andrea"){
    cout << name << endl;
}

//PASS BY REFERENCE: We can also pass a reference to the function. 
void SwapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

//Function overloading
int sumFunction(int n1, int n2){
    return n1 + n2;
}

double sumFunction(double n1, double n2){
    return n1 + n2;
}

//Function recursion ( technique of making a function call itself)
int sumNumberWithGroup(int nextNumber){
    if (nextNumber > 0){
        return nextNumber + sumNumberWithGroup(nextNumber - 1); 
    } else {
        return 0;
    }
}


int main(){
    //Testing MultiplyTwoNumbers() function with diff values.
    MultiplyTwoNumbers(4, 3);
    MultiplyTwoNumbers(23, 3);
    MultiplyTwoNumbers(7, 9); 
    //Testing optional parameters 
    MyFunction("Laura");
    MyFunction();  
    //Testing pass by reference
    int firstNumber = 10;
    int secondNumber = 20;

    cout << "Before swap: " << endl;
    cout << firstNumber << secondNumber << endl;

    SwapNums(firstNumber, secondNumber);

    cout << "After swap: " << endl;
    cout << firstNumber << secondNumber << endl;

    //Testing function overloading
    cout << "First int sum " << sumFunction(4,5) << endl;
    cout << "Second double sum " << sumFunction(4.5, 3.8) << endl;

    //Testing recursion
    cout << sumNumberWithGroup(10) << endl;
}