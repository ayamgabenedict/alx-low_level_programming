#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void) 
{
  int x;
  int y;
  int z;
  
   for (x = '0'; x <= '9'; x++)
   {
       for (y = '0'; y <= '9'; y++)
       {
           for (z = '0'; z <= '9'; z++)
           {
               if ((x == '0' && y == '1' && z > '1') || (x == '0' && y == '2' && z > '2') || (x == '0' && y == '3' && z > '3')
               || (x == '0' && y == '4' && z > '4') || (x == '0' && y == '5' && z > '5') || (x == '0' && y == '6' && z > '6')
               || (x == '0' && y == '7' && z > '7') ||  (x == '0' && y == '8' && z > '8')

               || (x == '1' && y == '2' && z > '2') || (x == '1' && y == '3' && z > '3') || (x == '1' && y == '4' && z > '4')
               || (x == '1' && y == '5' && z > '5') || (x == '1' && y == '6' && z > '6') || (x == '1' && y == '7' && z > '7')
               || (x == '1' && y == '8' && z > '8')

               || (x == '2' && y == '3' && z > '3') || (x == '2' && y == '4' && z > '4')
               || (x == '2' && y == '5' && z > '5') || (x == '2' && y == '6' && z > '6') || (x == '2' && y == '7' && z > '7')
               || (x == '2' && y == '8' && z > '8')

               || (x == '3' && y == '4' && z > '4')|| (x == '3' && y == '5' && z > '5') || (x == '3' && y == '6' && z > '6')
               || (x == '3' && y == '7' && z > '7')|| (x == '3' && y == '8' && z > '8')


               || (x == '4' && y == '5' && z > '5') || (x == '4' && y == '6' && z > '6') || (x == '4' && y == '7' && z > '7')
               || (x == '4' && y == '8' && z > '8')

               || (x == '5' && y == '6' && z > '6') || (x == '5' && y == '7' && z > '7')|| (x == '5' && y == '8' && z > '8')

               || (x == '6' && y == '7' && z > '7')|| (x == '6' && y == '8' && z > '8')

               || (x == '7' && y == '8' && z > '8'))
           {
               putchar(x);
               putchar(y);
               putchar(z);
               if (!(x == '7' && y == '8' && z =='9'))
               {
                   putchar(',');
                   putchar(' ');
               }
           }
           else
               continue;
           }
       }
    }
  
 return (0);
 
}
