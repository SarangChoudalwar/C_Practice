#include<stdio.h>
void print(int *a,int jj,int kk,int ll);
void disp(int a[][3][2], int jj, int kk, int ll);
void show(int (*a)[3][2], int jj, int kk ,int ll);
int main()
{
	int a[2][3][2]={
					{
						{1,2},
						{3,4},
						{5,6},	
					},
					{
						{7,8},
						{9,10},
						{11,12},
					},
				};

	print(a,2,3,2);
	disp(a,2,3,2);
	show(a,2,3,2);
	return 0;
}

void print(int *a,int jj, int kk, int ll)
{
	for(int i=0;i<jj;i++)
	{
		for(int j=0;j<kk;j++)
		{
			for(int k=0;k<ll;k++)
			{
				printf("%d\t", *(a+i*kk*ll+j*ll+k));
			}
			printf("\n");
		}
		printf("\n");
	}
}
void disp(int a[][3][2],int jj ,int kk, int ll)
{
	for(int i=0;i<jj;i++)
	{
		for(int j=0;j<kk;j++)
		{
			for(int k=0;k<ll;k++)
			{
				printf("%d\t", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
void show(int (*a)[3][2],int jj,int kk, int ll)
{
	for(int i=0;i<jj;i++)
	{
		for(int j=0;j<kk;j++)
		{
			int *temp = a[i][j];
			
			for(int k=0;k<ll;k++)
			{
				printf("%d\t",*(temp+k));
			}
			printf("\n");
		}
		printf("\n");
	}
}
