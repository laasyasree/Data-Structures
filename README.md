# Data-Structures

## Bubble sort

    It is the simplest algorithm that compares the adjacent elements and swaps their position if they are not in the correct order.
    
### How Bubble Sort Works?

   1) Starting from the first index, compare the first and the second elements.
   
      If the first element is greater than the second element, they are swapped.
      
      Now, compare the second and the third elements. Swap them if they are not in order. 
      
      The above process goes on until the last element.
      
    2) The same process goes on for the remaining iterations. 
    
       After each iteration, the largest element among the unsorted elements is placed at the end.
       
       In each iteration, the comparison takes place up to the last unsorted element.
       
       The array is sorted when all the unsorted elements are placed at their correct positions.

## Cycle Sort

  Cycle sort is an in-place, unstable sorting algorithm.
  
  It is based on the idea that the permutation to be sorted can be factored into cycles, which can individually be rotated to give a sorted result.
  
  ### Algorithm

      1) Consider an array of n distinct elements.

      2) An element a is given, index of a can be calculated by counting the number of elements that are smaller than a.

      3) If the element is found to be at its correct position, simply leave it as it is.
      
      4) Otherwise, find the correct position of a by counting the total number of elements that are less than a. where it must be present in the sorted array. 
      
      5) The other element b which is replaced is to be moved to its correct position. 
      
      6) This process continues until we got an element at the original position of a.

  
## Heap Sort
  
  ###  Procedures to follow for Heapsort
  
    Convert the binary tree into a Max Heap.

    Since the tree satisfies Max-Heap property, then the largest item is stored at the root node.
    
    Remove the root element and put at the end of the array (nth position) Put the last item of the tree (heap) at the vacant place.
    
    Reduce the size of the heap by 1 and heapify the root element again so that we have highest element at root.
    
    The process is repeated until all the items of the list is sorted.
    
## Merge Sort

  Merge Sort is a kind of Divide and Conquer algorithm in computer programrming. 
  
  It is one of the most popular sorting algorithms and a great way to develop confidence in building recursive algorithms.
  
  l = left index
  
  r = right index

If r > l

     1. Find the middle point to divide the array into two halves:  
     
             middle m = (l+r)/2
             
     2. Call mergeSort for first half:   
     
             Call mergeSort(arr, l, m)
             
     3. Call mergeSort for second half:
     
             Call mergeSort(arr, m+1, r)
             
     4. Merge the two halves sorted in step 2 and 3:
     
             Call merge(arr, l, m, r)
             
## Odd-Even Sort

  Odd Even Sort uses parallel algorithm which is based on bubble sort technique.
  
  It is also known as Brick Sort.
  
  1) It compares two adjacent numbers and switches them, if the first number is greater than the second number to get an ascending order list.
  
  2) The opposite case applies for a descending order series.
  
  3) Odd-Even transposition sort operates in two phases − odd phase and even phase.
  
  4) In both the phases, processes exchange numbers with their adjacent number in the right.
  
## Quick Sort

The key process in quickSort is partition(). 

Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array. 

Put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. 

All this should be done in linear time.

### The logic is simple:

1) We start from the leftmost element and keep track of index of smaller (or equal to) elements as i.

2) While traversing, if we find a smaller element, we swap current element with arr[i]. 

3) Otherwise we ignore current element.

## Selection Sort

Selection sort is an algorithm that selects the smallest element from an unsorted list in each iteration.

Places that element at the beginning of the unsorted list.

### How Selection Sort Works?

    1) Set the first element as minimum.
    
    2) Compare minimum with the second element. If the second element is smaller than minimum, assign second element as minimum.

       Compare minimum with the third element. 
       
       Again, if the third element is smaller, then assign minimum to the third element otherwise do nothing. 
       
       The process goes on until the last element.
       
    3) After each iteration, minimum is placed in the front of the unsorted list.
    
    4) For each iteration, indexing starts from the first unsorted element. Step 1 to 3 are repeated until all the elements are placed at their correct positions.

    





  
  
