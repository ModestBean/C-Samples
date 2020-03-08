// @author ������ YinDou https://github.com/ModestBean
//
// @description
// �㷨�� MinDistance(A[0..n-1])
// ����:�������� A[0..n-1]
// ���:������������С������ٵ�Ԫ�صĲ�ֵ
// dmin < -��
//     for i < -0 to n - 1 do
//         for j < -0 to n - 1 do
//             if i��j and | A [[i]- A[j] | < dmin
//                 dmin < -| A[i] - A[j] |
//                 return dmin
// �����ܸĽ����㷨(����б�Ҫ����ȫ�����������㷨��������Ľ����㷨)
//
// @version1 20200302 YinDou �����Ŀ

#include <cstdio>
#include <exception>

using namespace std;

int minDistance(int* array, int length)
{
	if (array == NULL || length == 0)
		throw exception("Invaild input. \n");

	int leftValue, rightValue;
	leftValue = array[0];
	rightValue = array[0];

	for (int i = 0; i < length; i++) {
		if (array[i] > rightValue) {
			rightValue = array[i];
		}

		if (array[i] < leftValue) {
			leftValue = array[i];
		}
	}

	for (int i = 0; i < length; i++) {
		int value = array[i];
		int result = rightValue - leftValue;

		if (value > rightValue && result > (value - rightValue))
		{
			leftValue = rightValue;
			rightValue = value;
		}

		if (value < leftValue && result > (leftValue - value)) {
			rightValue = leftValue;
			leftValue = value;
		}
		
		if (value > leftValue&& value < rightValue)
		{
			if (2 * value > (leftValue + rightValue))
				leftValue = value;
			else
				rightValue = value;
		}
	}

	return rightValue - leftValue;
}

void Test(const char* testName, int* array, int length, int expected)
{
	if (testName != NULL)
		printf("%s begins:\n", testName);

	int result = NULL;
	try
	{
		result = minDistance(array, length);

		if (result == expected)
			printf("Passed.\n");
		else
			printf("Failed.\n");
	}
	catch (const std::exception& e)
	{
		printf(e.what());
	}
}

int main()
{
	//// ��������
	//int array[] = { 1, 2, 4, 6, 8, 10, -3 };
	//Test("Test1", array, 7, 1);

	//// ��Ϊ0
	//int array2[] = { 1, 10, 10, 3, 4, 3, 5 };
	//Test("Test2", array2, 7, 0);

	//// ȫ��һ��
	//int array3[] = { 1, 1, 1, 1, 1, 1, 1 };
	//Test("Test3", array3, 7, 0);

	// ȫ��һ��
	int array4[] = { 10, 5, -6, 2, 7, 9, 8 };
	Test("Test4", array4, 7, 1);

	/*int array3[] = { 0, 0 };
	Test("Test3", array3, 2, 0);

	int* array4 = NULL;
	Test("Test4", array4, 0, 0);*/
	return 0;
}