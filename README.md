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
 is picked and moved to the sorted subarray. 

<p>Pseudocode for selection sort:</p>
<pre>
procedure selection sort 
   list  : array of items
   n     : size of list
   for i = 1 to n - 1
   
   // set current element as minimum 
      min = i    
      /* check the element to be minimum */

      for j = i+1 to n 
         if list[j] < list[min] then
            min = j;
         end if
      end for
      /* swap the minimum element with the current element*/
      if indexMin != i  then
         swap list[min] and list[i]
	
	end if
      end for
end procedure

</pre>
