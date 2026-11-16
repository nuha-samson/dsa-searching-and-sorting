
/*
  Data Structures and Algorithms - Assignment
  Name : Nuha Samson
  ID   : UGR/40407/18
*/
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Print the array
void printArray(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Linear search
int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

// Binary search (array should be sorted first)
int binarySearch(const vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

// Bubble sort
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swaping
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

// Selection sort
void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        // stores the most minium number
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        if (min != i)
        {
            
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

// Insertion sort
void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Read integer input
int readInt(const string &msg)
{
    int num;
    cout << msg;

    while (!(cin >> num))
    {
        cout << "Invalid input. Please enter a whole number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return num;
}

int main()
{
    int n = readInt("How many numbers do you want to enter? ");

    while (n < 0)
    {
        n = readInt("Size cannot be negative. Enter again: ");
    }

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        arr.push_back(readInt("Enter number " + to_string(i + 1) + ": "));
    }

    // Check if the array is empty
    if (arr.empty())
    {
        cout << "The array is empty, so there is nothing to sort or search." << endl;
        return 0;
    }

    // Choose sorting method
    cout << "\nChoose a sorting algorithm:\n";
    cout << "1. Bubble sort\n";
    cout << "2. Selection sort\n";
    cout << "3. Insertion sort\n";

    int choice = readInt("Your choice: ");

    while (choice < 1 || choice > 3)
    {
        choice = readInt("Invalid choice. Enter 1, 2 or 3: ");
    }

    if (choice == 1)
        bubbleSort(arr);
    else if (choice == 2)
        selectionSort(arr);
    else
        insertionSort(arr);

    cout << "\nSorted array: ";
    printArray(arr);

    // Search for a number
    int target = readInt("\nEnter a number to search for: ");

    int linear = linearSearch(arr, target);
    int binary = binarySearch(arr, target);

    if (linear == -1)
    {
        cout << target << " was not found in the array." << endl;
    }
    else
    {
        cout << "Linear search : found at index " << linear << endl;
        cout << "Binary search : found at index " << binary << endl;
        cout << "(With duplicate values, the two searches may return different indexes.)" << endl;
    }

    return 0;
}
