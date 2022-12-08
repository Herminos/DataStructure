#include<iostream>
using namespace std;
struct ListNode
{
    int value;
    ListNode *next;
};
ListNode* createList()
{
    ListNode *head_node=(ListNode*)malloc(sizeof(ListNode));
    if(head_node==nullptr)
    {
        cerr<<"Error:Fail to allocate memory"<<endl;
        return nullptr;
    }
    head_node->next=nullptr;
    return head_node;
}
ListNode *addNode(ListNode *list,int val)
{
    ListNode *add=(ListNode*)malloc(sizeof(ListNode));
    if(add==nullptr)
    {
        cerr<<"Error:Fail to allocate memory"<<endl;
        return nullptr;
    }
    add->value=val;
    add->next=nullptr;
    ListNode *temp=list;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=add;
    return list;
}
void show(ListNode *list)
{
    ListNode *temp=list;
    temp=temp->next;
    while(temp!=nullptr)
    {
        cout<<temp->value;
        temp=temp->next;
    }
}
ListNode *insertNode(ListNode *list,int val,int pos)
{
    ListNode *temp;
    temp=list;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
        if(temp==nullptr)
        {
            cerr<<"Error:Fail to insert the element:No such place"<<endl;
            return list;
        }
    }
    ListNode *insert=(ListNode*)malloc(sizeof(ListNode));
    insert->value=val;
    insert->next=temp->next;
    temp->next=insert;
    return list;
}
ListNode *deleteNode(ListNode *list,int pos)
{
    ListNode *temp;
    temp=list;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
        if(temp==nullptr)
        {
            cerr<<"Error:Fail to delete the element:No such place"<<endl;
            return list;
        }
    }
    ListNode *del=temp->next;
    temp->next=temp->next->next;
    delete del;
    return list;
}
int selectNode(ListNode *list,int target)
{
    ListNode *temp=list;
    int i=1;
    while(temp->next)
    {
        temp=temp->next;
        if(temp->value==target)
        {
            return i;
        }
        i++;
    }
    return -1;
}
ListNode *renewNode(ListNode *list,int pos,int newval)
{
    ListNode *temp;
    temp=list;
    temp=temp->next;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    temp->value=newval;
    return list;
}
ListNode *reverseList(ListNode *list)
{
    if(list==nullptr)
    {
        return list;
    }
    else
    {
        ListNode *beg,*mid,*end;
        beg=nullptr;
        mid=list->next;
        end=mid->next;
        while(true)
        {
            mid->next=beg;
            if(end==nullptr)
            {
                break;
            }
            beg=mid;
            mid=end;
            end=end->next;
        }
        list->next=mid;
        return list;
    }
}
