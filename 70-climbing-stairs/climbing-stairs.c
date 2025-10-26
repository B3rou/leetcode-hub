int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    int i;
    long long stairs[n+1];
    stairs[1] = 1, stairs[2] = 2;
    for (i = 3; i <= n; i++){
        stairs[i] = stairs[i-1] + stairs[i-2];
    }

    return(stairs[n]);
}