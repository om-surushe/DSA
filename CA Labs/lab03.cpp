#include <iostream>
#include <bits/stdc++.h>
#include <chrono>
#include <random>
using namespace std::chrono;
using namespace std;

struct node
{
    int key;
    int c = 0;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->c = 1;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *insert(struct node *node, int key, int &ma)
{
    if (node == NULL)
    {
        if (ma == 0)
            ma = 1;

        return newNode(key);
    }

    if (key < node->key)
        node->left = insert(node->left, key, ma);
    else if (key > node->key)
        node->right = insert(node->right, key, ma);
    else
        node->c++;

    ma = max(ma, node->c);

    return node;
}

void inorder(struct node *root, int s)
{
    if (root != NULL)
    {
        inorder(root->left, s);

        if (root->c > (s / 2))
            printf("%d \n", root->key);

        inorder(root->right, s);
    }
}

void printTree(struct node *node)
{
    if (node == NULL)
    {
        return;
    }
    printTree(node->left);
    cout << node->key << " " << node->c << endl;
    printTree(node->right);
}

int main()
{
    int size;
    int *array;

    cout
        << "Enter the size of the array: ";
    cin >> size;

    array = new int[size];

    // add a number 6 size/2 times
    for (int i = 0; i < size; i++)
    {
        if (i <= size / 2)
            array[i] = 6;
        else
            array[i] = rand() % 100;
    }

    struct node *root = NULL;
    int ma = 0;

    for (int i = 0; i < size; i++)
    {
        root = insert(root, array[i], ma);
    }

    if (ma > (size / 2))
    {
        auto start = high_resolution_clock::now();
        inorder(root, size);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << duration.count() << "ms" << endl;
    }
    else
    {
        cout << "No majority element\n";
    }
    return 0;
}
