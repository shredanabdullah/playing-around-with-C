#include <stdio.h>
#include <stdlib.h>
/*(1) Write a C function that insert linked list node at any position.
The function takes the data of the node and the node position as inputs.
For example if we have a linked list contains the following data nodes: 11 3 10 50 23 5 60
If you asked the function to insert a new node has data equals to 15 at position 3 the linked list should be: 11 3 10 15 50 23 5 60*/
struct node
{
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//this func by Author      : Mohamed Tarek
//Create Linked List
void insertAtLast(int data)
{
   // Allocate memory for new node
   struct node *link = (struct node*) malloc(sizeof(struct node));

   // insert the data to the new node and make the next point to null
   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL)
   {
      head = link;
      return;
   }

   current = head;

   // loop until reach the last node in the old list
   while(current->next != NULL)
   {
	   current = current->next;
   }

   // Make the last node in the old list point to new node
   current->next = link;
}
///////////// leh position-1??
void insert(int data,int position)
{
   struct node *ptr = (struct node*) malloc(sizeof(struct node));
   int counter=0;
   current=head;
   while(current!=NULL){
        if(counter==position-1){
             ptr->data=data;
             ptr->next=current->next;
             current->next=ptr;
        }
       counter++;
       current=current->next;
   }
}
//this func by Author: Mohamed Tarek
//display the list
void printList(void)
{
   struct node *ptr = head;

   printf("[head] =>");

   //start looping from the head until the last node
   while(ptr != NULL)
   {
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}
int main()
{
    insertAtLast(11);
	insertAtLast(3);
	insertAtLast(10);
	insertAtLast(50);
	insertAtLast(23);
	insertAtLast(5);
	insertAtLast(60);
	//11 3 10 50 23 5 60
    printList();
    insert(15,3);
    printList();
    return 0;
}
