#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// check if a character is a vowel
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    
    while (left < right) {
        // Move left pointer until a vowel is found
        while (left < right && !isVowel(s[left])) {
            left++;
        }
        // Move right pointer until a vowel is found
        while (left < right && !isVowel(s[right])) {
            right--;
        }
        
        // Swap the vowels
        if (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            
            // Move pointers inward after swapping
            left++;
            right--;
        }
    }
    
    return s;
}