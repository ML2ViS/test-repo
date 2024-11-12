#include<stdio.h> 
# define NEWLINE '\n'
int main()
{

char c;
char str[6];
int i = 0;
while( ((c = getchar()) != NEWLINE))
{
        str[i] = c;
        ++i;
        printf("%d\n", i);
}

return 0;
}