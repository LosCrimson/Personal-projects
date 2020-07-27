#include<stdio.h>

int main()
{
    printf("This is Fizzbee. \nI will be your host this evening. \n");
    int i = 1;
    char Fizz[50] = "Fizz";
    char Buzz[50] = "Buzz";
    char FizzBuzz[50] = "FizzBuzz";
    printf("%s \n", Fizz);
    printf("%s \n", Buzz);
    printf("%s \n", FizzBuzz);
    printf("i = %d \n", i);
    printf("\n");
     for (i = 1; i < 100; i++)
     {
        if (i % 5 == 0 && i % 3 == 0)
        {
           printf("%s \n", FizzBuzz);
        }
           else if (i % 5 == 0)
           {
               printf("%s \n", Buzz);
           }      
           else if (i % 3 == 0)
           {
               printf("%s \n", Fizz);
           }
           else
           {
               printf("%d \n", i);
           }     
    }
    
    return 0;
}
