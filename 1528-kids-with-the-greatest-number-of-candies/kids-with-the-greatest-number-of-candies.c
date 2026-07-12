bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max = candies[0];
    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > max) {
            max = candies[i];
        }
    }

    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;

    for (int i = 0; i < candiesSize; i++) {
        result[i] = candies[i] + extraCandies >= max;
    }

    return result;
}