/**
 * test1.cpp
 *
 * Spencer Zelin, Talia Mayden
 * sdzelin, maydenT
 *
 * EECS 183: Project 3
 *
 * This code calls function for printing three different kinds
 of triangles. It also calls functions for a cyphering program
 called Caesar cipher, which can shift phrases around by a certain key number,
 using a function that shifts each letter.
 */


#include <iostream>
#include "helpers.h"


void printLeftAlignedTriangle(int height);

int main(){
    //test printLeftAlignedTriangle
    printLeftAlignedTriangle(3);
    printLeftAlignedTriangle(6);
    printLeftAlignedTriangle(9);
    
    cout << endl;
    
    // test printRightAlignedTriangle
    printRightAlignedTriangle(1);
    printRightAlignedTriangle(3);
    printRightAlignedTriangle(4);
    
    cout << endl;
    
    //test printIsosceles
    printIsosceles(3);
    printIsosceles(4);
    printIsosceles(10);
    
    cout << endl;
    
    //test shiftAlphaCharacter
    cout << shiftAlphaCharacter('a', 0) << endl;
    cout << shiftAlphaCharacter('b', 2) << endl;
    cout << shiftAlphaCharacter('X', 5) << endl;
    cout << shiftAlphaCharacter('X', 50) << endl;
    cout << shiftAlphaCharacter('a', 27) << endl;
    
    cout << endl;
    
    //test caeserCypher
    cout << caesarCipher("Meet me at the Diag at 11 p.m.", 42, true) << endl;
    cout << caesarCipher("Meet me at the Diag at 11 p.m.", -1, true) << endl;
    cout << caesarCipher("abc DEFG hijk LMNOP", 10, true) << endl;

    cout << endl;
    
    //test removeNonAlphas
    cout << removeNonAlphas("Diag @ 11 p.m.") << endl;
    cout << removeNonAlphas("?!@$%") << endl;
    cout << removeNonAlphas("A!t$h 7Ye l?") << endl;
    
    cout << endl;
    
    //toUpperCase
    cout << toUpperCase("Diag @ 11 p.m.") << endl;
    cout << toUpperCase("abc DEFG hijk LMNOP") << endl;
}
