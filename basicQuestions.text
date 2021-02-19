/*
Question #1
If pre-order traversal order of tree is:
17, 13, 9, 11, 15, 19, 23, 21
What will be the post order traversal?

Answer:
In pre-order traversal, we traverse in the order given below,
Order: root , left , right
          RootNode
		  /		 \
		 /		  \
	LeftNode	 RightNode

Therefore, 17 is root node, And rest of numbers less than 17 comes under left node, numbers greater than 17 will be right node.

				17
			   /  \
			  /    \
			 /      \
 13, 9, 11, 15		19, 23, 21

Repeat same method for (13, 9, 11, 15) and (19, 23, 21). And bind these trees to their parent in their respective position

				17
			   /  \
			  /    \
			13		19
		   /  \		  \
		  /	   \	   \
		 9		15		23
		  \				/
		   \		   /
			11		  21

Now, We have generate the Binary Tree.

To find post order traversal.
we traverse in the order given below,
Order: left , right , root

          RootNode
		  /		 \
		 /		  \
	LeftNode	 RightNode

11
11, 9
11, 9, 15
11, 9, 15, 13
11, 9, 15, 13, 21
11, 9, 15, 13, 21, 23
11, 9, 15, 13, 21, 23, 19
11, 9, 15, 13, 21, 23, 19, 17

Correct Post order traversal:
11, 9, 15, 13, 21, 23, 19, 17


---------------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------------

Question #2
Consider the following Array:
55, 40, 45, 48, 10, 46, 15
These are inserted into a max heap one by one. The resultant Max heap will be:

Answer:
Heap:
A Binary Heap is a Binary Tree with following properties.
1.	It’s a binary complete tree (All levels are completely filled except possibly the last level and the last level has all keys as left as possible).
	This property of Binary Heap makes them suitable to be stored in an array.
	
2.	Binary Heap is of two types:
		i.	Min Heap
			In a Min Binary Heap, the key at root must be MINIMUM among all keys present in Binary Heap.
			The same property must be recursively true for all nodes in Binary Tree.
			
		ii.	Max Heap
			Max Binary Heap is similar to MinHeap.
			the key at root must be MAXIMUN among all keys present in Binary Heap.

		Root
		55			Add 40			55			Add 45			55				Add 48				55			Swap				55
					===>		   /			===>		   /  \				===>			   /  \			===>			   /  \
								 40							 40	   45							 40	   45						 48	   45
																								/								/
																							  48							  40


Add 10			55			Add 46					55				Swap				55				Add 15				55
===>		   /  \			===>				  /	    \			===>			  /	    \			===>			  /		\
			 48	   45						   48		   45					   48		   46					    48		  46
			/  \							  /  \		  /						  /  \		  /						   /  \		 /  \
		  40	10							40	  10	46						40	  10	45						 40    10  45	 10

		  																											Required Max Heap Tree


---------------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------------


















*/
