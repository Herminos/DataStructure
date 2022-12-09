#pragma once
struct LinkStack;
LinkStack *createStack();
LinkStack *push(LinkStack *stack,int val);
LinkStack *pop(LinkStack *stack);
void show(LinkStack *stack);