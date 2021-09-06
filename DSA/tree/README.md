**binary_search_tree.c**

		Binary Search tree can be defined as a class of binary trees, in which the nodes are arranged in a 
		specific order. This is also called ordered binary tree.
	
		In a binary search tree, the value of all the nodes in the left sub-tree is less than the value of 
		the root.

		Similarly, value of all the nodes in the right sub-tree is greater than or equal to the value of 
		the root.This rule will be recursively applied to all the left and right sub-trees of the root.


**avl_tree.c**

		AVL Tree is invented by GM Adelson - Velsky and EM Landis in 1962. The tree is named AVL in honour 
		of its inventors.

		AVL Tree can be defined as height balanced binary search tree in which each node is associated with
		a balance factor which is calculated by subtracting the height of its right sub-tree from that of 
		its left sub-tree.

		Tree is said to be balanced if balance factor of each node is in between -1 to 1, otherwise, 
		the tree will be unbalanced and need to be balanced.

				Balance Factor (k) = height (left(k)) - height (right(k))

		If balance factor of any node is 1, it means that the left sub-tree is one level higher than the 
		right sub-tree.

		If balance factor of any node is 0, it means that the left sub-tree and right sub-tree contain equal
		height.

		If balance factor of any node is -1, it means that the left sub-tree is one level lower than the 
		right sub-tree.
