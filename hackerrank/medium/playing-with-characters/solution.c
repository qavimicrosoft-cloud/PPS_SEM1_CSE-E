#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    // 1. Read the character
    scanf("%c", &ch);
    
    // 2. Read the single-word string
    scanf("%s", s);
    
    // 3. Consume the newline character left in the input buffer
    scanf("\n");
    
    // 4. Read the sentence (including spaces)
    scanf("%[^\n]", sen);
    
    // Print the results on separate lines
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}
