#include<stdio.h>

int main (){
    // int age = 15;
    // int age;
    // char fname = 'S';
    
    // float pi = 3.14;
    // printf("kch b likh do \n");
    // printf("kch b likh do \n");
    // printf("kch b likh do \n");
    // printf("kch b likh do \n");
    // printf("kch b likh do \n");

    // printf("age is %d", age);
    // printf("age is %c", fname);
    
    // printf("Enter your age ");
    // scanf("%d", &age);
    // printf("your age is %d", age);
   
//    int num1, num2;

//    printf("Enter first Number: \n");
//    scanf("%d", &num1);
//    printf(" Enter second number :\n");
//    scanf("%d",&num2 );
//     int sum = num1 + num2;
//     printf("sum is %d", sum);
//     printf("Subtract is : %d", num1 - num2);
//     printf("\n sum is : %d", num1 + num2);
//     printf("\n Product is : %d", num1 * num2);
//     printf("\n division is : %d", num1 / num2);



//    printf("your first num is: %d ", num1, "and second num is: %d", num2);
//    printf("number1 + number2 is: &d", num1+num2);
   
   
   
   /* Task no 01 : Write a 
   program to calculate area of a Circle
*/

    // float radius;
    // printf("Enter circle radius : ");
    // scanf("%f", &radius);


    // printf("\n Area of Circle is: %f", 3.14*radius*radius );

    // ternary condition
    // int age ;
    // printf ("enter your age: ");
    // scanf ( "%i" ,&age) ;
    // (age>=18 && age<= 25)? printf("you can vote"): (age>=25)? printf("you must have to vote"): printf("you cannot vote");
    // int age;
    // printf( "\n enter your age: ");
    // scanf("%d", &age);

    // if (age > 18){
    //     printf("you are adult now");
    // }
    // else{
    //     printf("you are not adult");
    // }


    int day ; // days represent by 1-7

    printf("Enter number (1 - 7) ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:  printf("monday");
        break;
    case 2:  printf("Tuesday");
        break;
    case 3:  printf("Wednesday");
        break;
    case 4:  printf("Thrusday");
        break;
    case 5:  printf("Friday");
        break;
    case 6:  printf("Satuarday");
        break;
    case 7:  printf("Sunday");
        break;
    default: printf("Not a valid number");
    }






   
   
   
    return 0;
}
