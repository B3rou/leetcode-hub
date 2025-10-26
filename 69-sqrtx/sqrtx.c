int mySqrt(int x) {
    long long i, testroot;
    for (i = 0; i <= x; i++) {
        testroot = i*i;
        if (testroot > x)
        {
            return (i - 1);
        }
    }
    if (x == 1){
        return(1);
    }
    return(0);
}