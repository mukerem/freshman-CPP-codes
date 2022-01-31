// This program demonstrates the QuickSort algorithm
 #include <algorithm> // needed for swap function
 #include <iostream>
 using namespace std;

// Function prototypes
 void quickSort(int [], int, int);
 int partition(int [], int, int);

 int main()
 {
 const int SIZE = 10;
 int array[SIZE] = {7, 3, 9, 2, 20, 1, 8, 4, 6, 5};
 int x; // Counter

 for (x = 0; x < SIZE; x++)
 cout << array[x] << " ";
 cout << endl;
 quickSort(array, 0, SIZE - 1);
 for (x = 0; x < SIZE; x++)
 cout << array[x] << " ";
 cout << endl;
 return 0;
 }
void quickSort(int set[], int start, int end)
{
int pivotPoint;
if (start < end)
{
// Get the pivot point.
pivotPoint = partition(set, start, end);
// Sort the first sub list.
quickSort(set, start, pivotPoint - 1);
// Sort the second sub list.
quickSort(set, pivotPoint + 1, end);
}
}
int partition(int set[], int start, int end)
{
int pivotValue, pivotIndex, mid;
mid = (start + end) / 2;
swap(set[start], set[mid]);
pivotIndex = start;
pivotValue = set[start];
for (int scan = start + 1; scan <= end; scan++)
{
if (set[scan] < pivotValue)
{
pivotIndex++;
swap(set[pivotIndex], set[scan]);
}
}
swap(set[start], set[pivotIndex]);
return pivotIndex;
}
