/*
 * loop100.c
 *
 * Created: 25-04-2025 09:47:41
 * Author : Madan M
 */ 

#include <avr/io.h>


int main(void)
{
	int i=0;
	int sum=0;
    /* Replace with your application code */
    while (i<100) 
    { sum+=i;
		i++;
    }
	return sum;
}

