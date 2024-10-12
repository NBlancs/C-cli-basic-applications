#include <stdio.h>

int num1;
int num2;

void add(){
    printf("\nPlease Input the first number: ");
    scanf("%d", &num1);

    printf("\nPlease Input the second number: ");
    scanf("%d", &num2);

    int total = num1 + num2;
    printf("\nThe sum of the two number is: %d", total);

}


void subtraction(){
    printf("\nPlease Input the first number: ");
    scanf("%d", &num1);

    printf("\nPlease Input the second number: ");
    scanf("%d", &num2);

    int difference = num1 - num2;
    printf("\nThe difference of the two number is: %d", difference);
}

void multiplication(){
    printf("\nPlease Input the first number: ");
    scanf("%d", &num1);

    printf("\nPlease Input the second number: ");
    scanf("%d", &num2);

    int product = num1 * num2;
    printf("\nThe product of the two number is: %d", product);
}

void division(){
    printf("\nPlease Input the first number: ");
    scanf("%d", &num1);

    printf("\nPlease Input the second number: ");
    scanf("%d", &num2);

    if (num2 == 0){
        printf("\nCannot Divide a number by 0. Try Again!\n");
        division();
    }

    int quotient = num1/ num2;


    printf("\nThe quotient of the two number is: %d", quotient);}

int main(){
    int choice;

    while (1)
    {
        printf("\n\n========= Calculator Program =========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("\nInput choice here: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        default:
            printf("\nPlease Input a valid choice!\n");
            break;
        }
    }
    return 0;
}
