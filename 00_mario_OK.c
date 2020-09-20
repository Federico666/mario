#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0;
    
    //Ask the user while 1 < n < 9
    do
    {
        n = get_int("Enter the height of the pyramid:");
    }
    while (n < 1 || n > 8);
    
    //loop for rows
    for (int i = 0; i < n; i++)
    {               
        //loop for columns    
        for (int j = 0; j < n; j++)
        {           
            //if j<(n-i-1), print an empty space
            if (j < (n - i - 1))
            {              
                printf(" ");
            }
            //else print a brick
            else
            {                       
                printf("#");
            }
        }
        //print two blank spaces gap
        printf("  ");                   
        
        //loop for columns
        for (int j = 0; j < n; j++)
        {   
            //if j<(n-i-1), print an empty space
            if (j < (i + 1))
            {              
                printf("#");
            }
        }
        printf("\n");
    }
}
