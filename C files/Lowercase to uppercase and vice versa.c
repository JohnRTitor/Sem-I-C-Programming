#include<stdio.h>
// Convert lowercase English letter to uppercase and vice versa 

int main()
{
    char ch;
    
    printf("Enter an English letter to convert it to uppercase or lowercase: \n");
    scanf("%c", &ch);
    
    // In ASCII, every letter and character is translated to their
    // unique value. Eg. A => 65, B => 66, C => 66,... upto Z => 90
    // Lowercase alphabets also have an unique ASCII value
    // which is usually uppercase ASCII value+32
    // for example, a => 65+32=97, b => 98,..... z => 122 
    // Here we are exactly checking for the ASCII value and converting
    // as needed and an error message is included as well. 
    
    if ( ch>=65 && ch<=90 ) {
    printf("The lowercase version of the letter is %c.", ch+32);
    }
    else if ( ch>=97 && ch<=122 ) {
    printf("The uppercase version of the letter is %c.", ch-32);
    }
    else {
    printf("The entered value is not an English letter.");
    }
    
    return 0;
}