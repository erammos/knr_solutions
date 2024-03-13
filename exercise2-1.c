#include <stdio.h>
#include <limits.h>
#include <float.h>


int main()
{

printf("signed char min-max %d %d\n",SCHAR_MIN, SCHAR_MAX);
printf("signed short min-max %d %d\n",SHRT_MIN, SHRT_MAX);
printf("signed int min-max %d %d\n",INT_MIN, INT_MAX);
printf("signed long min-max %ld %ld\n",LONG_MIN, LONG_MAX);

printf("char min-max %d %d\n",CHAR_MIN, CHAR_MAX);

printf("unsigned char min-max %d %d\n",0, UCHAR_MAX);
printf("unsigned short min-max %d %d\n",0, USHRT_MAX);
printf("unsigned int min-max %u %u\n",0, UINT_MAX);
printf("unsigned long min-max %lu %lu\n",0L, ULONG_MAX);
}
