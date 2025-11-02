bool isPalindrome(int x) {
    if (x < 0)
        return (false);

    int reversed[11];
    int initial, i = 0, last, reverse = 0;
    initial = x;
    while (x != 0) {
        reversed[i] = x % 10;
        x /= 10;
        i++;
    }
    last = i;

    for (i = 0; i < last; i++) {
        if (reverse > 2147483647 / 10 || (reverse == 2147483647 / 10 && reversed[i] > 7))
            return 0;
        if (reverse < -2147483648 / 10 || (reverse == -2147483648 * 10 && reversed[i] < -8))
            return 0;
        reverse = reverse * 10 + reversed[i];
    }

    if (initial == reverse)
        return (true);
    else
        return (false);
}