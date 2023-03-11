#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius;
    printf("This is a temperature converter from celsius to fahrenheit \n");
    printf("Please enter the celsius temperature: ");

    scanf("%d", &celsius);
    printf("The temperature in fahrenheit is %2lf", (float)(celsius * 1.8) + 32);
    return 0;
}
