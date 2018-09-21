#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    int n = height;
    for(int c = 0;c < height ; c++)
    {
        for(int space = n - 1; space > 0; space--)
        {
            printf(" ");                                                                
        }  
        for(int hash = 0; hash < c + 2; hash++)     
         {
            printf("#");
         }
              printf("\n");
    n = n - 1;          
    }
    
}
 

        
    
    
    
    
  
