#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

typedef struct ListItem ListItem;
struct ListItem{
	ListItem	*next;
	ListItem	*prev;
	int	data;
};

typedef struct DoubleLinkedList DoubleLinkedList;
struct DoubleLinkedList{
	ListItem	*head;
	ListItem	*tail;
	int count;
};

int doubleLinkedListAddItemToHead(DoubleLinkedList *listHead,ListItem *itemHead);
int doubleLinkedListAddItemToTail(DoubleLinkedList *listTail,ListItem *itemTail);
ListItem *doubleLinkedListRemoveItemFromHead(DoubleLinkedList *listPtr);
ListItem *doubleLinkedListRemoveItemToTail(DoubleLinkedList *listPtr);

#endif // DOUBLELINKEDLIST_H
