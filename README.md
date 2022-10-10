<h1>C - Sorting algorithms & Big O</h1>

<h2>Big O Notation</h2>
<p>Big Oh notation is a relative representation of the complexity of an algorithm.
A method of solving problems is called an <b>algorithm</b>. BigOh (in its simplest form)
 reduces the comparison between algorithms to a single variable. That variable is chosen
 based on observations or assumptions.</p>

<p>Big O Notation gives the upper-bound runtime or worst-case complexity of an algorithm.
 It analyzes and classifies algorithms depending on their run time or space requirements.

Time complexity refers to the amount of time an algorithm takes to run when the input tends
 towards a specific or limiting value. It calculates the time taken to execute each code 
statement in an algorithm.

Big O Notation is a tool used to describe the time complexity of algorithms. It calculates 
the time taken to run an algorithm as the input grows. In other words, it calculates the 
worst-case time complexity of an algorithm. 

Big O Notation in Data Structure describes the upper bound of an algorithm's runtime. It 
calculates the time and amount of memory needed to execute the algorithm for an input value.</p>

<h2>Sorting Algorithms</h2>
<p>A sorting algorithm is an algorithm that puts elements of a list into an order. It is used to
 rearrange a given array or list of elements according to a comparison operator on the elements.
 The comparison operator is used to decide the new order of elements in the respective data structure.</p>

<h3>1. Bubble Sort</h3>
<p>Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps 
through the input list element by element, comparing the current element with the one after it, swapping 
their values if needed. These passes through the list are repeated until no swaps had to be performed during 
a pass, meaning that the list has become fully sorted. The algorithm, which is a comparison sort, is named 
for the way the larger elements "bubble" up to the top of the list.</p>

<p>Bubble sort has a worst-case and average complexity of <b>O(n^2)</b>. This makes it a slow algorithm compared
to other sorting algorithms. Below is a pseudocode implementation of the algorithm.</p>

<pre>
procedure bubbleSort(A : list of sortable items)
    n := length(A)
    repeat
        swapped := false
        for i := 1 to n-1 inclusive do
            /* if this pair is out of order */
            if A[i-1] > A[i] then
                /* swap them and remember something changed */
                swap(A[i-1], A[i])
                swapped := true
            end if
        end for
    until not swapped
end procedure
</pre>

<h3>2. Selection Sort</h3>
<p>The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order)
 from the unsorted part and putting it at the beginning. 

The algorithm maintains two subarrays in a given array.

	1.The subarray which already sorted. 
	2.The remaining subarray was unsorted.

In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray
 is picked and moved to the sorted subarray.  The time complexity of Selection Sort is <b>O(n^2)</b> as there are two nested loops.
</p>

<pre>
selectionSort(array, size)
  repeat (size - 1) times
  	set the first unsorted element as the minimum
  	for each of the unsorted elements
    		if element < currentMinimum
      			set element as new minimum
  	swap minimum with first unsorted position
end selectionSort
</pre>

<h3>3. Insertion Sort</h3>
<p>Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time by comparisons. 
Insertion sort iterates, consuming one input element each repetition, and grows a sorted output list. At each iteration, insertion
 sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there. It 
repeats until no input elements remain.

Sorting is typically done in-place, by iterating up the array, growing the sorted list behind it. At each array-position, it checks
 the value there against the largest value in the sorted list (which happens to be next to it, in the previous array-position checked).
 If larger, it leaves the element in place and moves to the next. If smaller, it finds the correct position within the sorted list, 
shifts all the larger values up to make a space, and inserts into that correct position.</h3>

<p>Pseudocode of the complete algorithm follows, where arrays are zero-based:</p>
<pre>
i ← 1
while i < length(A)
    j ← i
    while j > 0 and A[j-1] > A[j]
        swap A[j] and A[j-1]
        j ← j - 1
    end while
    i ← i + 1
end while
</pre>
