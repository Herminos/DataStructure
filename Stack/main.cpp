#include<iostream>
#include"Stack.h"
using namespace std;
int main()
{
    LinkStack *stack=createStack();
    stack=push(stack,1);
    stack=push(stack,2);
    stack=push(stack,3);
    show(stack);
    stack=pop(stack);
    show(stack);
}
