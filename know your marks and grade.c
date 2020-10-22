#include<stdio.h>
main()
{
	int marks;
	printf("Enter marks scored out of 100 : ");
	scanf("%d",&marks);
	if(marks>100)
	{
		printf("The marks entered are invalid. Please try again ....");
	}
	else if(marks>=85)
	{
		printf("You have secured Grade A with %d marks",marks);
	}
	else if(marks>=70 && marks<=84)
	{
		printf("You have secured Grade B with %d marks",marks);
	}
	else if(marks>=55 && marks<=69)
	{
		printf("You have secured Grade C with %d marks",marks);
	}
	else if(marks>=40 && marks <=54)
	{
		printf("You have secured Grade D with %d marks",marks);
	}
	else
	{
		printf("You have secured Grade F with %d marks",marks);
	}
	
}
