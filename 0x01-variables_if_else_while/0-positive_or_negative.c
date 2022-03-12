#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - assigns a random number to int everytime
 * Description:tell is a nuber is positive, zero or nrgative 
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2
if(n==0){
	printf("%d is zero\n",n);
        }
else {
if(n>0))
{
printf("%d est positive\n",n);
} 
else
{
printf("%d est negative\n",n);
} 
     }
return 0; 
}

