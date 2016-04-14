/**
 * helpers.cpp
 *
 * Talia Mayden : maydent
 * Spencer Zelin : sdzelin
 *
 *
 * EECS 183: Project 3
 *
 * <#description#>
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
        for(int line = 1; line <= height; line++){
            for(int numStars = 1; numStars <= line; numStars++){
                cout << "*";
            }
            cout << endl;
        }
}




void printRightAlignedTriangle(int height)
{
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
    for (i = 1; i <= height; i++){
        for (int j = 1; j <= height - i ; j++){
            cout << " " ;
        }
        for(int numStars = 2; numStars <= 2*i; numStars++){
            cout << "*";
        }
        cout << endl;
    }
}




// Ciphers

char shiftAlphaCharacter(char c, int n)
{
    
    if (isalpha(c))
        
    {
        
        if (n >= 0){
            
            int charactersShifted = 0;
            for(charactersShifted = 0; charactersShifted < n; charactersShifted++){
                if ((c == 'z') || (c == 'Z')){
                    c = c - 26;
                }
                c = c + 1;
            }
        }
        
        else if (n < 0){
            
            int charactersShifted = 0;
            for(charactersShifted = 0; charactersShifted > n; charactersShifted--){
                if ((c == 'a') || (c == 'A')){
                    c = c + 26;
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
    int onLetter;
    char letter = original[onLetter];
    
    
    if (isalpha(letter)){
        
        
        if (encrypt){
            
            for(int onLetter = 0 ; original[onLetter] ; onLetter++){
                original[onLetter] = shiftAlphaCharacter(original[onLetter], key);
                
            }
            
            return original;
            
        }
        
        
        
        else if (!encrypt){
            
            key = key * (-1);
            
            for(int onLetter = 0 ; original[onLetter] ; onLetter++){
                original[onLetter] = shiftAlphaCharacter(original[onLetter], key);
            }
            
            return original;
            
        }
    }
    
    //returning a string to avoid compile error
    return original;
    
}

bool isAlpha(char original){
    int letter = original;
        if (((letter >= 97) && (letter <=122)) || ((letter >= 65) &&
                                                   (letter <= 90))){
            return true;
    }
        else { return false ; }
}

string removeNonAlphas(string original)
{
    int i;

    for (i = 0; original[i]; i++){
        if (isAlpha(original[i])){

            original[i] = original[i];
        }
        else{
            original[i]= 8 ;
        }
    }
    return original;
}

//if (((onLetter >= 97) && (onLetter <=122)) || ((onLetter >= 65) &&
//                                               (onLetter <= 90))){

string toUpperCase(string original)
{
    // TODO: implement
    
    // returning a string to avoid compile error
    return original;
}


string vigenereCipher(string original, string keyword, bool encrypt)
{
    // Extra credit!
    
    // TODO: implement
    
    // returning a string to avoid compile error
    return original;
}

