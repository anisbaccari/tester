
/* 
	add includes / path to libft
 */
#include "simple_test.h"


void max_min()
{
	printf("Maximum value for int: %d\n", INT_MAX);
    printf("Minimum value for int: %d\n", INT_MIN);
}

int main()
{ 
const char s1[] = "atoms\0\0\0\0";  // extra null bytes at end
const char s2[] = "atoms\0abc";     // embedded null byte
const char s3[] = "atomsaaa";

if(strcmp(s1, s2) == 0)      // strcmp stops at null terminator
	printf(" test 1 : passed"); 
else 
	printf(" test 1 : failed"); 


if (strcmp(s1, s3) != 0 )     // Strings are different
	printf(" test 2 : passed"); 
else 
	printf(" test 2 : failed");

if (strncmp(s1, s3, 5) == 0)  // First 5 characters of strings are the same
printf(" test 3 : passed"); 
else 
	printf(" test 3 : failed");

if (memcmp(s1, s3, 5) == 0 )  // First 5 bytes are the same
printf(" test 4 : passed"); 
else 
	printf(" test 4 : failed");

if (strncmp(s1, s2, 8) == 0)  // Strings are the same up through the null terminator
printf(" test 2 : passed"); 
else 
	printf(" test 2 : failed");

if (memcmp(s1, s2, 8) != 0)   // First 8 bytes are different
printf(" test 2 : passed"); 
else 
	printf(" test 2 : failed");



return 0;
}



