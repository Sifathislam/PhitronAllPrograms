for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            if (i == j)
            {
                printf("\\");
                continue;
            }
       if (i + j == n - 1)
            {
                printf("/");
                continue;
            }
            
        
            printf("*");
        }
        printf("\n");
    }
    