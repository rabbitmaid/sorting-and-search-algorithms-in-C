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

#### 4. Merge Sort (`mergesort.c`)

Merge Sort is a divide-and-conquer algorithm that divides the array into halves, recursively sorts them, and then merges the sorted halves back together.

- **Time Complexity**: O(n log n)
- **Space Complexity**: O(n)

### Search Algorithms

#### 1. Linear Search (`linearsearch.c`)

Linear Search is a simple search algorithm that sequentially checks each element in the array until the target element is found or the end of the array is reached.

- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- **Best for**: Unsorted arrays or small datasets

#### 2. Binary Search (`binarysearch.c`)

Binary Search is a more efficient search algorithm that works on sorted arrays. It repeatedly divides the search interval in half, comparing the middle element with the target to eliminate half of the remaining elements.

- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)
- **Requirement**: Array must be sorted

## Project Structure

- `bubblesort.c` - Bubble sort algorithm with main function
- `selection.c` - Selection sort algorithm with main function
- `insertion.c` - Insertion sort algorithm with main function
- `mergesort.c` - Merge sort algorithm with main function
- `linearsearch.c` - Linear search algorithm with main function
- `binarysearch.c` - Binary search algorithm with main function
- `pseudocode/` - Directory containing pseudocode for algorithms
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

### Compile Merge Sort

```bash
gcc mergesort.c -o mergesort.exe
./mergesort.exe
```

### Compile Linear Search

```bash
gcc linearsearch.c -o linearsearch.exe
./linearsearch.exe
```

### Compile Binary Search

```bash
gcc binarysearch.c -o binarysearch.exe
./binarysearch.exe
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
