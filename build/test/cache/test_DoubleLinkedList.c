#include "build/temp/_test_DoubleLinkedList.c"
#include "src/DoubleLinkedList.h"
#include "C:/Ruby25-x64/lib/ruby/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}

void test_DoubleLinkedListAddItemToHead_given_item2_expect_head_points_item2_and_tail_points_item1_both_item1next_item2prev_points_to_null()

{



 ListItem item1 ={

                 ((void *)0)

                     ,

                      ((void *)0)

                          ,22};

 ListItem item2 ={

                 ((void *)0)

                     ,

                      ((void *)0)

                          ,11};

 DoubleLinkedList list ={&item1,&item1,1};





  int H = doubleLinkedListAddItemToHead(&list,&item2);



 UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((item2.next)), (

((void *)0)

), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item1.next)), (

((void *)0)

), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((item1.prev)), (

((void *)0)

), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item2.prev)), (

((void *)0)

), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((list.tail)), (

((void *)0)

), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);



 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((H)), (

((void *)0)

), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);



 UnityAssertEqualNumber((UNITY_INT)((22)), (UNITY_INT)((item1.data)), (

((void *)0)

), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((item2.data)), (

((void *)0)

), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT);

}

void test_DoubleLinkedListAddItemToTail_given_item2_expect_tail_points_item2_and_head_points_item1_both_item2next_item1prev_points_to_null()

{



 ListItem item1={

                ((void *)0)

                    ,

                     ((void *)0)

                         ,22};

 ListItem item2={

                ((void *)0)

                    ,

                     ((void *)0)

                         ,11};

 DoubleLinkedList list={&item1,&item1,1};





  int H = doubleLinkedListAddItemToTail(&list,&item2);



 UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((list.tail)), (

((void *)0)

), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((item2.prev)), (

((void *)0)

), (UNITY_UINT)(88), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item1.prev)), (

((void *)0)

), (UNITY_UINT)(89), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((item1.next)), (

((void *)0)

), (UNITY_UINT)(90), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item2.next)), (

((void *)0)

), (UNITY_UINT)(91), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(92), UNITY_DISPLAY_STYLE_INT);



 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((H)), (

((void *)0)

), (UNITY_UINT)(94), UNITY_DISPLAY_STYLE_INT);



 UnityAssertEqualNumber((UNITY_INT)((22)), (UNITY_INT)((item1.data)), (

((void *)0)

), (UNITY_UINT)(96), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((item2.data)), (

((void *)0)

), (UNITY_UINT)(97), UNITY_DISPLAY_STYLE_INT);

}

void test_DoubleLinkedListRemoveItemfromHead_given_list_contains_no_item_expect_function_to_return_null()

{



 ListItem *itemRemoved;

 DoubleLinkedList list={

                       ((void *)0)

                           ,

                            ((void *)0)

                                ,0};



 itemRemoved = doubleLinkedListRemoveItemFromHead(&list);



 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved)), (

((void *)0)

), (UNITY_UINT)(123), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(124), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.tail)), (

((void *)0)

), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((list.count)), (

((void *)0)

), (UNITY_UINT)(126), UNITY_DISPLAY_STYLE_INT);

}

void test_DoubleLinkedListRemoveItemfromHead_given_item1_expect_no_item_function_to_return_null()

{



  ListItem *itemRemove;

  ListItem item1={

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,22};

  DoubleLinkedList list={&item1,&item1,1};



  itemRemove = doubleLinkedListRemoveItemFromHead(&list);



  UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((itemRemove)), (

 ((void *)0)

 ), (UNITY_UINT)(154), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((itemRemove->next)), (

 ((void *)0)

 ), (UNITY_UINT)(155), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((itemRemove->prev)), (

 ((void *)0)

 ), (UNITY_UINT)(156), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((list.head)), (

 ((void *)0)

 ), (UNITY_UINT)(157), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((list.tail)), (

 ((void *)0)

 ), (UNITY_UINT)(158), UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((list.count)), (

 ((void *)0)

 ), (UNITY_UINT)(160), UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((UNITY_INT)((22)), (UNITY_INT)((itemRemove->data)), (

 ((void *)0)

 ), (UNITY_UINT)(162), UNITY_DISPLAY_STYLE_INT);

}

void test_DoubleLinkedListRemoveItemfromHead_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1()

{

  ListItem *itemRemove;

  ListItem item1={

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,22};

  ListItem item2={

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,11};

  DoubleLinkedList list={&item2,&item1,2};



  itemRemove = doubleLinkedListRemoveItemFromHead(&list);



  UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((itemRemove)), (

 ((void *)0)

 ), (UNITY_UINT)(192), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT64)((&item1)), (UNITY_INT64)((list.head)), (

 ((void *)0)

 ), (UNITY_UINT)(193), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&item1)), (UNITY_INT64)((list.tail)), (

 ((void *)0)

 ), (UNITY_UINT)(194), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((&item2)), (

 ((void *)0)

 ), (UNITY_UINT)(195), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((&item2)), (

 ((void *)0)

 ), (UNITY_UINT)(196), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((itemRemove->next)), (

 ((void *)0)

 ), (UNITY_UINT)(197), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((itemRemove->prev)), (

 ((void *)0)

 ), (UNITY_UINT)(198), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((list.count)), (

 ((void *)0)

 ), (UNITY_UINT)(199), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((itemRemove->data)), (

 ((void *)0)

 ), (UNITY_UINT)(200), UNITY_DISPLAY_STYLE_INT);

}
