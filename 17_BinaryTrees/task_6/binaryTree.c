#include "task_6.h"
/* This function merges two balanced BSTs with roots as root1 and root2.
m and n are the sizes of the trees respectively */
struct node* mergeTrees(struct node *root1, struct node *root2, int m, int n)
{
	// Store inorder traversal of first tree in an array arr1[]
	int *arr1 = malloc(sizeof(int) * m);
	int i = 0;
	storeInorder(root1, arr1, &i);

	// Store inorder traversal of second tree in another array arr2[]
	int *arr2 = malloc(sizeof(int) * n);
	int j = 0;
	storeInorder(root2, arr2, &j);

	// Merge the two sorted array into one
	int *mergedArr = merge(arr1, arr2, m, n);

	// Construct a tree from the merged array and return root of the tree
	return sortedArrayToBST (mergedArr, 0, m+n-1);
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(int data)
{
	struct node* node = (struct node*)
						malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return(node);
}

// A utility function to print inorder traversal of a given binary tree
void printInorder(struct node* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder(node->left);

	printf("%d ", node->data);

	/* now recur on right child */
	printInorder(node->right);
}

// A utility function to merge two sorted arrays into one
int *merge(int arr1[], int arr2[], int m, int n)
{
	// mergedArr[] is going to contain result
	int *mergedArr = malloc(sizeof(int) * (m + n));
	int i = 0, j = 0, k = 0;

	// Traverse through both arrays
	while (i < m && j < n)
	{
		// Pick the smaller element and put it in mergedArr
		if (arr1[i] < arr2[j])
		{
			mergedArr[k] = arr1[i];
			i++;
		}
		else
		{
			mergedArr[k] = arr2[j];
			j++;
		}
		k++;
	}

	// If there are more elements in first array
	while (i < m)
	{
		mergedArr[k] = arr1[i];
		i++; k++;
	}

	// If there are more elements in second array
	while (j < n)
	{
		mergedArr[k] = arr2[j];
		j++; k++;
	}

	return mergedArr;
}

// A helper function that stores inorder traversal of a tree rooted with node
void storeInorder(struct node* node, int inorder[], int *index_ptr)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	storeInorder(node->left, inorder, index_ptr);

	inorder[*index_ptr] = node->data;
	(*index_ptr)++; // increase index for next entry

	/* now recur on right child */
	storeInorder(node->right, inorder, index_ptr);
}

/* A function that constructs Balanced Binary Search Tree from a sorted array */
struct node* sortedArrayToBST(int arr[], int start, int end)
{
	/* Base Case */
	if (start > end)
	return NULL;

	/* Get the middle element and make it root */
	int mid = (start + end)/2;
	struct node *root = newNode(arr[mid]);

	/* Recursively construct the left subtree and make it
	left child of root */
	root->left = sortedArrayToBST(arr, start, mid-1);

	/* Recursively construct the right subtree and make it
	right child of root */
	root->right = sortedArrayToBST(arr, mid+1, end);

	return root;
}
