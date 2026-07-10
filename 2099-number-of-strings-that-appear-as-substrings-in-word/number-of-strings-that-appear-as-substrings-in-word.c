int numOfStrings(char** patterns, int patternSize, char* word) {
    int count=0;
    for (int i=0;i<patternSize; i++){
        if (strstr(word, patterns[i]) !=NULL){
            count++;

        }
    }

    return count;
    
}