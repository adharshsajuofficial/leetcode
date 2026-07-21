int largestAltitude(int* gain, int gainSize) {
    int res = 0, curr = 0;
    for (int i = 0; i< gainSize; i++) {
        curr += gain[i];
        if (curr > res) {
            res = curr;
        }
    }
    return res;
}