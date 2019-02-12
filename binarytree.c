#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <assert.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} ListNode;

typedef struct BinaryNode
{
    int data;
    struct BinaryNode *left;
    struct BinaryNode *right;
} BinaryNode;

void add(int data);
int seek(int data); // true 1 or false 0 if item exists in tree

void test_tree()
{
    add(5);
    assert(seek(5) == 1 && "tree contains the number 5"); // modify the true to use seek

    add(3);
    add(4);
    assert(seek(9) == 0 && "tree does not contain 9");
    // assert(true); // modify the true to use seek
}

// Initialize root node to NULL
//BinaryNode* root = NULL;

int main(void)
{
    printf("Hello\n");

    // int data[] = {5, 8, 2, 9, 4, 1, 3};
    test_tree();


    root = (struct BinaryNode*)malloc(sizeof(struct BinaryNode));

    // Initialize left and right child nodes to NULL
    // BinaryNode->left = NULL;
    // BinaryNode->right = NULL;


}

void add(int data)
{
    Binary* newNode = malloc(sizeof(BinaryNode));
    newNode->data = data;
    newNode->small = NULL;
    newNode->large = NULL;

    if (root == NULL)
    {
       return newNode(data);
    }

    if (data > newNode -> data)
    {
            BinaryNode right = add BinaryNode right (data);
    }

    if (data < newNode -> data)
    {
        BinaryNode left = add BinaryNode left (data);
    }

    return BinaryNode;
}

int seek(int data)
{
    return 0;
}


