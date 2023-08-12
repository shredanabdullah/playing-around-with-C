#include <stdio.h>
#include <stdlib.h>
/*(2) Write a C Function that returns the data of the middle node in a linked list
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

int returnMiddleNode()
{
   int counter1,counter2=0;
   current=head;
   while(current!=NULL){
       counter1++;
       current=current->next;
   }
   current=head;
   if(counter1==1){
     return current->data;
   }
    while(current!=NULL){
    counter2++;
     if(counter2==(counter1/2)+1){////???????????
     return current->data;
   }
   else{
     current=current->next;
   }
   }
    return -1;
}
/////another implementation
/*
int returnMiddleNode()
{
   int counter1=0;
   current=head;
   if(head==NULL)return -1;
   while(current!=NULL){
       counter1++;
       current=current->next;
   }
   current=head;
   if(counter1==1){
     return current->data;
   }else{
   for(int i=0;i<(counter1/2);i++){
     current=current->next;
   }
   return current->data;
   }
}*/
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
    int res=returnMiddleNode();
    printf("the middle node in a linked list= %d",res);
    return 0;
}
