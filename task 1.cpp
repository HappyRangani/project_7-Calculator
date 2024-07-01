#include <stdio.h>

/*void addition();
void subtraction();
void multiplication();
void division();
void modulus();
*/

void addition() 
{
    int num1, num2, result;
    printf("Enter first numbers : ");
    scanf("%d", &num1);
    printf("Enter second numbers : ");
    scanf("%d", &num2);
    
    
    result = num1 + num2;
    printf("Result: %d\n", result);
}

void subtraction() 
{
   int num1, num2, result;
    printf("Enter first numbers : ");
    scanf("%d", &num1);
    printf("Enter second numbers : ");
    scanf("%d", &num2);
    
    result = num1 - num2;
    printf("Result: %d\n", result);
}

void multiplication() 
{
    int num1, num2, result;
    printf("Enter first numbers : ");
    scanf("%d", &num1);
    printf("Enter second numbers : ");
    scanf("%d", &num2);
    
    result = num1 * num2;
    printf("Result: %d\n", result);
}

void division() 
{
    int num1, num2, result;
    printf("Enter first numbers : ");
    scanf("%d", &num1);
    printf("Enter second numbers : ");
    scanf("%d", &num2);
    
    if (num2 == 0) 
	{
        printf("Error! Division by zero is not allowed.\n");
    } 
	else 
	{
        result = num1 / num2;
        printf("Result: %d\n", result);
    }
}

void modulus() 
{
   int num1, num2, result;
    printf("Enter first numbers : ");
    scanf("%d", &num1);
    printf("Enter second numbers : ");
    scanf("%d", &num2);
    
    if (num2 == 0) 
	{
        printf("Error! Modulus by zero is not allowed.\n");
    } 
	else 
	{
        result = num1 % num2;
        printf("Result: %d\n", result);
    }
}



int main()
{
    char choice;

    do 
	{
        
        printf("\n=== Arithmetic Operations Menu ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Quit the program\n");
        printf("=================================\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        
        switch(choice) 
		{
            case '1':
                addition();
                break;
            case '2':
                subtraction();
                break;
            case '3':
                multiplication();
                break;
            case '4':
                division();
                break;
            case '5':
                modulus();
                break;
            case '6':
                printf("Exiting the program... Thank you \n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while(choice != '6'); 

    return 0;
}

