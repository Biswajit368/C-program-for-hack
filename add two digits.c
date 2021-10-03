#include <stdio.h>
#include <conio.h>
 
int main(){
    int number, digitSum = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    while(number != 0){
        /* get the least significant digit(last digit) 
         of number and add it to digitSum */
        digitSum += number % 10;
        /* remove least significant digit(last digit)
         form number */
        number = number/10;
    }     
    printf("Sum of digits : %d\n", digitSum);
    getch();
    return 0;
}
