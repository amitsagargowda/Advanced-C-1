**bubble_sort** - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/DSA/sort/bubble_sort.c">code</a>

		It is a simple algorithm which is used to sort a given set of n elements provided in form of an 
		array with 'n' no. of elements. It compares all the elements one by one and sort them based on their 
		values.
		In bubble sort, if there are 'n' no. of elements are there, then there will be 'n-1' iterations. And 
		for every sorting operations there will be adjacent elements will be compared in a proper way.

				   n	4    5    1    2    3	=> elements
	                              ------------------------
			           a   [0]  [1]  [2]  [3]  [4]	=> array

		1st iteration : 0-1, 1-2, 2-3, 3-4
		2nd iteration : 0-1, 1-2, 2-3
		3rd iteration : 0-1, 1-2
		4th iteration : 0-1

**bubble_sort_user_input.c** - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/DSA/sort/bubble_sort_user_input.c">code</a> 

		[ Refer the previous example ]
		Compare the first element with the remaining elements in the list and exchange(swap) them if they are not in order.
		Repeat the same for other elements in the list until all the elements gets sorted.

**selection_sort.c** - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/DSA/sort/selection_sort.c">code</a>

		The selection sort algorithm sorts an array by repeatedly finding the minimum element from unsorted part and 
		putting it at the beginning. The algorithm maintains two subarrays in a given array.
			1) The subarray which is already sorted. 
			2) Remaining subarray which is unsorted.
		In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray 
		is picked and moved to the sorted subarray. 

		In selection sort, if there are 'n' no. of elements are there, then there will be 'n-1' iterations.
		                                                                                                  
                                     n  4    5    1    2    3   => elements    
                                       ------------------------      
                                     a [0]  [1]  [2]  [3]  [4]  => array    
 
                1st iteration : 0-1, 0-2, 0-3, 0-4    
                2nd iteration : 1-1, 1-3, 1-4 
                3rd iteration : 2-3, 2-4 
                4th iteration : 3-4

**insertion_sort.c** - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/DSA/sort/insertion_sort.c">code</a>    

		Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
		The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed
		at the correct position in the sorted part.

		If we have the array as {40,10,50,70,30}
		and we apply insertion sort to sort the array,
		then the resultant array after each iteration will be as follows:

               			Original array : 40  10  50  70  30

		Array after first iteration is     10 ->  40    ->  50   ->   70   ->   30
		Array after second iteration is    10 ->  40    ->  50   ->   70   ->   30
		Array after third iteration is     10 ->  40    ->  50   ->   70   ->   30
		Array after fourth iteration is    10 ->  30    ->  40   ->   50   ->   70
            
               			Sorted array :  10  30  40  50  70
		[ The worst case for time complexity is O(n^2) and space complexity is O(1) ]

**merge_sort.c** - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/DSA/sort/merge_sort.c">code</a>  
