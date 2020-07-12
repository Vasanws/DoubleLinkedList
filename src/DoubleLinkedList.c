#include "DoubleLinkedList.h"
#include <stdio.h>


int doubleLinkedListAddItemToHead(DoubleLinkedList *listHead,ListItem *itemHead)
{
	itemHead->next = listHead->head;     //the head points to neext contains address of item1
	(listHead->head)->prev = itemHead;   //item1 prev address points to item2
	listHead->head = itemHead;           //the prev item2 points to head
	itemHead->prev = NULL;              //the prev to NULL
	listHead->count +=	1;              //increment counter
	return listHead->count;             //check counter
}

int doubleLinkedListAddItemToTail(DoubleLinkedList *listTail,ListItem *itemTail)
{
	itemTail->prev = listTail->tail;     //the tail points to prev contains address of item1
	(listTail->tail)->next = itemTail;   //item1 next address points to item2
	listTail->tail = itemTail;           //the prev item2 points to tail
	itemTail->next = NULL;               //the next to NULL
	listTail->count += 1;               //increment counter
	return listTail->count;             //check counter
}

ListItem *doubleLinkedListRemoveItemFromHead(DoubleLinkedList *listPtr)
{
  ListItem *itemLast;
 
  if(listPtr->head == NULL)                 //check for item remove
  {
    return NULL;                           //no item remove return to NULL
  } 
  else
    {
      itemLast = listPtr->head;           //itemLast points to the item about to remove
      listPtr->head = itemLast->next;     //remove item from head at this line
    }
      if(listPtr->head == NULL)           //if head no item, tail point to NULL
      {
        listPtr->tail = NULL;
      }
      else
      {
        (listPtr->head)->prev = NULL;   //check next and prev remove item point to NULL
      itemLast->next = NULL;
      itemLast->prev = NULL;
      listPtr->count -=1;             //decrement count when item remove
      }
    return itemLast;                  //itemLast return 
}

ListItem *doubleLinkedListRemoveItemToTail(DoubleLinkedList *listPtr)
{
  ListItem *itemLast;
 
  if(listPtr->tail == NULL)               //check for item remove
  {
    return NULL;                          //no item remove return to NULL
  } 
  else
    {
      itemLast = listPtr->tail;           //itemLast points to the item about to remove
      listPtr->tail = itemLast->prev;     //remove item from tail at this line
    }
      if(listPtr->tail == NULL)
      {
        listPtr->head = NULL;           //if tail no item, head point to NULL
      }
      else
      {
        (listPtr->tail)->next = NULL;   //check next and prev remove item point to NULL
      itemLast->next = NULL;
      itemLast->prev = NULL;
      listPtr->count -=1;               //decrement count when item remove
      }
    return itemLast;                    //itemLast return 
}

