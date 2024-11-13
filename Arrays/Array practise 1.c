#include<stdio.h>
int main(void)
{
/*
	int n[5];  //n is an array of 5 integers
	int i;     
	
	for(i = 0; i < 5; i++)  //initializing array to zero
	{
		n[i] = 0;
		
	}
	printf("%s%13s\n","element", "value");	
	for(i = 0; i < 5; i++)        //tabular format 
	{
		printf("%5d%13d\n",i,n[i]);
		
	}
*/

/*
    int n[5] ={5,12,34,56,23};
    int i;
    printf("%s%13s\n","Element","Value")

    for(i=0; i<5; i++)
   {
	 printf("%7d%13d\n",i,n[i]);
   }
*/


    
   int n[5] = {0}; 
   int i;

   printf("%s%13s\n","element", "value");	
	for(i = 0; i < 5; i++)        //tabular format 
	{
		printf("%5d%13d\n",i,n[i]);
		
	}

   




    return 0;
}
