#include <stdio.h>
int num(int a, int b, int c)
{
        int result = a + b + c;
        return result;
}

int main()
{
        char name[50];

        printf("%i\n", num(200, 500, 300));
}
