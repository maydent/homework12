//
//  test1.cpp
//  project3
//
//  Created by Spencer Zelin on 2/9/15.
//  Copyright (c) 2015 Spencer Zelin. All rights reserved.
//

/*
 Spencer Zelin, Talia Mayden
 Uniqname: Sdzelin, maydenT
 
 Description: This code tests out functions that were first called
 in the helpers.h library. The helpers.h library functions were defined in
 helpers.cpp.
*/


#include <iostream>
#include "helpers.h"

#include <string>
using namespace std;

int main() {
    
    // test printLeftAlignedTriangle
    printLeftAlignedTriangle(2);
    printLeftAlignedTriangle(5);
    printLeftAlignedTriangle(9);
    
    // test printRightAlignedTriangle
    printRightAlignedTriangle(1);
    printRightAlignedTriangle(3);
    printRightAlignedTriangle(4);
    printRightAlignedTriangle(10);
    
    
    // test printIsosceles
    printIsosceles(3);
    printIsosceles(5);
    printIsosceles(10);
    
    // test shiftAlphaCharacter
    cout << shiftAlphaCharacter('a', -6) << endl;
    cout << shiftAlphaCharacter('b', 2) << endl;
    cout << shiftAlphaCharacter('X', 5) << endl;
    cout << shiftAlphaCharacter('X', 50) << endl;
    
    // test caesarCipher
    cout << caesarCipher("abcdef ghi A AAjk", 5 , true) << endl;
    cout << caesarCipher("Look IT'S Sally!", 15 , false) << endl;
    cout << caesarCipher("the Ball iS Green?", 9 , true) << endl;

    // test removeNonAlphas
    cout << removeNonAlphas("Diag @ 11 p.m.") << endl;
    cout << removeNonAlphas("The Ball6 ^ Jao") << endl;
    cout << removeNonAlphas("Meawda213,21. 12. 23.") << endl;

    // test toUpperCase
    cout << toUpperCase("Diag @ 11 p.m.") << endl;
    cout << toUpperCase("&wadw)21312kmM") << endl;
    cout << toUpperCase("spencer zelin") << endl;
    
   
}