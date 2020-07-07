#include "unity.h"

#include "DoubleLinkedList.h"

void setUp(void)
{
}

void tearDown(void)
{
}
void test_DoubleLinkedListAddItemToHead_given_item2_expect_head_points_item2_and_tail_points_item1_both_item1next_item2prev_points_to_null()
{
	//Initialize items and lists
	ListItem	item1 ={NULL,NULL,22};
	ListItem	item2 ={NULL,NULL,11};
	DoubleLinkedList	list ={&item1,&item1,1};
	
	//Add item2 and list to head
	 int H = doubleLinkedListAddItemToHead(&list,&item2);
	//Test the Head linked list
	TEST_ASSERT_EQUAL(&item2,list.head);
	TEST_ASSERT_EQUAL(&item1,item2.next);
	TEST_ASSERT_EQUAL(NULL,item1.next);
	TEST_ASSERT_EQUAL(&item2,item1.prev);
	TEST_ASSERT_EQUAL(NULL, item2.prev);
	TEST_ASSERT_EQUAL(&item1,list.tail);
	TEST_ASSERT_EQUAL(2, H); //check counter
	TEST_ASSERT_EQUAL(22,item1.data);
	TEST_ASSERT_EQUAL(11,item2.data);
	
    
}
void test_DoubleLinkedListAddItemToTail_given_item2_expect_tail_points_item2_and_head_points_item1_both_item2next_item1prev_points_to_null()
{
	//Initialize items and lists
	ListItem	item1={NULL,NULL,22};
	ListItem	item2={NULL,NULL,11};
	DoubleLinkedList	list={&item1,&item1,1};
	
	//Add item2 and list to tail
	 int H = doubleLinkedListAddItemToTail(&list,&item2);
	//Test the Tail linked list
	TEST_ASSERT_EQUAL(&item2,list.tail);
	TEST_ASSERT_EQUAL(&item1, item2.prev);
	TEST_ASSERT_EQUAL(NULL,item1.prev);
	TEST_ASSERT_EQUAL(&item2, item1.next);
	TEST_ASSERT_EQUAL(NULL, item2.next);
	TEST_ASSERT_EQUAL(&item1, list.head);
	TEST_ASSERT_EQUAL(2,H); //check counter
	TEST_ASSERT_EQUAL(22, item1.data);
	TEST_ASSERT_EQUAL(11, item2.data);	
}
void test_DoubleLinkedListRemoveItemFromHead_given_item2_expect_LastItem_to_be_remove_from_head_of_linked_list_order_21()
{
	ListItem* itemRemoved;
	ListItem	item1={NULL,NULL,22};
	ListItem	item2={NULL,NULL,11};
	DoubleLinkedList list = {&item1,&item1,1};
	
	doubleLinkedListAddItemToHead(&list,&item2);
	//remoevd item2 from head linked list
	itemRemoved = doubleLinkedListRemoveItemFromHead(&list);
	TEST_ASSERT_EQUAL(&item2,itemRemoved);
	TEST_ASSERT_EQUAL(&item1, list.head);
	TEST_ASSERT_EQUAL(NULL,item1.prev);
	TEST_ASSERT_EQUAL(1, list.count);
	TEST_ASSERT_EQUAL(NULL,itemRemoved->next);
	TEST_ASSERT_EQUAL(NULL,itemRemoved->prev);
	TEST_ASSERT_EQUAL(11,itemRemoved->data);
	//remove item1 from head linked list
	itemRemoved = doubleLinkedListRemoveItemFromHead(&list);
	TEST_ASSERT_EQUAL(&item1,itemRemoved);
	TEST_ASSERT_EQUAL(NULL, list.head);
	TEST_ASSERT_EQUAL(NULL,list.tail);
	TEST_ASSERT_EQUAL(0, list.count);
	TEST_ASSERT_EQUAL(NULL,itemRemoved->next);
	TEST_ASSERT_EQUAL(NULL,itemRemoved->prev);
	TEST_ASSERT_EQUAL(22,itemRemoved->data);
	//items has been remove and all NULL
	itemRemoved = doubleLinkedListRemoveItemFromHead(&list);
	TEST_ASSERT_EQUAL(NULL,itemRemoved);
	TEST_ASSERT_EQUAL(NULL, list.head);
	TEST_ASSERT_EQUAL(NULL, list.tail);
	TEST_ASSERT_EQUAL(0, list.count);
}
void test_DoubleLinkedListRemoveItemFromHead_given_item2_expect_LastItem_to_be_remove_from_head_of_linked_list_order_12()
{
	ListItem* itemRemoved;
	ListItem	item1={NULL,NULL,22};
	ListItem	item2={NULL,NULL,11};
	DoubleLinkedList list = {&item1,&item1,1};
	
	doubleLinkedListAddItemToHead(&list,&item2);
	//remoevd item1 from head linked list
	itemRemoved = doubleLinkedListRemoveItemFromHead(&list);
	TEST_ASSERT_EQUAL(&item2,itemRemoved);
	TEST_ASSERT_EQUAL(&item1, list.head);
	TEST_ASSERT_EQUAL(NULL,item2.prev);
	TEST_ASSERT_EQUAL(1, list.count);
	TEST_ASSERT_EQUAL(NULL,itemRemoved->next);
	TEST_ASSERT_EQUAL(NULL,itemRemoved->prev);
	TEST_ASSERT_EQUAL(11,itemRemoved->data);
	//remove item2 from head linked list
	itemRemoved = doubleLinkedListRemoveItemFromHead(&list);
	TEST_ASSERT_EQUAL(&item1,itemRemoved);
	TEST_ASSERT_EQUAL(NULL, list.head);
	TEST_ASSERT_EQUAL(NULL,list.tail);
	TEST_ASSERT_EQUAL(0, list.count);
	TEST_ASSERT_EQUAL(NULL,itemRemoved->next);
	TEST_ASSERT_EQUAL(NULL,itemRemoved->prev);
	TEST_ASSERT_EQUAL(22,itemRemoved->data);
	//items has been remove and all NULL
	itemRemoved = doubleLinkedListRemoveItemFromHead(&list);
	TEST_ASSERT_EQUAL(NULL,itemRemoved);
	TEST_ASSERT_EQUAL(NULL, list.head);
	TEST_ASSERT_EQUAL(NULL, list.tail);
	TEST_ASSERT_EQUAL(0, list.count);
}
