int reverse(int x) {
                              
    int reversed[11];
    int i = 0, last, reverse = 0;
    int negativity = 0;

    /*if (x < 0){
        x *= -1;
        negativity = 1;
    }*/
    while (x != 0) {
        reversed[i] = x % 10;
        x /= 10;
        i++;
    }
    last = i;

    for (i = 0; i < last; i++) {
        if (reverse > 2147483647/10 || (reverse == 2147483647/10 && reversed[i] > 7))
            return 0;
        if (reverse < -2147483648/10 || (reverse == -2147483648*10 && reversed[i] < -8))
            return 0;
        reverse = reverse * 10 + reversed[i];
        
    }
    /*if (negativity == 1)
        reverse *= -1;*/
    
    return (reverse);
}
