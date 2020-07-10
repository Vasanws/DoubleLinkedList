#include "unity.h"

#include "DoubleLinkedList.h"

void setUp(void)
{
}

void tearDown(void)
{
}


/*
  *Add item2 from head
  *Before:
      count = 1
      |Head| -----------> item1
  List                    next------->NULL
      |Tail|     NULL-----prev
           |               ^  22
           |_______________|
  
  *After adding item2
      count = 2
      |Head| --------> item2      item1
  List                 next------> next----->NULL
      |Tail| NULL<-----prev<------ prev
           |            11          ^  22
           |________________________|
*/
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
  //check counter increment
	TEST_ASSERT_EQUAL(2, H);    
  //data contains value
	TEST_ASSERT_EQUAL(22,item1.data);
	TEST_ASSERT_EQUAL(11,item2.data); 
}

/*
  *Add item2 from tail
  *Before:
      count = 1
                  
      |Head| -----|      item1
  List                   next ------>NULL
                NULL<---prev
      |Tail|             ^  11
           |_____________|
  
  *After adding item2
      count = 2
      |Head| ----|    item1         item2
  List                next---|      next---->NULL
               NULL<--prev<------- prev
      |Tail|           22             ^ 11
           |__________________________|
*/



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
  //check counter increment
	TEST_ASSERT_EQUAL(2,H); 
  //data contains value
	TEST_ASSERT_EQUAL(22, item1.data);
	TEST_ASSERT_EQUAL(11, item2.data);	
}
/*
 *Test remove item from head*
 *Before:
    count = 0
    |Head| ----> NULL
    |Tail| ----> NULL
    
  *After:
    count = 0
    |Head| ----> NULL
    |Tail| ----> NULL
   
  *no changes on the item when counter is 0
  *the functions return the items to NULL
*/

void test_DoubleLinkedListRemoveItemfromHead_given_list_contains_no_item_expect_function_to_return_null()
{
 //initialize
 ListItem *itemRemoved;
 DoubleLinkedList list={NULL,NULL,0};                       //list contains empty item
 
 itemRemoved = doubleLinkedListRemoveItemFromHead(&list);   //keep removing item although no items left
 //test the linked list
 TEST_ASSERT_EQUAL(NULL, itemRemoved);                      //check for removed item
 TEST_ASSERT_EQUAL(NULL, list.head);                             //check head does not point to item
 TEST_ASSERT_EQUAL(NULL, list.tail);                             //check tail does not point to item
 TEST_ASSERT_EQUAL(0, list.count);                          //check decrement to zero
}

/*
 *Remove item1 from head
 *Before:
    count = 1
    |Head|  --------> item1
  List                next -----> NULL
             NULL<----prev
    |Tail|              ^ 22
         |_____________|

  *After removing
     count = 0
     |Head| ---> NULL
  List
     |Tail| ---> NULL
*/
void test_DoubleLinkedListRemoveItemfromHead_given_item1_expect_no_item_function_to_return_null()
{
  //initialize item and list
  ListItem *itemRemove;
  ListItem    item1={NULL,NULL,22};
  DoubleLinkedList	list={&item1,&item1,1};
  
  itemRemove = doubleLinkedListRemoveItemFromHead(&list); 
  //Test linked list remove item1 from head
  TEST_ASSERT_EQUAL(&item1, itemRemove);
  TEST_ASSERT_EQUAL(NULL, itemRemove->next);
  TEST_ASSERT_EQUAL(NULL, itemRemove->prev);
  TEST_ASSERT_EQUAL(NULL, list.head);
  TEST_ASSERT_EQUAL(NULL, list.tail);
  //check counter decrement
  TEST_ASSERT_EQUAL(0, list.count);
  //remove value in data
  TEST_ASSERT_EQUAL(22, itemRemove->data);
}

