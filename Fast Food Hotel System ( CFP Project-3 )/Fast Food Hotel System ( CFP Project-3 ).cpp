#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
	int J, totalA = 0, totalB = 0, totalC = 0, totalD = 0, K, option, option1, option2, option3, option4, chicken, chicken_sand, sub_menu, sub_menu1, sub_menu2, sub_menu3, sub_menu4,  cofee, tea, milk, soft, green_tea, pepe, fajita, hot_pizza,chicken_pizza_sand, club_sand, veg_sand, chicken_pizza, chicken_burg, mex_burg, class_burg, quant, quant1, quant2, quant3, quant4, total, total1, total2, total3, total4, pizza, burg, sand, bever;
	int quanta = 0,	quantb = 0, quantc = 0, quantd = 0;
	while (1)
	{
	printf("\t  WELCOME TO AHSAN RESTURANT \n");
	printf("\n");
	printf("Please choose from the following:\n");
	printf("\n\t1. Pizza\n");
	printf("\t2. Burger\n");
	printf("\t3. Sandwiches\n");
	printf("\t4. Beverages\n");
	printf("\n");
	scanf("%d", &option);
	
	if(option == 1)
		{
	pepe = 1200, fajita = 1250, hot_pizza = 1300, chicken = 1350;
		
		printf("\nEnter Your Pizza choice:");
		printf("\n\t1. Pepperoni (Rs.1200)");
		printf("\n\t2. Fajita (Rs.1250)");
		printf("\n\t3. Hot n Spicy (Rs. 1300)");
		printf("\n\t4. Chikken Tikka (Rs. 1350)\n");
		scanf("%d", &sub_menu1);
		if(sub_menu1 == 1)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant1);
			total1 = quant1*pepe;
			
			
		}
		else if(sub_menu1 == 2)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant1);
			total1 = quant1*fajita;
		}
		else if(sub_menu1 == 3)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant1);
			total1 = quant1*hot_pizza;
		}
		else if(sub_menu1 == 4)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant1);
			total1 = quant1*chicken;
		}
		else printf("Please select from the above menu ONLY!");
		totalA = totalA + total1;  
		quanta = quanta + quant1; 
	}
	else if (option == 2)
	{
	chicken_burg = 800, mex_burg = 900, class_burg = 850;
	 	printf("\nEnter Your Burger choice:");
	 	printf("\n\t1. Classic Burger (Rs. 850)\n");
	 	printf("\t2. Chicken Cheese Burger (Rs. 800)");
	 	printf("\n\t3. Mexican Burger (Rs.900)\n");
		scanf("%d", &sub_menu2);
		if(sub_menu2 == 1)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant2);
			total2 = quant2*class_burg;
		}
		else if(sub_menu2 == 2)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant2);
			total2 = quant2*chicken_burg;
		}
		else if(sub_menu2 == 3)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant2);
			total2 = quant2*mex_burg;
		}
		else printf("Please select from the above menu ONLY!");
		totalB = totalB + total2; 
		quantb = quantb + quant2; 
	}
	else if (option == 3)
	{
		chicken_sand = 350, club_sand = 400, veg_sand = 350;
		printf("\nEnter Your Sandwich choice:");
		printf("\n\t1. Chicken Sandwich (Rs. 350)");
		printf("\n\t2. Club Sandwich (Rs. 400)");
		printf("\n\t3. Veg Sandwich (Rs. 350)\n");
		scanf("%d", &sub_menu3);
		
		if(sub_menu3 == 1)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant3);
			total3 = quant3*chicken_sand;
		}	
		else if(sub_menu3 == 2)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant3);
			total3 = quant3*club_sand;
		}
		else if(sub_menu3 == 3)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant3);
			total3 = quant3*veg_sand;
		}	
		else printf("Please select from the above menu ONLY!");
		totalC = totalC + total3; 
		quantc = quantc + quant3; 
	}
		else if (option == 4)
	{
		
		cofee= 160, tea = 80, milk = 120, soft = 80, green_tea = 100;
		printf("\nEnter Your Beverage choice:");
		printf("\n\t1. Coffee (Rs. 160)");
		printf("\n\t2. Tea (Rs. 80)");
		printf("\n\t3. Milk Shake (Rs. 120)");
		printf("\n\t4. Green Tea (Rs. 100)\n");
		scanf("%d", &sub_menu4);
		if(sub_menu4 == 1)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant4);
			total4 = quant4*cofee;
		}	
		else if(sub_menu4 == 2)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant4);
			total4 = quant4*tea;
		}	
		else if(sub_menu4 == 3)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant4);
			total4 = quant4*milk;
		}	
		else if(sub_menu4 == 4)
		{
			printf("Enter Quantity: ");
			scanf("%d", &quant4);
			total4 = quant4*green_tea;
		}	
		else printf("Please select from the above menu ONLY!");
		totalD = totalD + total4;
		quantd = quantd + quant4; 
		
		
	}
	else {printf("Please select from the above menu ONLY!\n");	}

	int new_order;
		printf("\nWould you like to order anything else?\n\t1. Yes\n\t2. No\n");
		scanf("%d", &new_order);
		if(new_order==2)
		break;
	}
	printf("\n\tBILL TO PAY\n\n");
	if (quanta > 0)
	printf("Quantity of Pizzas = %d\n", quanta);
	if (quantb > 0)
	printf("Quanityt of Burgers = %d\n", quantb);
	if (quantc > 0)
	printf("Quantity of Sandwiches = %d\n", quantc);
	if (quantd > 0)
	printf("Quantity of Beverages = %d\n", quantd);
	
	total = totalA + totalB + totalC + totalD;
	if (totalA > 0)
	printf("Total of %d pizzas = Rs.%d\n",quanta, totalA);
	if (totalB > 0)
	printf("Total of %d burgers = Rs.%d\n",quantb, totalB);
	if (totalC > 0)
	printf("Total of %d sandwiches = Rs.%d\n",quantc, totalC);
	if (totalD > 0)
	printf("Total of %d beverags = Rs.%d\n",quantd, totalD);
	
	
	printf("\nTOTAL BILL = Rs.%d \n\nPlease take your Food Items! \n", total);
	getchar();
	exit(0);
}
