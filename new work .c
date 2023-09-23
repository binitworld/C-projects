#include <stdio.h>

void main () {
    // Initializing a string of 50 characters.
    char str[50];
    // Taking input of string.
    printf("Enter string in Uppercase: ");
    gets(str);

    // Using loop to convert Uppercase string to lowercase string.
    for (int i=0; str[i]!='\0'; i++) { 
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    // Printing the string converted into lowercase.
    puts(str);
}
