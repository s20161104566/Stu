// Stu.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
struct student
{
	char name[60];
	char num[20];
	int age;
	int classn;
	struct student * next;
};

int main()
{
	struct student *p,*q,*head;
	int s=1;
	head=NULL;
	while(cout<<"����or����"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"������ѧ������:";
		cin>>p->name;
		cout<<"������ѧ��ѧ��:";
		cin>>p->num;
		cout<<"������ѧ������:";
		cin>>p->age;
		cout<<"������ѧ���༶:";
		cin>>p->classn;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p;
		}
		q=p;
		p->next=NULL;	 
	}
	p=head;
	while(p!=NULL)
	{
		cout<<p->name<<endl;
		cout<<p->num<<endl;
		cout<<p->age<<endl;
		cout<<p->classn<<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
	return 0;
}




