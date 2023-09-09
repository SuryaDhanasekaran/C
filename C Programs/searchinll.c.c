#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;
void printList(){
   struct node *p = head;
   printf("\n[");
   while(p != NULL) {
      printf(" %d ",p->data);
      p = p->next;
   }
   printf("]");
}

void insertatbegin(int data){

   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;

   lk->next = head;

   head = lk;
}

int searchlist(int key){
   struct node *temp = head;
   while(temp != NULL) {
      if (temp->data == key) {
         return 1;
      }
      temp=temp->next;
   }
   return 0;
}
void main(){
   int k=0;
   insertatbegin(12);
   insertatbegin(22);
   printList();
   insertatbegin(4);
   insertatbegin(16);
   printList();
   k = searchlist(16);
   if (k == 1)
      printf("\nElement is found");
   else
      printf("\nElement is not present in the list");
}