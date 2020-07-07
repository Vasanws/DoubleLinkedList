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

), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((item2.next)), (

((void *)0)

), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item1.next)), (

((void *)0)

), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((item1.prev)), (

((void *)0)

), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item2.prev)), (

((void *)0)

), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((list.tail)), (

((void *)0)

), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((H)), (

((void *)0)

), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((22)), (UNITY_INT)((item1.data)), (

((void *)0)

), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((item2.data)), (

((void *)0)

), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);





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

), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((item2.prev)), (

((void *)0)

), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item1.prev)), (

((void *)0)

), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((item1.next)), (

((void *)0)

), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item2.next)), (

((void *)0)

), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((H)), (

((void *)0)

), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((22)), (UNITY_INT)((item1.data)), (

((void *)0)

), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((item2.data)), (

((void *)0)

), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT);

}

void test_DoubleLinkedListRemoveItemFromHead_given_item2_expect_LastItem_to_be_remove_from_head_of_linked_list_order_21()

{

 ListItem* itemRemoved;

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

 DoubleLinkedList list = {&item1,&item1,1};



 doubleLinkedListAddItemToHead(&list,&item2);



 itemRemoved = doubleLinkedListRemoveItemFromHead(&list);

 UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((itemRemoved)), (

((void *)0)

), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item1.prev)), (

((void *)0)

), (UNITY_UINT)(66), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((list.count)), (

((void *)0)

), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved->next)), (

((void *)0)

), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved->prev)), (

((void *)0)

), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((itemRemoved->data)), (

((void *)0)

), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);



 itemRemoved = doubleLinkedListRemoveItemFromHead(&list);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((itemRemoved)), (

((void *)0)

), (UNITY_UINT)(73), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(74), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.tail)), (

((void *)0)

), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((list.count)), (

((void *)0)

), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved->next)), (

((void *)0)

), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved->prev)), (

((void *)0)

), (UNITY_UINT)(78), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((22)), (UNITY_INT)((itemRemoved->data)), (

((void *)0)

), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_INT);



 itemRemoved = doubleLinkedListRemoveItemFromHead(&list);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved)), (

((void *)0)

), (UNITY_UINT)(82), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.tail)), (

((void *)0)

), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((list.count)), (

((void *)0)

), (UNITY_UINT)(85), UNITY_DISPLAY_STYLE_INT);

}

void test_DoubleLinkedListRemoveItemFromHead_given_item2_expect_LastItem_to_be_remove_from_head_of_linked_list_order_12()

{

 ListItem* itemRemoved;

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

 DoubleLinkedList list = {&item1,&item1,1};



 doubleLinkedListAddItemToHead(&list,&item2);



 itemRemoved = doubleLinkedListRemoveItemFromHead(&list);

 UnityAssertEqualNumber((UNITY_INT)((&item2)), (UNITY_INT)((itemRemoved)), (

((void *)0)

), (UNITY_UINT)(97), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((item2.prev)), (

((void *)0)

), (UNITY_UINT)(99), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((list.count)), (

((void *)0)

), (UNITY_UINT)(100), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved->next)), (

((void *)0)

), (UNITY_UINT)(101), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved->prev)), (

((void *)0)

), (UNITY_UINT)(102), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((itemRemoved->data)), (

((void *)0)

), (UNITY_UINT)(103), UNITY_DISPLAY_STYLE_INT);



 itemRemoved = doubleLinkedListRemoveItemFromHead(&list);

 UnityAssertEqualNumber((UNITY_INT)((&item1)), (UNITY_INT)((itemRemoved)), (

((void *)0)

), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.tail)), (

((void *)0)

), (UNITY_UINT)(108), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((list.count)), (

((void *)0)

), (UNITY_UINT)(109), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved->next)), (

((void *)0)

), (UNITY_UINT)(110), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved->prev)), (

((void *)0)

), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((22)), (UNITY_INT)((itemRemoved->data)), (

((void *)0)

), (UNITY_UINT)(112), UNITY_DISPLAY_STYLE_INT);



 itemRemoved = doubleLinkedListRemoveItemFromHead(&list);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((itemRemoved)), (

((void *)0)

), (UNITY_UINT)(115), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.head)), (

((void *)0)

), (UNITY_UINT)(116), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((

((void *)0)

)), (UNITY_INT)((list.tail)), (

((void *)0)

), (UNITY_UINT)(117), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((list.count)), (

((void *)0)

), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_INT);

}
