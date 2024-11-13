#include<stdio.h>
int main(void)
{
	int mat1[4][4] = {5,7,8,10,9,3,0,6,8,1,9,2,4,7,2,1};
	int mat2[4][4] = {2,2,1,3,8,1,3,1,1,2,2,4,3,1,1,2};
	int mat3[4][4];
	int i,j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
		for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ",mat1[i][j]);
			if(i == 2 && j == 4)
			{
				printf("   +");
				
			  }  
			 
		}
	    printf("\n");
    }
    
    /*	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ",mat2[i][j]);
		}
	    printf("\n");
    }
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ",mat3[i][j]);
		}
	    printf("\n");
    }
    */

    return 0;
}
