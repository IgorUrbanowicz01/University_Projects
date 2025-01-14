#include"graph_structure.h"

#include <stdbool.h>


struct StackNode {
    int data;
    struct StackNode* next;
};

struct Stack {
    struct StackNode* front;
};


/* STACK */

struct StackNode* newStackNode(int data);
struct Stack* createStack();
bool isStackEmpty(struct Stack* setbuf);
void pushStack(struct Stack* s, int data);
int popStack(struct Stack* s);
void printStack(struct Stack* s);

/* DFS */

void DFS(struct Graph* graph, int start);           //iterative method
//void DFSvisit(struct Graph* graph, int u);          //recursive method
//void DFScormen(struct Graph* graph, int start);