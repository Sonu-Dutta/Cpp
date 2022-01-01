//Write a program to reverse an array or string 
#include <iostream>
using namespace std;
void rvArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";
cout << endl;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	// int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array is" << endl;
	printArray(arr, 6);
	rvArray(arr, 0, 5);
	cout << "Reversed array is" << endl;
	printArray(arr, 6);	
	return 0;
}
