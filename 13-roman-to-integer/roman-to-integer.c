int romanToInt(char* s) {
    int lenght = 0, repeated = 1, current = 0, next, sum = 0;

    while (s[lenght] != '\0')
    {   
        if (s[lenght] == 'I')
        current = 1;
        if (s[lenght] == 'V')
        current = 5;
        if (s[lenght] == 'X')
        current = 10;
        if (s[lenght] == 'L')
        current = 50;
        if (s[lenght] == 'C')
        current = 100;
        if (s[lenght] == 'D')
        current = 500;
        if (s[lenght] == 'M')
        current = 1000;
        
        if (s[lenght + 1] == 'I')
        next = 1;
        if (s[lenght + 1] == 'V')
        next = 5;
        if (s[lenght + 1] == 'X')
        next = 10;
        if (s[lenght + 1] == 'L')
        next = 50;
        if (s[lenght + 1] == 'C')
        next = 100;
        if (s[lenght + 1] == 'D')
        next = 500;
        if (s[lenght + 1] == 'M')
        next = 1000;
        if (s[lenght + 1] == '\0')
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



        lenght++;
    }
    return (sum);
}