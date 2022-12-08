#pragma once
struct ListNode;
ListNode *createList();
ListNode *addNode(ListNode *list,int val);
void show(ListNode *list);
ListNode *insertNode(ListNode *list,int val,int pos);
ListNode *deleteNode(ListNode *list,int pos);
int selectNode(ListNode *list,int target);
ListNode *renewNode(ListNode *list,int pos,int newval);
ListNode *reverseList(ListNode *list);
