//Implementing the Binary Search Tree Traversals
#include <stdio.h>
#include <stdlib.h>
struct node //Declaring node
{
    int data;
    struct node* right_child;
    struct node* left_child;
};
//creating nodes to store the data
struct node* new_node(int data)
{
   struct node* node= (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left_child=NULL;
    node->right_child=NULL;
    
    return(node);
    printf("\nValue %d successfully inserted!\n",data);
}

void Inorder_traversal(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder_traversal(node->left_child);
    printf(" %d ",node->data);
    Inorder_traversal(node->right_child);
}

int main()
{
    printf("\n***Implementing Binary Search Tree Traversals***\n");
    printf("\nEnter the root value: \n");
    int Root;
    scanf("%d",&Root);
    struct node* root = new_node(Root);
    
    
    
   int ch=0;
    int k=0;
    while(ch!=3)
    {
        printf("\nChoose from the options: 1. Insert the nodes 2. Inorder Traversal 3. Exit\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("\n***Inserting the nodes***\n");
            printf("Enter the value to be inserted: \n");
            int x;
            scanf("%d",&x);
            if(k%2==0)
            {
            root->left_child=new_node(x); 
            k++;
            }
            else
            {
            root->right_child=new_node(x);
            k++;
            }
            
        }
        
        if(ch==2)
        {
            printf("\n***INORDER TREE TRAVERSAL***\n");
            Inorder_traversal(root);
        }
    }
    
}




















