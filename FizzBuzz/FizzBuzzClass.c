#include <string.h>
#include<stdio.h>

int main()
{
int arraysize;

    printf("Hello this is Fizzbee again, new and improved. \n");
    printf("Please tell me how many objects you will want: ");
    scanf("%d", &arraysize);
    printf("You entered: %d", arraysize);
char FizzBee[arraysize][50];
int FizzBeeDivision[arraysize];
int Divisables[arraysize];
printf("\n");

for (int Objectsize = 0; Objectsize < arraysize; ++Objectsize)
{
    printf("\nWhat is your objects name? ");
    char input1[50];
    scanf("%s", input1);
    printf("You entered this name: %s", input1);
    strcpy(FizzBee[Objectsize], input1);
    printf("\nWhat divisable would you want for this object? ");
    int input2;
    scanf("%d", &input2);
    printf("You entered: %d", input2);
    FizzBeeDivision[Objectsize] = input2;
}

printf("\n");
printf("\nWhat should be the range? ");
int maxrange;
int minrange;
printf("\nMin range ");
scanf("%d", &minrange);
printf("Max range ");
scanf("%d", &maxrange);
printf("You enter the minimum range as: %d", minrange);
printf("\nYou enter the maximum range as: %d", maxrange);

printf("\n");
printf("FizzBee: \n");
for (int i = minrange;i <= maxrange; i++)
{
    printf("%d : \n", i);
    for (int b = 0; b < arraysize; b++)
    {
        if (i % FizzBeeDivision[b] == 0)
        {
            printf(" %s \n", FizzBee[b]);
        } 
    }
}


return 0;
}
