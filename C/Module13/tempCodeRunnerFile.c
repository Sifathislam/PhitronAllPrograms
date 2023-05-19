 s = n - 1;
    k = 1;
    for ( i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%c", '*');
        }
        s--;
        k = k + 2;
        printf("\n");        
    }