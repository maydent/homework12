/**
 * helpers.cpp
 *
 * Spencer Zelin, Talia Mayden
 * sdzelin, maydenT
 *
 * EECS 183: Project 3
 *
 * This code displays the function definitions of printing three different kinds
 of triangles. It also include function definitions for a cyphering program
 called Caesar cipher, which can shift phrases around by a certain key number, 
 using a function that shifts each letter.
 */

#include "helpers.h"
#include <iostream>

// ASCII Art

int height = 0;
int line = 0;
int numStars = 0;
int i = 1 ;
int totalSpaces = height - i ;

void printLeftAlignedTriangle(int height)
{
    
    // Uses integer, numStars, to add more stars as rows increase.
    for(int line = 1; line <= height; line++){
        for(int numStars = 1; numStars <= line; numStars++){
            cout << "*";
        }
        cout << endl;
    }
}

void printRightAlignedTriangle(int height)
{
    /* Takes the left aligned triangle and uses an integer to account for
    the number of spaces and stars needed for each line. */
    for (i = 1; i <= height; i++){
        for (int j = 1; j <= (height - i) ; j++){
            cout << " " ;
        }
        for(int numStars = 1; numStars <= i; numStars++){
            cout << "*";
        }
        cout << endl;
    }
}


void printIsosceles(int height)
{
    int i;
    
    /* This loop creates the right amount of spaces and stars for each line
     as the number of spaces decreases and stars increase. */
    for (i = 1; i <= height; i++){
        for (int j = 1; j <= height - i ; j++){
            cout << " " ;
        }
        for(int numStars = 2; numStars <= 2 * i; numStars++){
            cout << "*";
        }
        cout << endl;
    }
}


// Ciphers

char shiftAlphaCharacter(char c, int n)
{
    const int NUM_ALPHA = 26;
    // The character shifted must be alphabetical
    if (isalpha(c))
        {
    if (n >= 0){
    
        for(int charactersShifted = 0; charactersShifted < n;
                charactersShifted++){
        // Jumps back to 'a' or 'A' when reaching 'z' or 'Z'
            if ((c == 'z') || (c == 'Z')){
                c = c - NUM_ALPHA;
                }
                c = c + 1;
            }
        }
    
    else if (n < 0){
        
        for(int charactersShifted = 0; charactersShifted > n; charactersShifted--){
            // Jumps back to 'z' or 'Z' when reaching 'a' or 'A'
            if ((c == 'a') || (c == 'A')){
                c = c + NUM_ALPHA;
                }
                c = c - 1;
            }
    
        
        }
    
    return c;
        
    }
    
    else {
        return c;
            }

}


string caesarCipher(string original, int key, bool encrypt)
{
   
    // encypting the code with a positive key
    if (encrypt){
        for(int onLetter = 0 ; onLetter < original.length() ; onLetter++){
        
            if (isalpha(original[onLetter])){
            
                original[onLetter] = shiftAlphaCharacter(original[onLetter],
                                                         key);

            }
        }
        return original;
    }

    
    // decrepyting the code; changes the key negative to go reverse
    else {
        
        key = key * (-1);
        
        for(int onLetter = 0 ; onLetter < original.length() ; onLetter++){
        original[onLetter] = shiftAlphaCharacter(original[onLetter], key);
            }
    
        return original;
    
    }

}


string removeNonAlphas(string original)
{
    // Declared a new word string to store letters that are alpha
    string newWord = "";
    
    for (int onLetter = 0; onLetter < original.length(); onLetter++){
     
    // letters that are alpha get added to string newWord
        if (isalpha(original[onLetter])){
            newWord += original[onLetter];
        }
    }
    
    // returning a string to avoid compile error
    return newWord;
}


string toUpperCase(string original)
{
    int onLetter = 0;
    const int UPPERCASE  = 32;
    for(onLetter = 0; onLetter < original.length(); onLetter++){
        if((isalpha(original[onLetter]) && ((original[onLetter] >= 'a')
                                            && (original[onLetter] <= 'z')))){
            original[onLetter] = original[onLetter] - UPPERCASE;
        }
    }
    
    // returning a string to avoid compile error
    return original;
}


string vigenereCipher(string original, string keyword, bool encrypt)
{
    int onLetter = 0;

    if (encrypt){
    
    for(onLetter = 0; onLetter < original.length(); onLetter++){
        
        if(isalpha(original[onLetter])){
            if(isalpha(keyword[onLetter])){
        int difference = 0;
            if ((keyword[onLetter] >= 'a') && (keyword[onLetter] <= 'z')){
                difference = keyword[onLetter] - 'a';
                original[onLetter] =
                shiftAlphaCharacter(original[onLetter], difference);
            }
            if ((keyword[onLetter] >= 'A') && (keyword[onLetter] <= 'Z')){
                difference = keyword[onLetter] - 'A';
                original[onLetter] =
                shiftAlphaCharacter(original[onLetter], difference);
            }
        }
        }
        keyword = keyword + keyword;
    }
        
    }
    
    if (!encrypt){
        
        for(onLetter = 0; original[onLetter] < original.length(); onLetter++){
            
            if(isalpha(original[onLetter])){
                if(isalpha(keyword[onLetter])){
                int difference = 0;
                if ((keyword[onLetter] >= 'a') && (keyword[onLetter] <= 'z')){
                    difference = (-1) * (keyword[onLetter] - 'a');
                    original[onLetter] =
                    shiftAlphaCharacter(original[onLetter], difference);;
                }
                if ((keyword[onLetter] >= 'A') && (keyword[onLetter] <= 'Z')){
                    difference = (-1) * (keyword[onLetter] - 'A');
                    original[onLetter] =
                    shiftAlphaCharacter(original[onLetter], difference);
                }
            }
            }
        }
        keyword = keyword + keyword;

    }

        
    // returning a string to avoid compile error
    return original;
}

