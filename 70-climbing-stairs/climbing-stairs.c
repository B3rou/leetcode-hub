int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    int i;
    long long a = 1, b = 2, c;

    for (i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    return(b);
}