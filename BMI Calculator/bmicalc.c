#include <stdio.h>
#include <math.h>

int main (){

    // bmi formula bmi = weight / height^2
    while (1)
    {
        float height;
        float weight;
        float bmi;

        printf("\n======= BMI Calculator ====\n");

        printf("Please Input your weight here (in kg): ");
        scanf ("%f", &weight);

        printf("Please Input your height here (in meters): ");
        scanf("%f", &height);

        bmi = weight / pow(height, 2);
        
        if (bmi <= 18.5){
            printf("You are underweight");
        } else if (bmi >= 18.6 && bmi <= 24.9){
            printf("You are normal weight ");
        } else if (bmi >= 25 && bmi <= 29.9){
            printf("You are overweight");
        } else if (bmi >= 30 && bmi <= 34.9){
            printf("You are obese");
        } else if (bmi >= 35 && bmi <= 39.9){
            printf("You are severely obese");
        } else if (bmi >= 40){
            printf("You are morbidly obese");
        }

        printf("\nYour bmi is %f\n",bmi);
    }
    return 0;
}


