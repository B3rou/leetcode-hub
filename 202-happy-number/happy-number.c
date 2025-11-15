int calculate(int x);

bool isHappy(int n) {
    int seen[200];
    seen[0] = n;
    int i, index = 1;
    while (true) {
        n = calculate(n);
        if (n == 1) return(true);
        for (i = 0; i<index; i++) {
            if (seen[i] == n) return(false);
        }
        seen[index] = n;
        index++;
        if (index == 200) return(false);
    }
}

int calculate(int x) {
    int sum = 0;
    while (x != 0) {
        sum += (x % 10)*(x % 10);
        x /= 10;
    }
    return(sum);
}