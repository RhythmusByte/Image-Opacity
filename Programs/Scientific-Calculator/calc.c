// Scientific Calculator

#include <stdio.h>
#include <math.h>

int main() {
	int choice;
	float num1, num2, root;
	
	do {
		printf("\n1: Square Root\n2:Square\n3:Power\n4:Mod\n5:Percentage\6:sin Value\7:log (base 10)\n8:log (base e)\nEnter choice: ");
		{
			
			case1: root=sqrt(num1);
			printf("\nSquare root of %f = %f",num1,root);
			break;
			
			case2: printf("Square root of %f = %f",num1,num1 * num1);
			break;
			
			case3: printf("\nRaised value = ");
			scanf("%f",&num2);
			printf("\nPower of (%f,%f) = %f",num1,num2,pow(num1,num2));
			break;
			
			case4: if(num<0)
			{
				num2=-num1;
			}
			printf("\nModules of %f = %f",num1,num2);
			break;
			
			case5: printf("\nTotal = ");
			scanf("%f",&num2);
			printf("\nPercentage = %f",(num1*100)/num2);
			break;
			
			case6: printf("\nsin(%f) = %f",num1,sin(num1));
			break;
			
			case7: printf("\nlog (%f) = %f",num1,log(num1));
			break;
		}
	} while (choice >=1 || choice <=8);
	return 0;
}
