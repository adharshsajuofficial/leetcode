double findMaxAverage(int* nums, int N, int k) {
    double avg = 0;
    double size = (double) k;

    for (int i = 0; i < k; i++)
        avg += nums[i] / size;

    double max = avg;
    for (int i=k; i<N; i++){
        avg += (nums[i]/size)-(nums[i-k]/size);
        max = MAX( max, avg);
    }
    
    return max;
}