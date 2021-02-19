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


*/
