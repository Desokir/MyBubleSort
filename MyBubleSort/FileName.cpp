#include <iostream>

using namespace std;

void BubbleSort(int arr[], int size)
{
	int temp;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = size - 1; j > i; j--)
		{
			if (arr[j] > arr[ j - 1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		
		}
	}

}


void PrintArr(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}
int main()
{
	int arr[5]{ 4, 2, 3,5,1 };
	BubbleSort(arr, 5);
	PrintArr(arr, 5);

	//int arr[500];
	//for (size_t i = 0; i < 500; i++)
	//{
	//	arr[i] = rand() % 100;
	//}
	//BubbleSort(arr, 500);
}
