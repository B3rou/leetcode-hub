int romanToInt(char* s) {
    int length = 0, repeated = 1, current = 0, next, sum = 0;

    while (s[length] != '\0')
    {   
        if (s[length] == 'I')
        current = 1;
        if (s[length] == 'V')
        current = 5;
        if (s[length] == 'X')
        current = 10;
        if (s[length] == 'L')
        current = 50;
        if (s[length] == 'C')
        current = 100;
        if (s[length] == 'D')
        current = 500;
        if (s[length] == 'M')
        current = 1000;
        
        if (s[length + 1] == 'I')
        next = 1;
        if (s[length + 1] == 'V')
        next = 5;
        if (s[length + 1] == 'X')
        next = 10;
        if (s[length + 1] == 'L')
        next = 50;
        if (s[length + 1] == 'C')
        next = 100;
        if (s[length + 1] == 'D')
        next = 500;
        if (s[length + 1] == 'M')
        next = 1000;
        if (s[length + 1] == '\0')
        next = 0;

        if (current > next)
        {
        sum += current * repeated;
        repeated = 1;
        }
        else if (current == next)
        {
        repeated++;
        }
        else if (current < next)
        {
        sum -= current * repeated;
        repeated = 1;    
        }



        length++;
    }
    return (sum);
}