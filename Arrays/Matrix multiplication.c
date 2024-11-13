#include<stdio.h>
int main(void)
{
	int i, j, k, p = 0, tot, count = 0,  MatC[2][3];
	int MatA[2][3] = { {1,2,3}, {4,5,2} };
	int MatB[3][3] = { {3,1,1}, {1,2,1}, {1,1,2} };
	
	printf(" Matrix A\n");
		for(i = 0; i < 2; i++ )
    	{
    		for(j = 0; j < 3; j++ )
    		{
    			printf(" %d ", MatA[i][j] );
			}
			puts(" ");
		}
		
	printf("\n Matrix B\n");
		for(i = 0; i < 3; i++ )
    	{
    		for(j = 0; j < 3; j++ )
    		{
    			printf(" %d ", MatB[i][j] );
			}
			puts(" ");
		}
	
	// calculating the matrix C 
	for( i = 0; i < 3; i++ )
	{
		tot = 0;
		for( j = 0; j < 3; j++ )
		{
			k = MatA[p][j] * MatB[j][i];
			tot = tot + k;
		}
		MatC[p][i] = tot;
		count++;
		if(count == 3 )
		 {
		    p++; 
			i = -1;
			count = 0;	
		 }
	}

	printf("\nMatrix C\n" );
	for(i = 0; i < 2; i++ )
    	{
    		for(j = 0; j < 3; j++ )
    		{
    			printf("%2d ", MatC[i][j] );
			}
			puts(" ");
		}
	return 0;
}
