#include <stdio.h>
int main()
{
    int n, temp, sum = 0, d, fact;
    scanf("%d", &n);
    temp = n;
    while (n > 0)

    {

        d = n % 10;
        fact = 1;
        for (int i = 1; i <= d; i++)
            fact *= 1;
        sum += fact;
        n /= 10;
    }

    if (temp == sum)

        printf("strong number");

    else

        printf("Not Strong");

    return 0;
}
