#include <stdio.h>

int main()
{
    int i = 0, j = 1; // �ݺ��� ������ ���� ����
    int sum = 0, temp = 0; // �����հ� �� �ӽ��հ� ����
    int plus_num = 2; // �����Ǵ� �� (2,3,4....)

    for (i = 1; i <= 15; i++)
    {
        printf("%d", j); // ������ 1 ���
        temp += j; // �ӽ� �հ迡 ������ ����
        sum += temp; // ���� �հ迡 ������ ����

        for (j = 1; j <= i; j++)
        {
            if (j >= i)
                break;
            else
            {
                temp += plus_num; // �ӽ��հ迡 �������� �������� ���� ������ �� ����
                printf(" + %d", temp); // ���� �� ���
                plus_num++; // �����Ǵ� �� +1
                sum += temp; // �����հ迡 ������ ����
            }
           
           
        }
        printf(" = %d \n", sum);  // �����հ� ���
        j = 1;
        sum = 0;
        temp = 0;
        plus_num = 2; // ���� �ݺ��� ���� ���� ���� �ʱ�ȭ
    }

    return 0;
}