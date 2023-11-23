#include <stdio.h>
int num(int a, int b, int c) // User defined function
{
        int result = a + b + c;
        return result;
}

int main()
{
        printf("%i\n", num(200, 5000, 300));
}
