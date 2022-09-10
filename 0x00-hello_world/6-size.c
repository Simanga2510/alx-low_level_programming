#include <stdio.h>                                                                                                                                       

                   
/**                                                                                                                                                      

* main -  Entry point                                                                                                                                    

*                                                                                                                                                        

*Return: Always 0 (Success)                                                                                                                              

*/                                                                                                                                                       

int main(void)
{
	char c;
	int i; 
	long li;
	long long lli; 
	float  f; 

	printf("size of the char: %1d bytes(s)\n", sizeof(c));
	printf("size of an int: %1d byets(s)\n", sizeof(i));
	 printf("size of a long int: %1d byets(s)\n", sizeof(li));
	printf("size of a long long int: %1d bytes(s)\n", sizeof(lli));
	printf("size of a float: %1d bytes(s)\n", sizeof(f));
	return(0);
}
