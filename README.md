# Sorting and Search Algorithms in C

A collection of sorting and search algorithm implementations written in C.

## Project Overview

This project demonstrates implementations of common sorting and search algorithms with practical examples. Each algorithm is designed to work with arrays of integers.

## Algorithms Included

### Sorting Algorithms

#### 1. Bubble Sort (`bubblesort.c`)

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process continues until the list is sorted.

- **Time Complexity**: O(n²)
- **Space Complexity**: O(1)

#### 2. Selection Sort (`selection.c`)

Selection Sort works by dividing the array into a sorted and unsorted region. It repeatedly finds the minimum element from the unsorted region and places it at the beginning.

- **Time Complexity**: O(n²)
- **Space Complexity**: O(1)

#### 3. Insertion Sort (`insertion.c`)

Insertion Sort builds the sorted array one item at a time. It iterates through an input array, and for each element, finds the position it belongs in and inserts it there.

- **Time Complexity**: O(n²)
- **Space Complexity**: O(1)

### Search Algorithms

Coming soon...

## Project Structure

- `bubblesort.c` - Bubble sort algorithm with main function
- `selection.c` - Selection sort algorithm with main function
- `insertion.c` - Insertion sort algorithm with main function
- `README.md` - This file

## How to Compile and Run

### Compile Bubble Sort

```bash
gcc bubblesort.c -o bubblesort.exe
./bubblesort.exe
```

### Compile Selection Sort

```bash
gcc selection.c -o selection.exe
./selection.exe
```

### Compile Insertion Sort

```bash
gcc insertion.c -o insertion.exe
./insertion.exe
```

## Example Output

- Before sorting: 7 1 3 9 0 2 4 5 8 6
- After sorting: 0 1 2 3 4 5 6 7 8 9

## Requirements

- GCC or any C compiler
- Windows/Linux/Mac operating system
- Or just the Code::Blocks IDE

## Author

Created as an educational project to understand sorting algorithms.
