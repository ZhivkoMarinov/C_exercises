#include "task_6.h"

int main()
{

	struct node *root1 = newNode(100);
	root1->left		 = newNode(50);
	root1->right	 = newNode(300);
	root1->left->left = newNode(20);
	root1->left->right = newNode(70);

	struct node *root2 = newNode(80);
	root2->left		 = newNode(40);
	root2->right	 = newNode(120);

	struct node *mergedTree = mergeTrees(root1, root2, 5, 3);

	printf ("Following is Inorder traversal of the merged tree \n");
	printInorder(mergedTree);

	return 0;
}