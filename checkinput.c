#include <stdio.h>

int main()
{
    char input;

    scanf("%c", &input);

    if(input<=57 && input>=48)
	printf("%c is a digit\n", input);
    else if(input>=65 && input>=90 || input>=97 && input<=122)
	printf("%c is a letter in the alphabet\n", input);
    else
	printf("%c is a special character\n", input);
}
