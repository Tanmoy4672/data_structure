#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left,*right;
};

//A utility function to create a new BST node
 struct node *newnode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));  //malloc=memory allocation
    temp->key =item;
    temp->left = temp->right =NULL;
    return temp;
};

/*A utiltiy function to insert a new node with given key in BST*/
struct node* insert(struct node* node,int key)
{
    /*if the tree is empty return a new node*/
    if (node == NULL) return newNode(key);

    /*otherwise ,recur down the tree*/
    if(key < node->key)
        node->left = insert(node->left,key);  //recursion

        if(key > node->key)
        node->right = insert(node->right,key);

    /*return the (unchanged) node pointer*/
    return node;
};

void print_preOrder(struct node * root)  //key,left,right
{
    if(root)
    {
        printf("%d\n",root->key);
        print_preOrder(root->left);
        print_preOrder(root->right);
    }
}

void print_inOrder(struct node * root)  //key,left,right
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("%d \n", root->key);
        inOrder(root->right);
    }
}

void print_postOrder(struct node * root)  //key,left,right
{
    if(root)
    {
        print_postOrder(root->left);
        print_postOrder(root->right);
        printf("%d\n",root->key);
    }
}

int main()
{
    /*creat a following BST
           50
          /  \
         30   70
        / \   / \
       20 40 60 80
    */
    struct node *root = NULL;
    root = insert(root, 50);
    insert =(root, 30);
    insert =(root, 20);
    insert =(root, 40);
    insert =(root, 70);
    insert =(root, 60);
    insert =(root, 80 );

    // print inorder traversal of the BST

    printf("\n\n\nPre Orde\n");
    print_preOrder(root);
    printf("Inorder\n");
    inOrder(root);
    printf("\n\n\nPost Order\n");
    print_postOrder(root);

    return 0;

}
