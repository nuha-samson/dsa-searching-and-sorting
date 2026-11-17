# DSA Searching and Sorting

A C++ console application demonstrating three sorting algorithms and two searching algorithms. The program accepts user input, sorts the array using a selected algorithm, and searches for a target value using both linear and binary search
### 1. Sorting Algorithms

The program implements three comparison-based sorting algorithms:

- **Bubble Sort:** Repeatedly compares adjacent elements and swaps them when they are in the wrong order.
- **Selection Sort:** Finds the smallest element in the unsorted portion and places it in its correct position.
- **Insertion Sort:** Builds a sorted portion of the array by inserting each element into its appropriate position.

### 2. Searching Algorithms

- **Linear Search:** Checks elements sequentially until the target is found or the array ends.
- **Binary Search:** Repeatedly divides the search interval in half to locate the target. It requires a sorted array.

## Time and Space Complexity

### Searching Algorithms

| Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Linear Search | O(1) | O(n) | O(n) |
| Binary Search | O(1) | O(log n) | O(log n) |

### Sorting Algorithms

| Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Bubble Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |

**Space Complexity:** All three sorting algorithms are implemented in-place and use O(1) auxiliary space. Both searching algorithms also use O(1) auxiliary space.

## Program Features

- Accepts an array of integers from the user.
- Allows the user to select one of three sorting algorithms.
- Displays the sorted array.
- Searches for a target using both linear and binary search.
- Validates integer input and rejects negative array sizes.
- Handles empty arrays without attempting to sort or search them.
- Reports the index of a found element or indicates when the target is absent.

## Example Execution

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

*Note: Array indexing starts from zero.*

---

*Developed as part of the Data Structures and Algorithms cour
