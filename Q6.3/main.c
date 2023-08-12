#include <stdio.h>
#include <stdlib.h>
/*((3) Write a C function that returns the data inside the 5th element from the end of linked list
and in case the linked list contains only one node return the data inside this node.*/
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

int fifthElement()
{
   if(head==NULL)return -1;
   int counter=0;
   current=head;
   while(current!=NULL){
       counter++;
       current=current->next;
   }
   current=head;
   if(counter==1)return current->data;
   for(int i=1;i<(counter-5)+1;i++){
    current=current->next;
   }
   return current->data;
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
    int res=fifthElement();
    printf("the data inside the 5th element from the end of linked list= %d",res);
    return 0;
}
