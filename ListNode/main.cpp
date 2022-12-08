#include<iostream>
#include"ListNode.h"
using namespace std;
int main()
{
    ListNode *list=createList();
    for(int i=1;i<=5;i++)
    addNode(list,i);
    show(list);
    cout<<endl;
    reverseList(list);
    show(list);
}
