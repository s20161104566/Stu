// Stu.cpp : 定义控制台应用程序的入口点。
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
	while(cout<<"输入or结束"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"请输入学生姓名:";
		cin>>p->name;
		cout<<"请输入学生学号:";
		cin>>p->num;
		cout<<"请输入学生年龄:";
		cin>>p->age;
		cout<<"请输入学生班级:";
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




