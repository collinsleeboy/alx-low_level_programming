#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- print if number is positive,zero or negative
*
* Descruption : using the main function
* this program prints programming is positive, zero or negative
* return : 0
*/
int main(void)
{
int n;

srand(time(0));
<<<<<<< HEAD
n = rand() - RAND_MAX /2;
/* code */
if (n >0)
=======
n = rand() - RAND_MAX / 2;
if (n==0)
{
printf("%n is zero\n", n);  
if (n > 0)
>>>>>>> 4043f50ff6c4d608ff96ddd35e30f7080698521e
{
   printf(%i is positive\n", n);
}
else if (n == 0)
{
   printf(%i is zero\n", n);
}
else if (n < 0)
{
  printf(%i is negative\n", n);
}
return (0);
