#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swapCase(char* str) 
{
    while (*str) 
    {
        if (*str >= 'A' && *str <= 'Z') 
        {
            *str += 32; 
        }
        else if (*str >= 'a' && *str <= 'z') 
        {
            *str -= 32; 
        }
        str++;
    }
}

int main() 
{
    char input_str[100];

    printf("Input> ");
    scanf("%[^\n]s", input_str);

    swapCase(input_str);
    printf("Output> %s\n", input_str);

    return 0;
}
