//
//  main.cpp
//  PRG 2-9-Cyborg-Data-Type-Sizes
//
//  Created by Keith Smith on 10/5/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  You have been given a job as a programmer on a Cyborg supercomputer. In order to
//  accomplish some calculations, you need to know how many bytes the following data
//  types use: char, int, float, and double. You do not have any technical documentation,
//  so you can't look this information up. Write a C++ program that will determine
//  the amount of memory used by these types and display the information on the screen.

#include <iostream>

using namespace std;

int main() {
    
    // Output byte values
    cout << "The size of a character is " << sizeof(char) << " byte.\n";
    cout << "The size of an integer is " << sizeof(int) << " bytes.\n";
    cout << "The size of a single precision float is " << sizeof(float) << " bytes.\n";
    cout << "The size of a double precision float is " << sizeof(double) << " bytes.\n";
    
    return 0;
}
