#include <stdio.h>

int main()
{
    int numbers[5][5];
    for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
    {
        for(int j = 0; j <sizeof(numbers[0])/sizeof(numbers[0][0]); j++)
        {
            if(i == j)
            {
                numbers[i][j] = 1;
            }
            
            else if (i+j == 4)
            {
                numbers[i][j] = 1;
            }
            else
            {
                numbers[i][j] = 0;
            }
            
            
        }
    }

    
    for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
    {
        for(int j = 0; j <sizeof(numbers[0])/sizeof(numbers[0][0]); j++)
        {
            printf("%i",numbers[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
