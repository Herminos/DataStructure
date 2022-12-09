#include<iostream>
using namespace std;
struct LinkStack
{
    int value;
    struct LinkStack *next;
};
LinkStack *createStack()
{
    auto head=(LinkStack*)malloc(sizeof(LinkStack));
    if(head==nullptr)
    {
        cerr<<"Error: Fail to allocate the memory for the stack."<<endl;
        return nullptr;
    }
    head->next=nullptr;
    return head;
}
LinkStack *push(LinkStack *stack,int val)
{
    auto add=(LinkStack*)malloc(sizeof(LinkStack));
    if(add==nullptr)
    {
        cerr<<"Error: Fail to allocate the memory for the new node."<<endl;
        return stack;
    }
    add->value=val;
    add->next=stack->next;
    stack->next=add;
    return stack;
}
LinkStack *pop(LinkStack *stack)
{
    if(stack==nullptr)
    {
        cout<<"The stack is empty."<<endl;
        return stack;
    }
    LinkStack *temp=stack->next;
    stack->next=stack->next->next;
    delete temp;
    return stack;
}
void show(LinkStack *stack)
{
    LinkStack *temp;
    temp=stack;
    temp=temp->next;
    while(temp!=nullptr)
    {
        cout<<temp->value;
        temp=temp->next;
    }
}