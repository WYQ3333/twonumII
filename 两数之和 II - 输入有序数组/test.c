//����һ���Ѱ����������� ���������飬�ҵ�������ʹ���������֮�͵���Ŀ������
//����Ӧ�÷����������±�ֵ index1 �� index2������ index1 ����С�� index2��
//˵�� :
//���ص��±�ֵ��index1 �� index2�����Ǵ��㿪ʼ�ġ�
//����Լ���ÿ������ֻ��ӦΨһ�Ĵ𰸣������㲻�����ظ�ʹ����ͬ��Ԫ�ء�
//ʾ�� :
//���� : numbers = [2, 7, 11, 15], target = 9
//��� : [1, 2]
// ���� : 2 �� 7 ֮�͵���Ŀ���� 9 ����� index1 = 1, index2 = 2 ��


#include<stdio.h>
#include<Windows.h>

/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
	int i = 0;
	int j = 0;
	returnSize = malloc(sizeof(int)* 2);
	for (i = 0; i<numbersSize; i++)
	{
		for (j = i + 1; j<numbersSize; j++)
		{
			if ((numbers[i] + numbers[j]) == target)
			{
				returnSize[0] = i + 1;
				returnSize[1] = j + 1;
				return returnSize;
			}
		}
	}
	return NULL;
}

int main()
{
	int numbers[] = { 2, 7, 11, 15 };
	int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
	int target = 9;
	int *returnSize = NULL;
	returnSize=twoSum(numbers, numbersSize, target, returnSize);
	printf("[%d,%d]", returnSize[0], returnSize[1]);
	system("pause");
	return 0;
}