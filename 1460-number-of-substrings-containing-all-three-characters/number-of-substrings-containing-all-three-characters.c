int numberOfSubstrings(char* s) {
    int cnt=0, letter=0, last[3]={-1,-1,-1};
    for (register int r=0; s[r]!='\0';r++){
        const int c=s[r]-'a', c1=(c==2)?0:c+1, c2=(c==0)?2:c-1;
        last[c]=r;
        cnt+=1+fmin(last[c1], last[c2]);

    }
return cnt;
    
}