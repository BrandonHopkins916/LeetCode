#include <iostream>

int main()
{
    int target = 0;

    int numbers[4] = { 2, 7, 11, 15 };

    int total = 0;

	/*printf("How many numbers do you need\n");
	scanf_s("%d", &num);*/

    /*printf("What are the numbers you want to use\n");*/

    target = 9;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            total = numbers[i] + numbers[j];
            if (target == total)
            {
                printf("[%d, %d] ", i, j);
                return 0;
            }
        }
    }
}
