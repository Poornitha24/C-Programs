#include<stdio.h>
#define QUEUE_SIZE 1000
typedef float T;
typedef struct 
{
    T elements[QUEUE_SIZE];
    int _size;
    int _front;
    int _back;
}Queue;
void QueueInit(Queue* stk);
void QueuePush(Queue* stk,T element);
int QueueEmpty(Queue* stk);
T QueueFront(Queue* stk);
T QueueBack(Queue* stk);
void QueuePop(Queue* stk);
int main()
{
    Queue stk;
    QueueInit(&stk);
    float salaries[]={50000,40000,45000,23000,2900};
    for(int i=0;i<5;i++)
    {
        QueuePush(&stk,salaries[i]);
    }
    printf("Salaries from stack:\n");
    while(!(QueueEmpty(&stk)))
    {
        float sal=QueueFront(&stk);
        printf("%.2f ",sal);
        QueuePop(&stk);
    }
    return 0;
}
void QueueInit(Queue* stk)
{
    stk->_size=0;
    stk->_front=-1;
    stk->_back=-1;
}
void Queuepush(Queue* stk,T element)
{
    stk->_back++;
    stk->elements[stk->_back]=element;
    stk->_size++;
    if(stk->_front==-1)
    {
        stk->_front=0;
    }
}
int QueueEmpty(Queue* stk)
{
    return (stk->_front==-1);
}
T QueueFront(Queue* stk)
{
    return stk->elements[stk->_front];
}
T QueueBack(Queue* stk)
{
    return stk->elements[stk->_back];
}
void QueuePop(Queue* stk)
{
    if(QueueEmpty(stk))
    {
        printf("Queue is empty. \n");
        return;
    }
    if(stk->_front==stk->_back)
    {
        stk->_front=-1;
        stk->_back=-1;
        stk->_size=0;
    }
    else
    {
        stk->_front++;
    }
}
