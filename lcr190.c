#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int encryptionCalculate(int dataA, int dataB)
{
    while (dataB != 0)
    {
        int carry = (unsigned int)(dataA & dataB) << 1;
        dataA = dataA ^ dataB;
        dataB = carry;
    }
    return dataA;
}

int main()
{
    srand(time(0));     // 初始化随机数生成器
    int dataA = rand(); // 生成随机数
    int dataB = rand(); // 生成随机数

    int result = encryptionCalculate(dataA, dataB);
    printf("The result of encryptionCalculate(%d, %d) is %d\n", dataA, dataB, result);

    return 0;
}