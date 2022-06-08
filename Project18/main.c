#include <stdio.h>
#include "BST.h"

void main() {
	BST bst;
	BST *pbst= &bst;
	int N =7;
	initBST(&bst);
	insertBST(&bst,4);
	insertBST(&bst, 7);
	insertBST(&bst, 3);
	insertBST(&bst, 5);
	insertBST(&bst, 9);
	printTreeInorder(&bst);
	int element= findIndexNFromLast(&bst, N);
	printf("the element is:%d", element);
	int num= sameHeightLeaves(&bst);
	if (num = 0) {
		printf("the number of leaves is different");
	}
	else
		printf("the number of leaves is the same");

	printTreeInorder(pbst);
	destroyBST(pbst);
}