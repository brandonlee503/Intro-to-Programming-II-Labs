#include "list.h" 
#include <stdio.h> 
#include <stdlib.h> 
 
int main (){ 
 char ans; 
 int num; 
 struct node *head = NULL; 
 
 do { 
 printf("Enter a number: "); 
 scanf("%d", &num); 
 
 push(&head, num); //Change push to append� 
 
 printf("Do you want another num (y or n): "); //printf = cout
 scanf("%1s",&ans); //scanf = cin
 } while(ans=='y'); 
 
 print(head, length(head)); 
 
 return 0; 
}