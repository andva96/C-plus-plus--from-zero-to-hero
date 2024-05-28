/*
    HEADER FILES: used to declare certain types of functions. To know what functions/types we have available.
    It is used to indicate that certain function exists so we can use it through the program.
*/

#include <iostream>
#include "Log.h"
using namespace std;

void Log(const char* message){
    cout << message << endl;
}

int main() {
    InitLog();
}

