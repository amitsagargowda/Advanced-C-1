/* This program implements the working of binary search tree
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 06.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */

/* binary search tree */
typedef struct bstnode
{
	int data_item;
	struct bstnode *left;
	struct bstnode *right;
}*BSTNodePtr;

typedef struct bst
{
	BSTNodePtr root;
}BST;

/* insert the elemets in the tree */
BSTNodePtr insert_bst_node(BSTNodePtr self, int n)
{
	if(self == NULL)
	{
		self = malloc(sizeof *self);
		self -> data_item = n;
		self -> left = self -> right = NULL;
	}

	else if(n < self -> data_item)
		self -> left = insert_bst_node(self->left,n);	/* insert left to the subtree */
	else if(n > self -> data_item)
		self -> right = insert_bst_node(self->right,n);	/* insert right to the subtree */

	return self;
}

/* insert node in the tree */
void insert_node(BST *self, int n)
{
	self -> root = insert_bst_node(self->root, n);
}

/* to find the minimum node */
BSTNodePtr min_node(BSTNodePtr self)
{
	BSTNodePtr current = self;
	while(current -> left)
		current = current -> left;
	return current;
}

/* delete the element in the tree */
BSTNodePtr delete_bst_node(BSTNodePtr self, int n)
{
	if(self != NULL)
	{
		if(n == self->data_item)
		{
			if(self->left != NULL && self->right != NULL)
			{
				BSTNodePtr successor = min_node(self->right);
				self -> data_item = successor -> data_item;
				self -> right = delete_bst_node(self->right, self->data_item);
			}

			else
			{
				BSTNodePtr to_free = self;
				if(self -> left)
					self = self->left;
				else
					self = self->right;
				free(to_free);
			}
		}
		
		else if(n < self->data_item)
			self->left =delete_bst_node(self->left,n);
		else
			self->right = delete_bst_node(self->right,n);
	}
	return self;
}

void delete_bst(BST *self, int n) 
{
	self->root = delete_bst_node(self->root, n);
}

/* prints as root,left,right  */
void preorder(BSTNodePtr self)
{
	if(self != NULL)
	{
		printf("%d ",self->data_item);
		preorder(self->left);
		preorder(self->right);
	}
}

/*prints as left,root,right */
void inorder(BSTNodePtr self)
{
	if(self != NULL)
	{
		inorder(self->left);
		printf("%d ",self->data_item);
		inorder(self->right);
	}
}

/*prints as left,right,root */
void postorder(BSTNodePtr self)
{
	if(self != NULL)
	{
		postorder(self->left);
		postorder(self->right);
		printf("%d ",self->data_item);
	}
}

/* main program */
int main()
{
	BST self;
	self.root = NULL;
	int arr[] = {3,1,2,8,5,4,7,9,11,12}, i;
	for(i=0; i<10; i++)
		insert_bst(&self,arr[i]);
	delete_bst(&self,11);
	preorder(self.root);
	printf("\n");
	inorder(self.root);
	printf("\n");
	postorder(self.root);
	printf("\n");

	return 0;
}
