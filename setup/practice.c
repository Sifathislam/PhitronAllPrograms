#include <stdio.h>

int main(){
    
    // First practice is about conditional statement 

    //PP:- Write a program that asks the user to input two numbers and prints which one is larger.

    // int numberY, numberX;
    // scanf("%d %d", &numberX, &numberY);

    // if (numberX > numberY){
    //     printf ("The bigget is NumberX that is %d", numberX);
    // }
    // else if (numberY > numberX)
    // {
    //     printf("This bigget is NumberY that is %d", numberY);
    // }
    // else{
    //     printf("Those number are same or equal %d = %d", numberX, numberY);
    // }
    
    // PP:-Write a program that asks the user to input their age and prints whether they are a child (age 0-12), teenager (age 13-19), young adult (age 20-29), adult (age 30-59), or senior (age 60+).
    // int userAge ;
    // scanf("%d", &userAge);

    // if (userAge >= 0 && userAge <= 12)
    // {
    //     printf("Your are a little child because you are %d years old", userAge);
    // }
    // else if (userAge >= 13 && userAge <= 19)
    // {
    //     printf("Your are teenager because you are %d years old", userAge);
    // }
    // else if (userAge >= 20 && userAge <= 29)
    // {
    //     printf("Your are young adult because you are %d years old", userAge);
    // }
    // else if (userAge >= 30 && userAge <= 59)
    // {
    //     printf("Your are adult because you are %d years old", userAge);
    // }
    // else if (userAge > 60)
    // {
    //     printf("Your are senior because you are %d years old", userAge);
    // }
    // else{
    //     printf("You type a wrong age of yours");
    // }
    

    // PP:-Write a program that asks the user to input a year and prints whether it is a leap year or not. 
        
        int inputYear, inputYear1;
        scanf("%d%d", &inputYear , &inputYear1);

        if(inputYear % 4 == 0 || inputYear % 400 == 0  && inputYear % 100 != 0){
            printf("%d This year is a Leap Year\n", inputYear);
        }
        else{
            printf("%d This year is not Leap Year\n", inputYear);
        }
    // PP:- Another Problem is Take to input years a tell how many Leap year in there 
        int count = 0;
        int checkInputYearLeap = inputYear;

        for (int i = 0; i < inputYear1-inputYear; i++)
            {
                if(checkInputYearLeap % 4 == 0 || checkInputYearLeap % 400 == 0  && checkInputYearLeap % 100 != 0){
                count = count + 1;
                }
                checkInputYearLeap = checkInputYearLeap + 1;
            }
            printf("The Leap year between %d year to %d year %d times ", inputYear, inputYear1,count);

    return 0;
}