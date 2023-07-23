using namespace std;
#include<iostream>
void I_Sort(int arr[], int s)
{
	int key, j;
	for (int i = 1; i < s - 1; i++)//80,90,60,30,50,70,40
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void print(int arr[], int size)
{
	cout << "[ ";
	for (int i = 0; i < size - 1; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << "]\n";
}
int main()
{
	int z[] = { 80,90,60,30,50,70,40 };
	int r = sizeof(z) / sizeof(z[0]);
	print(z, r);
	cout << "--------------after swap----------------------\n";
	I_Sort(z, r);
	print(z, r);
}