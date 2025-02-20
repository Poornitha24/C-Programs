#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

// Function to convert a string to uppercase
void toUpperCase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

int main() {
    char dnaSequence[MAX_SIZE];
    char pattern[MAX_SIZE];
    
    // Prompt and read DNA sequence
    printf("Enter DNA Sequence: ");
    fgets(dnaSequence, MAX_SIZE, stdin);
    // Remove trailing newline if present
    dnaSequence[strcspn(dnaSequence, "\n")] = '\0';
    
    // Prompt and read pattern to search
    printf("Enter pattern to search: ");
    fgets(pattern, MAX_SIZE, stdin);
    pattern[strcspn(pattern, "\n")] = '\0';
    
    // Convert both strings to uppercase for case insensitivity
    toUpperCase(dnaSequence);
    toUpperCase(pattern);
    
    int count = 0;
    char *ptr = dnaSequence;
    
    // Search for pattern occurrences (allowing overlapping occurrences)
    while ((ptr = strstr(ptr, pattern)) != NULL) {
        count++;
        ptr++;  // Move pointer forward to continue search (allows overlapping matches)
    }
    
    // Display the result
    printf("Pattern found %d time(s) in the DNA sequence.\n", count);
    
    return 0;
}
