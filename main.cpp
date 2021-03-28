#include <iostream>
using namespace std;
#include "LinkedList.h"

//������
int main() {
    LinkedList head;
    InitList(&head);
    while(true){
        cout<<"---1.��� 2.���� 3.��� 4.ɾ�� 5.���� 6.�жϿ����� 7.���� 8.�˳�---"<<endl;
        int choice;
        cout<<"������ѡ��-"<<endl;
        cin>>choice;
        int locate,element;
        switch(choice){
            case(1):
                cout<<"������Ҫ��ӵ�Ԫ�أ�ע�⣺ͷ�巨��-"<<endl;
                cin>>element;
                AddList(&head,element);
                break;
            case(2):
                cout<<"ע�⣺�����λ��Ϊָ�����ĺ���"<<endl;
                cout<<"����������Ҫ����Ľ��λ��-"<<endl;
                cin>>locate;
                LNode *p;
                Status situation;
                situation = FindNode(&head, locate, &p);
                if (situation == ERROR || p == NULL) {     //�жϽ���Ƿ����
                    cout << "�ý�㲻����" << endl;
                    break;
                }
                else {
                    LNode *q;
                    q = new LNode;
                    cout << "�������½���ŵ�����-" << endl;
                    int num;
                    cin >> num;
                    q->data = num;
                    cout << "�����Ѵ���½��" << endl;
                    InsertList(p, q);
                    break;
                }
            case(3):
                void (*point)(ElemType c);
                point=visit;
                TraverseList(head,point);
                break;
            case(4):
                cout << "ע�⣺ɾ���Ľ��Ϊָ��������һ�����" << endl;
                cout<<"������ָ�����λ��-"<<endl;
                cin>>locate;
                LNode *point_;
                FindNode(&head, locate, &point_);
                if (FindNode(&head, locate, &point_) == ERROR || p == NULL) {    //�жϽ���Ƿ����
                    cout << "�ý�㲻����" << endl;
                    break;
                }
                else {
                    ElemType e;
                    Status condition;
                    condition = DeleteList(p, &e);
                    if (condition == SUCCESS) {
                        cout << "ɾ���ɹ�" << endl;
                        cout << "��ɾ������е�����Ϊ��" << e << endl;
                    }
                    else {
                        cout << "�ý��Ϊβ���,�����޽���ɾ" << endl;
                        break;
                    }
                }
                //DeleteList(head, locate);
                break;
            case(5):
                cout<<"������Ҫ���ҵ�����-"<<endl;
                cin>>element;
                SearchList(head,element);
                break;
            case(6):
                EmptyList(head);
                break;
            case(7):
                cout<<"ȷ�����٣�"<<endl;
                cout<<"1-ȷ��  2-ȡ��"<<endl;
                int number;
                cin>>number;
                if(number==1) {
                    DestroyList(&head);
                    cout<<"1.��ʼ������ 2.�˳�"<<endl<<"��ѡ��-"<<endl;
                    int choice_;
                    cin>>choice_;
                    switch(choice_){
                        case(1):
                            InitList(&head);
                            break;
                        case(2):
                            exit(0);
                    }
                }
                break;
            case(8):
                exit(0);
            default:
                cout<<"��������������"<<endl;
        }
    }
}
