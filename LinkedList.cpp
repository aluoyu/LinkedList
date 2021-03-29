#include "LinkedList.h"
#include <iostream>
using namespace std;

//���Ԫ��
Status AddList(LinkedList * L, ElemType e) {
    int count_num;     //���������ı���
    LinkedList temp_point = *L;
    for (count_num = 1; count_num < 1 && temp_point; count_num++)   //Ѱ�Ҹý��
        temp_point = temp_point->next;
    if (!temp_point || count_num > 1)   //�ý�㲻����
        return ERROR;
    LinkedList point;
    point = new LNode;     //�����½��
    point->data = e;
    point->next = temp_point->next;
    temp_point->next = point;
    return SUCCESS;
}

//��ʼ��
Status InitList(LinkedList* L) {
    *L = new LNode;
    (*L)->next = NULL;   //ͷ����ָ����Ϊ��
    cout<<"��ʼ���ɹ�"<<endl;
    return SUCCESS;
}

//Ѱ�ҽ���λ��
Status FindNode(LinkedList *L, int location, LinkedList *p) {
    int count_num;
    LinkedList temp_point = *L;
    for (count_num = 1; count_num < location && temp_point; count_num++)    //����Ѱ��
        temp_point = temp_point->next;
    if (!temp_point || count_num > location) {   //�ý�㲻����
        return ERROR;
    }
    else
        *p = temp_point->next;    //temp_point��ָ������ǰһ������ָ���Ľ��Ϊ��nextָ��ָ�������
    return SUCCESS;
}

//��ָ�����ĺ������
Status InsertList(LNode *p, LNode *q){
    q->next = p->next;
    p->next = q;
    cout << "����ɹ�" << endl;
    return SUCCESS;
}

//ɾ��ָ��������һ�����
Status DeleteList(LNode *p, ElemType *e){
    if(p->next==NULL){     //�ж�ָ������Ƿ���к�̽��
        e=NULL;
        return ERROR;
    }
    LNode *q;
    q=p->next;
    p->next=q->next;
    *e = q->data;
    delete q;
    return SUCCESS;
}

//��������
Status DestroyList(LinkedList* L){
    LinkedList point;
    while(*L) {    //��ͷ��㿪ʼ��һ�ͷ��ڴ�
        point = *L;
        *L=(*L)->next;
        delete point;
    }
    cout<<"������";
    return SUCCESS;
}

//��ӡ����д�ŵ�����
void visit(ElemType e)
{
    cout<<e<<'\t';
}

//�����������������������ֵ
void TraverseList(LinkedList L,void (*visit)(ElemType e)){
    LinkedList point;
    point=L->next;
    while(point){   //��������ѭ������Ϊ������Ϊ��
        visit(point->data);    //����������visit����
        point=point->next;
    }
    cout<<endl;
}

//��������Ԫ���ڱ����ҵ���һ�����ϵĽ��
Status SearchList(LinkedList L,ElemType e){
    LinkedList point=L;
    int i;
    for(i=0;point;i++){    //��������
        if(point->data==e) {
            cout << "���ϸ���ֵ�ĵ�һ�����Ϊ��" << i << "��" << endl;
            break;     //�ҵ����˳�ѭ��
        }
        point=point->next;
    }
    return SUCCESS;
}

//�ж������Ƿ�Ϊ��
Status EmptyList(LinkedList head){
    if(!head)
        cout << "��Ϊ��"<<endl;
    else
        cout<<"�˲�Ϊ��"<<endl;
    return SUCCESS;
}
