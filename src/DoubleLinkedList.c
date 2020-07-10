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
  
  if(listPtr->head == NULL)
  {
    listPtr->count = 0;
    return NULL;
  }
  else
  {
    itemLast = listPtr->head;
    listPtr->head = itemLast->next;
      if(listPtr->head == NULL)
      {
        listPtr->tail = NULL;
      }
      else
      {
        (listPtr->head)->prev = NULL;
      }
      itemLast->next = NULL;
      itemLast->prev = NULL;
      listPtr->count -= 1;
  }
  return itemLast;
}

ListItem *doubleLinkedListRemoveItemToTail(DoubleLinkedList *listPtr)
{
  ListItem *itemLast;
  
  if(listPtr->tail == NULL)
  {
    listPtr->count = 0;
    return NULL;
  }
  else
  {
    itemLast = listPtr->tail;
    listPtr->tail = itemLast->next;
      if(listPtr->tail == NULL)
      {
        listPtr->head = NULL;
      }
      else
      {
        (listPtr->tail)->prev = NULL;
      }
      itemLast->next = NULL;
      itemLast->prev = NULL;
      listPtr->count -= 1;
  }
  return itemLast;
}

