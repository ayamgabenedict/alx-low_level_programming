#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void) 
{
  int x;
  int y;
  
    for (x = '0'; x <= '9'; x++)
    {
      for (y = '1'; y <= '9'; y++)
        {
            if ((x == '0' && y >= '0') || (x == '1' && y > '1') || (x == '2' && y > '2') || (x == '3' && y > '3')
                || (x == '4' && y > '4') || (x == '5' && y > '5') || (x == '6' && y > '6') || (x == '7' && y > '7')
                || (x == '8' && y > '8'))
            {
                putchar(x);
                putchar(y);
                if (!(x == '8' && y == '9'))
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            else
                continue;
        }
    }
  
  return (0);
}



