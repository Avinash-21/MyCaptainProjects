#include<stdio.h>
main()
{
	
	printf(" Hello and Welcome to our Restaurant!\n Please choose your meal as per the given menu :-\n");
	printf(" 1. Pizza.\n 2. Burger.\n 3. Fries.\n 4. Cold Drinks.\n 5. Hot Drinks.\n");
	int c;
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("You have selected Pizza. \nPlease pay Rs 199/- \n Bon Appetite!");
			break;
		case 2:
			printf("You have selected Burger. \nPlease pay Rs 149/- \n Bon Appetite!");
			break;
		case 3:
			printf("You have selected Fries. \nPlease pay Rs 99/- \n Bon Appetite!");
			break;
		case 4:
			printf("You have selected Cold Drinks. \nPlease pay Rs 49/- \n Bon Appetite!");
			break;
		case 5:
			printf("You have selected Hot Drinks. \nPlease pay Rs 149/- \n Bon Appetite!");
			break;
		default :
			printf("Invalid Choice. \nPlease try again");
	}
	return 0;
}
