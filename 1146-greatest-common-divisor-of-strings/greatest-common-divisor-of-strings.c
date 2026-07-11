int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char combined1[len1 + len2 + 1];
    char combined2[len1 + len2 + 1];

    strcpy(combined1, str2);
    strcat(combined1, str1);

    strcpy(combined2, str1);
    strcat(combined2, str2);

    if (strcmp(combined1, combined2) != 0) {
        return ""; 
    }

    int gcdLength = gcd(len1, len2);

    static char result[2004]; 

    strncpy(result, str1, gcdLength);
    result[gcdLength] = '\0'; 

    return result;
}

