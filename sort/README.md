**bubble_sort.c** - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/sort/bubble_sort.c">code</a>

		It is a simple algorithm which is used to sort a given set of n elements provided in form of an 
		array with 'n' no. of elements. It compares all the elements one by one and sort them based on their 
		values.
		In bubble sort, if there are 'n' no. of elements are there, then there will be 'n-1' iterations. And 
		for every sorting operations there will be adjacent elements will be compared in a proper way.

					4    5    1    2    3	=> elements
	                              ------------------------
			               [0]  [1]  [2]  [3]  [4]	=> array

		1st iteration : 0-1, 1-2, 2-3, 3-4
		2nd iteration : 0-1, 1-2, 2-3
		3rd iteration : 0-1, 1-2
		4th iteration : 0-1

**bubble_sort_user_input.c** - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/sort/bubble_sort_user_input.c">code</a> 

		[ Refer the previous example ]
		Compare the first element with the remaining elements in the list and exchange(swap) them if they are not in order.
		Repeat the same for other elements in the list until all the elements gets sorted.

**selection_sort.c** - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/sort/selection_sort.c">code</a>

		The selection sort algorithm sorts an array by repeatedly finding the minimum element from unsorted part and 
		putting it at the beginning. The algorithm maintains two subarrays in a given array.
			1) The subarray which is already sorted. 
			2) Remaining subarray which is unsorted.
		In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray 
		is picked and moved to the sorted subarray. 

		In selection sort, if there are 'n' no. of elements are there, then there will be 'n-1' iterations.
		                                                                                                  
                                         4    5    1    2    3   => elements    
                                       ------------------------      
                                        [0]  [1]  [2]  [3]  [4]  => array    
 
                1st iteration : 0-1, 0-2, 0-3, 0-4    
                2nd iteration : 1-1, 1-3, 1-4 
                3rd iteration : 2-3, 2-4 
                4th iteration : 3-4   
