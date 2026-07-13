// Helper function to reverse a segment of a string
void reverse(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

char* reverseWords(char* s) {
    int len = strlen(s);
    
    // Step 1: Reverse the whole string
    reverse(s, s + len - 1);
    
    // Step 2 & 3: Reverse individual words and remove extra spaces in-place
    int write_idx = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] != ' ') {
            // If it's not the first word, add exactly one separating space
            if (write_idx != 0) {
                s[write_idx++] = ' ';
            }
            
            // Mark the beginning of the word
            int word_start = write_idx;
            
            // Copy the word to its new compressed position
            while (i < len && s[i] != ' ') {
                s[write_idx++] = s[i++];
            }
            
            // Reverse this specific word back to its correct reading order
            reverse(s + word_start, s + write_idx - 1);
        }
    }
    
    // Null-terminate the cleaned-up string
    s[write_idx] = '\0';
    return s;
}