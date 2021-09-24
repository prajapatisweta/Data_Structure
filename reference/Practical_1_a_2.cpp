#include <iostream>
using namespace std;

// sorting array maybe it is bubble sort

int main()
{
	int array[] = {1, 45, 23, 5, 14, 36, 28};
	int i;
	for (i = 0; i <= 6; i++)
	{
		for (int j = 0; j < 6 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "Sorted array" << endl;
	for (i = 0; i <= 6; i++)
	{
		cout << array[i] << ", ";
	}
	return 0;
}