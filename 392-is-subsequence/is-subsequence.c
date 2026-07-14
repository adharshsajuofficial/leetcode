bool isSubsequence(char* s, char* t) {
    int i = strlen(s), j = strlen(t);
    i--, j--;

    while(i>=0 && j>=0){
        if(s[i] == t[j]){
            i--, j--;
        }
        else{
            j--;
        }
    }
    if (i>=0)
        return false;
    return true;
    
    
}