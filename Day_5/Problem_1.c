#include<stdio.h>
#define STACK_SIZE 1000
typedef float T;
typedef struct 
{
    T elements[STACK_SIZE];
    int _size;
    int _top;
}Stack;
void StackInit(Stack* stk);
void StackPush(Stack* stk,T element);
int StackEmpty(Stack* stk);
T StackTop(Stack* stk);
void StackPop(Stack* stk);
int main()
{
    Stack stk;
    StackInit(&stk);
    float salaries[]={50000,40000,45000,23000,2900};
    for(int i=0;i<5;i++)
    {
        StackPush(&stk,salaries[i]);
    }
    printf("Salaries from stack:\n");
    while(!(StackEmpty(&stk)))
    {
        float sal=StackTop(&stk);
        printf("%.2f ",sal);
        StackPop(&stk);
    }
    return 0;
}
void StackInit(Stack* stk)
{
    stk->_size=0;
    stk->_top=-1;
}
void StackPush(Stack* stk,T element)
{
    stk->elements[stk->_size]=element;
    stk->_size++;
    stk->_top++;
}
int StackEmpty(Stack* stk)
{
    return (stk->_top==-1);
}
T StackTop(Stack* stk)
{
    return stk->elements[stk->_top];
}
void StackPop(Stack* stk)
{
    if(StackEmpty(stk))
    {
        printf("Stack is empty. \n");
        return;
    }
    stk->_top--;
    stk->_size--;
}
