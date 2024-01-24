#include <stdio.h>

size_t countLuckyTickets(void)
{
    size_t result = 0;
    size_t sumOfDigits = 0;
    size_t sums[28] = { 0 };

    for (size_t i = 0; i < 10; ++i)
    {
        for (size_t j = 0; j < 10; ++j)
        {
            for (size_t k = 0; k < 10; ++k)
            {
                ++sums[i + j + k];
            }
        }
    }

    for (size_t i = 0; i < 28; ++i)
    {
        result += sums[i] * sums[i];
    }

    return result;
}

int main()
{
    const size_t numberOfLuckyTickets = countLuckyTickets();
    printf("Six-digit number of lucky tickets = %Iu\n", numberOfLuckyTickets);

    return 0;
}