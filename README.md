# Insertion-Sort-Algorithm
Insertion Sort is one of the basic sorting algorithms  
          
 #### Extra Explanation:
- The idea of this algorithm is as follows:  
"Ascending order"  
- We consider the first item in the list in its correct place, we compare it with the next item if it is smaller than we make a shift of the first item in place of the second item, otherwise not.  
- We compare the third item with the previous two and put it in its right place by shifting.  
- Thus, the left most starts to be sorted while the right most remains unsorted until it is sorted.

## Code:

```
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
```
     
## Buy me a Coffee:
if you want to support me
(https://www.buymeacoffee.com/zu698air)
     
#### Don't forgit to give me a Star
     
## Done
