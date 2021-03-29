#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED



#endif // LINKEDLIST_H_INCLUDED

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkedList;

typedef enum Status {
    ERROR,
    SUCCESS
} Status;

Status AddList(LinkedList * L, ElemType e);//���Ԫ��
Status InitList(LinkedList* L);//��ʼ��
Status FindNode(LinkedList *L, int location, LinkedList *p);//Ѱ�ҽ���λ��
Status InsertList(LNode *p, LNode *q);//��ָ�����ĺ������
Status DeleteList(LNode *p, ElemType *e);//ɾ��ָ��������һ�����
Status DestroyList(LinkedList* L);//��������
void visit(ElemType e);//��ӡ����д�ŵ�����
void TraverseList(LinkedList L,void (*visit)(ElemType e));//�����������������������ֵ
Status SearchList(LinkedList L,ElemType e);//��������Ԫ���ڱ����ҵ���һ�����ϵĽ��
Status EmptyList(LinkedList head);//�ж������Ƿ�Ϊ��
