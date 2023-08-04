#include<stdio.h>
int main()
{
	int arr[4][2] = {
						{1,2},
						{3,4},
						{5,6},
						{7,8},
					};
	
	for(int i = 0; i < 4; i++)
	{
		printf("Address of %d 1D array is %u\n",i,*(arr + i));
	}
	return 0;
}
