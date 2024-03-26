#include <stdio.h>


int binsearch(int x, int v[], int n)
{

	int low, high, mid;
	low = 0;
	high = n - 1;
	int ret = -1;
	while(low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else  {
		    
			low = mid + 1;
			ret = mid;
		}
	}
	return ret;
}
int main(void)
{
}


