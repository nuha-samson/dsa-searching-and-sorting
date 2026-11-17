# DSA Searching and Sorting

I created a program that shows how three different sorting algorithms and two searching algorithms work. Basically, the user puts in some numbers, picks a sorting method, and then the program searches for a specific value using linear and binary search.

## 1. How it works

The program basically does this:

1. Asks for the number of elements and the actual values.
2. Asks the user to pick a sorting algorithm.
3. Sorts the array (ascending).
4. Prints the sorted array.
5. Asks for a target number to search for.
6. Runs both linear and binary search.
7. Shows the index where the number was found (starting from 0).

### Example

```text
How many numbers do you want to enter? 5

Enter number 1: 8
Enter number 2: 3
Enter number 3: 12
Enter number 4: 1
Enter number 5: 6

Choose a sorting algorithm:
1. Bubble sort
2. Selection sort
3. Insertion sort

Your choice: 1

Sorted array: 1 3 6 8 12

Enter a number to search for: 6

Linear search : found at index 2
Binary search : found at index 2
```

## 2. Input Validation and Errors

I added some checks to make sure the program doesn't crash:

- **Non-integers:** If the user types a letter or symbol instead of a number, the program clears the error and asks them to try again.
- **Negative size:** If the user enters a negative number for the array size, it tells them it's invalid.
- **Empty array:** If the size is 0, the program just ends since there's nothing to sort.
- **Wrong choice:** If the user picks something other than 1, 2, or 3 for sorting, it asks them again.
- **Not found:** If the number isn't in the array, it returns `-1` and says it wasn't found.
- **Duplicates:** The program handles duplicate numbers. Just keep in mind that linear and binary search might return different indexes if the number appears more than once.
- **Binary search rule:** The program makes sure the array is sorted first, otherwise binary search wouldn't work.

## 3. Algorithms Used

### Sorting
- **Bubble Sort:** Keeps swapping adjacent elements until they are in order.
- **Selection Sort:** Finds the smallest number and moves it to the front.
- **Insertion Sort:** Builds the sorted list one element at a time.

### Searching
- **Linear Search:** Just goes through the array one by one until it finds the target.
- **Binary Search:** Splits the sorted array in half repeatedly to find the target faster.

## 4. Time and Space Complexity

### Searching

| Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Linear Search | O(1) | O(n) | O(n) |
| Binary Search | O(1) | O(log n) | O(log n) |

### Sorting

| Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Bubble Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |

**Space Complexity:** Everything here uses O(1) auxiliary space because the sorting is done in-place.

