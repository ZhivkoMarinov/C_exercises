// Задача 5. Да се напише рекурсивен вариант на функцията за обхождане на
// двоично дърво.

// ??? Не проумявам условието. Пускам preOrder, inOrder и postOrder

#include "task_5.h"

int main() {
    
    node *root = createNode(5);
    root->left = createNode(7);
    root->right = createNode(9);
    root->left->left = createNode(2);
    root->left->right = createNode(8);
    root->right->left = createNode(6);
    root->right->right = createNode(10);

    inorderTraversal(root);
    printf("\n");
    preorderTraversal(root);
    printf("\n");
    postorderTraversal(root);
    printf("\n");
    
    return 0;
}