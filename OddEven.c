#include <stdio.h>

int main()
{
   int i;
   do
   {
	printf("Enter an integer\n");
	scanf("%d",&i);
	if(i%2==0)
	printf("%d is even\n",i);
	   else
	   printf("%d is odd\n",i);
	
   }
   while(i >=0);
  return 0;
}
