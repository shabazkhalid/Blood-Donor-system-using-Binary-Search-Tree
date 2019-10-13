#include<iostream>
#include"LinkedList.h"

using namespace std;

int main()
{
int r;
int op;
	LinkedList<int> listt;
	while(r!=0)
    {

	int op=listt.menu();
	r=op;

	if(op==1)
    {
listt.userarea();
    }
    else
     if(op==2)
     {
   listt.administrator();
     }
    /* if(op==3)
     {
        cout<<"Enter Data : ";
		cin>>Data;
		cout<<"enter key:";
		cin>>key;
		listt.insertafter(Data,key);
     }
     if(op==4)
     {
        cout<<"Enter Data : ";
		cin>>Data;
		cout<<"enter key:";
		cin>>key;
		listt.insertbefore(Data,key);
     }*/

    if(op==5)
    {
//        listt.print();
    }
    }

}
