#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);

    puts("Hello, World!");
    printf("%s\n",s);
    return 0;
}
