// Scientific Calculator

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n1: Square Root\n2: Square\n3: Power\n4: Mod\n5: Percentage\n6: sin Value\n7: log (base 10)\n8: log (base e)\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter a number: ");
                scanf("%f", &num1);
                result = sqrt(num1);
                printf("\nSquare root of %f = %f", num1, result);
                break;

            case 2:
                printf("\nEnter a number: ");
                scanf("%f", &num1);
                result = num1 * num1;
                printf("\nSquare of %f = %f", num1, result);
                break;

            case 3:
                printf("\nEnter the base: ");
                scanf("%f", &num1);
                printf("\nEnter the exponent: ");
                scanf("%f", &num2);
                result = pow(num1, num2);
                printf("\nPower of (%f, %f) = %f", num1, num2, result);
                break;

            case 4:
                printf("\nEnter a number: ");
                scanf("%f", &num1);
                result = fabs(num1);
                printf("\nAbsolute value of %f = %f", num1, result);
                break;

            case 5:
                printf("\nEnter the total: ");
                scanf("%f", &num1);
                printf("\nEnter the percentage: ");
                scanf("%f", &num2);
                result = (num2 * 100) / num1;
                printf("\nPercentage = %f", result);
                break;

            case 6:
                printf("\nEnter a number: ");
                scanf("%f", &num1);
                result = sin(num1);
                printf("\nsin(%f) = %f", num1, result);
                break;

            case 7:
                printf("\nEnter a number: ");
                scanf("%f", &num1);
                result = log10(num1);
                printf("\nlog (base 10) of %f = %f", num1, result);
                break;

            case 8:
                printf("\nEnter a number: ");
                scanf("%f", &num1);
                result = log(num1);
                printf("\nlog (base e) of %f = %f", num1, result);
                break;

            default:
                printf("\nInvalid choice. Please enter a number between 1 and 8.");
                break;
        }

    } while (choice >= 1 && choice <= 8);

    return 0;
}
