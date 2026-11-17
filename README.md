# DSA Searching and Sorting

This is Program I created shows how three different sorting algorithms and two searching algorithms work. The user can put in their own numbers, pick a sorting method, and then search for a specific value using linear and binary search.

### 1. Sorting Algorithms

I used these three sorting methods in the program:

- **Bubble Sort:** Basically just compares two numbers next to each other and swaps them if they're in the wrong order.
- **Selection Sort:** Looks for the smallest number in the unsorted part and moves it to the front.
- **Insertion Sort:** Builds the sorted list one element at a time by putting each number in its right spot.

### 2. Searching Algorithms

- **Linear Search:** Just goes through the list one by one until it finds the number or hits the end.
- **Binary Search:** Keeps splitting the search area in half to find the target faster. (Note: the array has to be sorted for this to work).

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

**Space Complexity:** All the sorting algorithms are done in-place, so they use O(1) extra space. The searching algorithms also use O(1).

## Program Features

- Lets the user enter an array of integers.
- User can pick which sorting algorithm to use.
- Prints the sorted array to the screen.
- Searches for a target value using both search methods.
- Checks that the input is actually an integer and makes sure the array size isn't negative.
- Won't crash if the array is empty.
- Tells you the index of the number if it's found, or says it's not there.
## Input Validation and Error Handling

The program accounts for the following invalid inputs and edge cases:

- **Non-integer input:** Detects invalid input when reading array size, array elements, sorting choices, or the search target. Clears the input error state and ignores the remaining invalid input before prompting again.
- **Negative array size:** Rejects negative values and asks the user to enter a valid size.
- **Empty array:** Detects when the array size is zero and terminates gracefully without attempting sorting or searching.
- **Invalid sorting choice:** Rejects choices outside the available range (1–3) and prompts the user again.
- **Unsuccessful search:** Returns `-1` when the target is not present in the array and displays an appropriate message instead of accessing an invalid index.
- **Duplicate elements:** Handles repeated values correctly. Linear and binary search may return different valid indexes when duplicates exist.
- **Binary search prerequisite:** Ensures binary search is performed only after the selected sorting algorithm has arranged the array in ascending order.

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


---

*Developed as part of the Data Structures and Algorithms course*