/*
 *Remove item2 from head
 *Before:
    count = 2
    |Head|  ------> item2       item1
                    next -----> next ----> NULL
            NULL<---prev------> prev
    |Tail|           11          ^  22
         |_______________________|

  *After removing
    count = 1
    |Head|  ------> item1
                    next ----> NULL
            NULL<---prev
    |Tail|           ^  22
         |___________|
*/
void test_DoubleLinkedListRemoveItemfromHead_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1()
{
  ListItem *itemRemove;
  ListItem    item1={NULL,NULL,22};
  ListItem    item2={NULL,NULL,11};
  DoubleLinkedList	list={&item2,&item1,2};
  
  itemRemove = doubleLinkedListRemoveItemFromHead(&list);
  //Test linked remove item2 from head
  TEST_ASSERT_EQUAL(&item2, itemRemove);
  TEST_ASSERT_EQUAL_PTR(&item1, list.head); //test fail
  TEST_ASSERT_EQUAL_PTR(&item1, list.tail);
  TEST_ASSERT_EQUAL(NULL, &item2);
  TEST_ASSERT_EQUAL(NULL, &item2);
  TEST_ASSERT_EQUAL(NULL, itemRemove->next);
  TEST_ASSERT_EQUAL(NULL, itemRemove->prev);
  //check counter decrement
  TEST_ASSERT_EQUAL(1, list.count);
  //remove data value
  TEST_ASSERT_EQUAL(11, itemRemove->data);
}

 /*
 *Test remove item from tail*
 *Before:
    count = 0
    |Head| ----> NULL
    |Tail| ----> NULL
    
  *After:
    count = 0
    |Head| ----> NULL
    |Tail| ----> NULL
   
  *no changes on the item when counter is 0
  *the functions return the items to NULL
*/

/*void test_DoubleLinkedListRemoveItemToTail_given_list_contains_no_item_expect_function_to_return_null()
{
 //initialize
 ListItem *itemRemoved;
 DoubleLinkedList list={NULL,NULL,0};                       //list contains empty item
 
 itemRemoved = doubleLinkedListRemoveItemToTail(&list);   //keep removing item although no items left
 //test the linked list
 TEST_ASSERT_EQUAL(NULL, itemRemoved);                      //check for removed item
 TEST_ASSERT_EQUAL(NULL, head);                             //check head does not point to item
 TEST_ASSERT_EQUAL(NULL, tail);                             //check tail does not point to item
 TEST_ASSERT_EQUAL(0, list.count);                          //check decrement to zero
}
*/

/*
 *Remove item1 to tail
 *Before:
    count = 1
    |Head|  --------> item1
  List                next -----> NULL
             NULL<----prev
    |Tail|              ^ 22
         |_____________|

  *After removing
     count = 0
     |Head| ---> NULL
  List
     |Tail| ---> NULL
*/
/*void test_DoubleLinkedListRemoveItemToTail_given_item1_expect_no_item_function_to_return_null()
{
  //initialize item and list
  ListItem *itemRemoved;
  ListItem    item1={NULL,NULL,22};
  DoubleLinkedList	list={&item1,&item1,1};
  
  itemRemoved = doubleLinkedListRemoveItemToTail(&list); 
  //Test linked list remove item1 to tail
  TEST_ASSERT_EQUAL(&item1, itemRemoved);
  TEST_ASSERT_EQUAL(NULL, itemRemoved->next;
  TEST_ASSERT_EQUAL(NULL, itemRemove->prev);
  TEST_ASSERT_EQUAL(NULL, list.head);
  TEST_ASSERT_EQUAL(NULL, list.tail);
  //check counter decrement
  TEST_ASSERT_EQUAL(0, list.count);
  //remove value in data
  TEST_ASSERT_EQUAL(22, itemRemove->data);
}
*/

/*
 *Remove item2 to tail
 *Before:
    count = 2
    |Head|  ------> item2       item1
                    next -----> next ----> NULL
            NULL<---prev------> prev
    |Tail|           11          ^  22
         |_______________________|

  *After removing
    count = 1
    |Head|  ------> item1
                    next ----> NULL
            NULL<---prev
    |Tail|           ^  22
         |___________|
*/
/*void test_DoubleLinkedListRemoveItemToHead_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1()
{
  ListItem *itemRemoved;
  ListItem    item1={NULL,NULL,22};
  ListItem    item2={NULL,NULL,11}
  DoubleLinkedList	list={&item2,&item1,2};
  
  itemRemoved = doubleLinkedListRemoveItemFromHead(&list);
  //Test linked remove item2 to tail
  TEST_ASSERT_EQUAL(&item2, itemRemoved);
  TEST_ASSERT_EQUAL(&item1, list.head);
  TEST_ASSERT_EQUAL(&item1, list.tail);
  TEST_ASSERT_EQUAL(NULL, itemRemoved->next);
  TEST_ASSERT_EQUAL(NULL, itemRemoved->tail);
  TEST_ASSERT_EQUAL(1, list.count);
  TEST_ASSERT_EQUAL(11, itemRemoved->data);
  TEST_ASSERT_EQUAL(NULL, item2->next);
  TEST_ASSERT_EQUAL(NULL, item2->prev);
}
*/

  
  
  
