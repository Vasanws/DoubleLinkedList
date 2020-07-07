#include "DoubleLinkedList.h"
#include <stdio.h>


int doubleLinkedListAddItemToHead(DoubleLinkedList *listHead,ListItem *itemHead){
	itemHead->next = listHead->head; //the head points to neext contains address of item1
	(listHead->head)->prev = itemHead; //item1 prev address points to item2
	listHead->head = itemHead; //the prev item2 points to head
	itemHead->prev = NULL; //the prev to NULL
	listHead->count +=	1; //increment counter
	return listHead->count;//check counter
}

int doubleLinkedListAddItemToTail(DoubleLinkedList *listTail,ListItem *itemTail){
	itemTail->prev = listTail->tail;
	(listTail->tail)->next = itemTail;
	listTail->tail = itemTail;
	itemTail->next = NULL;
	listTail->count += 1;
	return listTail->count; //check counter
}

ListItem *doubleLinkedListRemoveItemFromHead(DoubleLinkedList *listPtr){
	ListItem *LastItem;
	
	if(listPtr->head == NULL) {
		listPtr->count=0;
		return NULL;
	}
	else{
		LastItem = listPtr->head;
	
	
	listPtr->head = LastItem->next;
	if(listPtr->head == NULL){
		listPtr->tail = NULL;
	}
	else{
		(listPtr->head)->prev=NULL;
	}
	
	LastItem->next=NULL;
	LastItem->prev=NULL;
	
	listPtr->count -= 1;
	}
	return LastItem;
}

	
	

//ListItem* doubleLinkedListRemoveItemToTail(DoubleLinkedList *listPtr){
	
	
//}
	
