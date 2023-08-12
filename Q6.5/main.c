#include <stdio.h>
#include <stdlib.h>
/*(5) Write a C function that returns the maximum data value in the linked list.*/
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

int max()
{
   current=head;
   int max=current->data;
   if(head==NULL)return -1;
   while(current!=NULL){
       if(current->data>=max){
        max=current->data;
       }
       current=current->next;
   }
    return max;
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
    int res=max();
    printf("the maximum data value in the linked list= %d",res);
    return 0;
}
