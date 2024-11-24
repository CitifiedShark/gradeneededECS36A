
#include <stdio.h>

/*
This program helps the user know what grade they 
would need on a final to get the grade they want

We first ask the user for input:
1. Letter grade they want
2. The percent they need to get that grade
3. The current percent they have in the class
4. The weight of the final

We calculate using the inputs

We display the percent needed on the final to get that grade
*/
int main(void){
    double neededGrade, currentGrade, finalWeight; //Variables for user input
    double finalWeightPercent, weightClasswork, weightClassworkInGrade, neededFinalGrade; //Variables used in calculations
    char letterGrade; //For letter grade

    //Receive user inputs
    printf("Enter the grade you want in the class: ");
    scanf(" %c", &letterGrade);

    printf("Enter the percent you need to get that grade: ");
    scanf("%lf", &neededGrade); 

    printf("Enter your current percent in the class: ");
    scanf("%lf", &currentGrade);
    
    printf("Enter the weight of the final: ");
    scanf("%lf", &finalWeight);

    //Calculate user's inputs to give them final percentage needed
    finalWeightPercent = finalWeight / 100.0;

    weightClasswork = 1.0 - finalWeightPercent;

    weightClassworkInGrade = neededGrade - (weightClasswork * currentGrade);

    neededFinalGrade = weightClassworkInGrade / finalWeightPercent;

    //Display the final percentage needed to the user
    printf("You need to get at least %.2lf%% on the final to get a %c in the class.\n", neededFinalGrade, letterGrade);

    return 0;
}