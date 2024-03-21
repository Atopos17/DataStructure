#include <iostream>
#include "SeqQueue.h"
#include "Seqstack.h"
#include <vector>
using namespace std;
#define ElemType int
typedef struct BiTNode{
    ElemType data;  //Êý¾ÝÓò
    struct BiTNode *lchild;
    struct BiTNode *rchild; 
}BiTNode,*BiTree;
void visit(BiTree T)
{  
    cout<<T->data<<" "<<endl;
}
void PreOrder(BiTree T)
{
    if(T!=NULL)
    {
        visit(T);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}
void InOrder(BiTree T)
{
    if(T!=NULL)
    {
        InOrder(T->lchild);
        visit(T);
        InOrder(T->rchild);
    }
}
void PostOrder(BiTree T)
{
    if(T!=NULL)
    {
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        visit(T);
    }
}


