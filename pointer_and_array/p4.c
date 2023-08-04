#include<stdio.h>
void disp(int *p, int row, int col);
void show(int (*p)[3], int row, int col);
void print(int q[][3], int row, int col);

int main()
{
	int arr[3][3]={
					{1,2,3},
					{4,5,6},
					{7,8,9},	
				   };
	disp(arr, 3, 3);
	show(arr, 3, 3);
	disp(arr, 3, 3);
	return 0;
}

void disp(int *p, int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j<col; j++)
		{
			printf("%d\t",*(p + i * col + j));
		}
		printf("\n");
	}
}

void show(int (*p)[3], int row, int col)
{
	int *q;
	for (int i=0; i < row; i++)
	{
		q = p + i;
		
		for(int j = 0; j<col; j++)
		{
			printf("%d\t",*(q+j));
		}
		printf("\n");
	}
}

void print(int q[][3], int row, int col)
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("%d\t", q[i][j]);
		}
		printf("\n");
	}
}
