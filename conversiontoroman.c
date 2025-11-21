#include<stdio.h>
#include<string.h>
int romanChartoInt(char c)
{
    switch(c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int romantoInt(const char *s)
{
    int total = 0;
    int prev_value = 0,i;
    for( i = strlen(s) - 1; i >=0; i--)
    {
        int value = romanChartoInt(s[i]);
        if(value < prev_value)
        {
            total -= value; 
        }
        else
        {
            total += value;
        }
        prev_value = value;
    }
    return total;
}
int main()
{
    char roman[20];
    printf("Enter a roman number: ");
    scanf("%s", &roman);
    int result = romantoInt(roman);
    printf("Integer value: %d\n",result);
    return 0;
}
