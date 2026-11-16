# DSA Searching and Sorting

A C++ console program that lets you enter an array of numbers, sort it with one of three algorithms, and then search for a target value using both linear and binary search.

**Course:** Data Structures and Algorithms
**Author:** Nuha Samson
**ID:** UGR/40407/18

---

## Features

- **Three sorting algorithms**
  - Bubble sort
  - Selection sort
  - Insertion sort
- **Two searching algorithms**
  - Linear search (works on any array)
  - Binary search (works on the sorted array)
- **Input validation**
  - Rejects non-numeric input
  - Rejects negative array sizes
  - Handles empty arrays gracefully
- **Retry on failed search**
  - If a target is not found, the user can try another number or stop searching
- **Menu system**
  - Try another input
  - Use the same input with a different sorting algorithm
  - Search the same sorted array again
  - Exit

---

## How to Compile and Run

### Using g++

```bash
g++ -std=c++11 -o dsa main.cpp
./dsa
```

### Using an IDE

1. Open the project in Code::Blocks, Visual Studio, or CLion.
2. Build and run.

---

## Usage

1. Enter how many numbers you want.
2. Enter the numbers one by one.
3. Choose a sorting algorithm (1–3).
4. Enter a number to search for.
5. If the number is not found, choose to try again or stop.
6. Pick the next action from the main menu.

---

## Algorithms

### Searching

| Algorithm      | Best | Average | Worst  | Requires sorted? |
|----------------|------|---------|--------|------------------|
| Linear search  | O(1) | O(n)    | O(n)   | No               |
| Binary search  | O(1) | O(log n)| O(log n)| Yes             |

### Sorting

| Algorithm      | Best | Average | Worst  | Stable? |
|----------------|------|---------|--------|---------|
| Bubble sort    | O(n) | O(n²)   | O(n²)  | Yes     |
| Selection sort | O(n²)| O(n²)   | O(n²)  | No      |
| Insertion sort | O(n) | O(n²)   | O(n²)  | Yes     |

---

## Project Structure

```
dsa-searching-and-sorting/
├── main.cpp
└── README.md
```

---

## License

This project was created for academic purposes.
