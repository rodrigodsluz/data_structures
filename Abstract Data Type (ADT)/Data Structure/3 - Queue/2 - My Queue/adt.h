#ifndef _QUEUE_
#define _QUEUE_

typedef struct student{
    char name[30];
    int grade;
    int registration;;
}Student;

typedef struct queue Queue;

Queue *createQueue();

int freeQueue(Queue *qu);


#endif