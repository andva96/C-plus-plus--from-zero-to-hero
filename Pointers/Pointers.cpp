/*
What is a Pointer? A pointer is an Integer (a number), which stores a memory address. Where an specific byte of memory is.
POINTER -> MEMORY ADDRESS.

"Pointers in C++ are a symbolic representation of addresses. 
They enable programs to simulate call-by-reference and create and manipulate dynamic data structures. 
Pointers store the address of variables or a memory location. "

Sources: https://www.geeksforgeeks.org/pointers-and-references-in-c/?ref=lbp and https://www.youtube.com/watch?v=DTxHyVn0ODg&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=16 
*/
#include <iostream>
#include <string.h>

using namespace std;

#define LOG(x) std::cout << x << std::endl

int main(){

    //SIMPLIEST POINTER EXAMPLE (* at the beginning)
    void* ptr = nullptr; //void here means right now we don't care about the data type being stored in the pointer. Pointer with memory address of 0.
    std::cin.get();

    int var = 8;

    //FIND MEMORY ADDRESS OF A VARIABLE (&): If I want to find the memory address of var, I can do it this way:
    int* pointer = &var; // we use the &

    //ACCESS AND CHANGE DATA OF A POINTER:  But if what I want is to access the data from a memory address (and change it), I do it like this:
    *pointer = 10;
    LOG(var);

    char* buffer = new char[8]; //8 bytes of memory and returns a pointer to the beginning of that block of memory.
    memset(buffer, 0, 8); //fills the block of memory with specified data.
   
    //We could also hace double or triple pointers - a pointer pointing to another pointer. 
    char** doublePointer = &buffer;

    //We should delete the data once we are done using it!
    delete[] buffer;

}