#include <stdio.h>
#include <math.h>

int main()
{
/* 
To-do list
- Writing values to a text file
-
 */


int a,b,c,d;
int lBound=1;
int uBound = 15;
int nPower = 2;


for (a = 1; a <= uBound; a++)

{
    for (b = 1; b <= uBound; b++)

    {
        for (c = 1; c <= uBound; c++)

        {
            for (d = 1; d <= uBound; d++)

            {

                if (pow(a, nPower)+ pow(b, nPower) == pow(c, nPower) + pow(d, nPower))   //&& ((a != b) && (c != d)))
                { 
                    if(a!=b && b!=c && c!=d && d!=a && c!=a && b!=d)
                    {
                     printf("a b c d  = %d %d %d %d\n", a,b,c,d);
                     break;
                    }
                    
                }   
                
               
            }
            
        }
        
    }

}
}

