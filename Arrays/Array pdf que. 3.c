#include<stdio.h>
int main(void)
{
   int myArray[10], largeNum[10], i,j=0;
   float tot = 0;
   float avg;
   
   for(i=0; i<10; i++)
   {
   	printf("Enter the number %d: ", i+1);
   	scanf("%d", &myArray[i]);
   	tot = tot + myArray[i];
   }
   
   
   /*for(i=0; i>10; i++)
   {
       tot = tot + myArray[i];
       
   }  */
   avg = tot / 10;
   
   
    for(i=0; i<10; i++)
   {
       if(avg < myArray[i])
       {
       	largeNum[j]=myArray[i];
       	j++;
	   }
   }
   
   printf("Avarage: %.2f\n", avg);
   
   printf("My Array: ");
   for(i=0; i<10; i++)
   {
       printf("%d\t", myArray[i]);

    }
   
   printf("\nLarge Array: ");
      for(i=0; i<j; i++)
   {
       printf("%d\t",largeNum[i]);
   }
      
   
   return 0;
   
   
}
