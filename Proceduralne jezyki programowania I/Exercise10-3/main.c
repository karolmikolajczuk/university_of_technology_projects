/* example10-3.c */
#include <stdlib.h>
#include <stdio.h>

int main()
{
	const int n = 2;
	const int m = 2;
	float A[n][m];
	float B[n][m];
    // READ A
	int i,j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("A[%d][%d]: ",i,j);
			scanf("%f",&A[i][j]);
		}
	}
    //print A
	printf("A:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf(" %10.3f",A[i][j]);
		}
		printf("\n");
	}
    // READ B
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("B[%d][%d]: ",i,j);
			scanf("%f",&B[i][j]);
		}
	}
	//print A
	printf("B:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf(" %10.3f",B[i][j]);
		}
		printf("\n");
	}

    float C[n][m];
    float D[n][m];

	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
            C[i][j]=A[i][j]+B[i][j];
            D[i][j]=A[i][j]-B[i][j];
		}
	}

	printf("C:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf(" %10.3f",C[i][j]);
		}
		printf("\n");
	}

	printf("D:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf(" %10.3f",D[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
