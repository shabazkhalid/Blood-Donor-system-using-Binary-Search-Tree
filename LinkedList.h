#include<iostream>
#include"Node.h"
#include<conio.h>
#include <cstdlib>
using namespace std;
template<class T>
class LinkedList
{
private:

	Node<T>* root;
public:
	LinkedList();
void insert(string n,string b,string d,string ad,int m,int i);

	void print(Node<T>*ptr);
 	void Search(Node<T>*ptr,int id);
	//Node<T> *Search1(int no);
		void userarea();
		void administrator();
		void adminmenu();
		void remove(int no);
		void update(Node<T>*ptr,int key);
//void deletesame(int no);
	int menu();


};

template<class T>
LinkedList<T>::LinkedList()
{
	root=NULL;
}



template<class T>
int LinkedList<T>::menu()
{
    cout<<":::::::::::::::::::::::::::::::Donor System:::::::::::::::::::::::::::::::::::::"<<endl;
int no;
cout<<endl;
	cout<<"1-For User Area\n";
	cout<<"2-For Administrator Area\n";
	cout<<"0-Exit\n";

cin>>no;
return no;
}
template<class T>
 void LinkedList<T>::userarea()
 {
     char no1;
     int press;
     cout<<endl;
cout<<":::::::::::::::::::User Area:::::::::::::::\n";
cout<<endl;
cout<<"1-For Add Donation\n";
cout<<"2-For Request\n";
cout<<"3-For Search Donor\n";
cout<<"4-For View Donation/Request\n";
cout<<"0-For Exit\n";
cout<<endl;
cin>>press;

while(press!=0)
{
    if(press==1)

    {
        int id;
    int Data,key;
	string name;
	string blood;
	string date;
	string address;
	int mobile;
	int key3;
cout<<":::::ADD DONAION:::::"<<endl<<endl;
		      id=rand()%100;
         cout<<"ID="<<id<<endl;
		cout<<"Please enter the name"<<endl;
		cin>>name;
		cout<<"please enter the blood Group"<<endl;
		cin>>blood;
		cout<<"please enter the last date of donation"<<endl;
		cin>>date;
		cout<<"please enter the Address of donor"<<endl;
		cin>>address;
		cout<<"please enter the Mobile Number"<<endl;
		cin>>mobile;
        insert(name,blood,date,address,mobile,id);
        cout<<endl;
        cout<<"you want to post donation again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
        if (no1=='y')
        {

        }
        else{
          userarea();
        }
    }
        if(press==2)
    {

        int Data,key,id;
	string name;
	string blood;
	string date;
	string address;
	int mobile;
cout<<":::::ADD Request:::::"<<endl<<endl;
		     id=rand()%100;
         cout<<"ID="<<id<<endl;
		cout<<"Please enter the name"<<endl;
		cin>>name;
		cout<<"please enter the blood Group"<<endl;
		cin>>blood;
		cout<<"please enter the last date of donation"<<endl;
		cin>>date;
		cout<<"please enter the Address of donor"<<endl;
		cin>>address;
		cout<<"please enter the Mobile Number"<<endl;
		cin>>mobile;
        insert(name,blood,date,address,mobile,id);
        cout<<endl;
          cout<<"you want to  Search again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
         if (no1=='y')
        {

        }
        else{
          userarea();
        }



    }

        if(press==3)
    {
        int key;

        cout<<":::::SEARCH:::::"<<endl<<endl;
        cout<<"please enter the ID for search donor"<<endl;
        cin>>key;
        Search(root,key);
         cout<<endl;
        cout<<"you want to  Search again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
         if (no1=='y')
        {

        }
        else{
          userarea();
        }
    }

      if(press==4)
{

        int key;

        cout<<":::::SEARCH POST:::::"<<endl<<endl;
        cout<<"please enter the mobile number for search your post"<<endl;
        cin>>key;
        Search(root,key);
        cout<<endl;
        cout<<"you want to  Search again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
         if (no1=='y')
        {

        }
        else{
          userarea();
        }
}
if(press==0)
{
    menu();
}


}
}
template<class T>
void LinkedList<T>::insert(string n,string b,string d,string ad,int m,int i)
{
    Node<T>*nptr=new Node<T>(n,b,d,ad,m,i,NULL,NULL);
Node<T>*temp=root;

if (root==NULL)
{
    cout<<"yes"<<endl;
    root=nptr;

}
else
{

while(temp!=NULL)
{

if(nptr->Getid()<temp->Getid()&&temp->Getleft()==NULL)
{
   temp->Setleft(nptr);
    break;
}
else
    if(nptr->Getid()>temp->Getid()&&temp->Getright()==NULL)
{
    temp->Setright(nptr);
    break;
}
else
    if(nptr->Getid()<temp->id&&temp->Getleft()!=NULL)
{
    temp=temp->Getleft();
}

else
    if(nptr->Getid()>temp->id&&temp->Getright()!=NULL)
{
    temp=temp->Getright();
}

}
}
}



template<class t>
void LinkedList<t>::administrator()
{
    string pass="";
char check1;
cout<<"Please Enter the Password for Login"<<endl<<endl;
check1=_getch();
while(check1!=13)
{

pass.push_back(check1);
cout<<"*";
check1=_getch();

}
if(pass=="shabaz")
{

adminmenu();
}
else
    {
     char check;
cout<<endl;
cout<<"Incorrect Password!"<<endl;
cout<<"you want to Retry [press (y) and (n) for back to menu"<<endl;
cin>>check;
if(check=='y')
{
    administrator();
}
else
{
    return;
}
}


}
template<class t>
void LinkedList<t>::adminmenu()
{


    cout<<endl;
    cout<<"::::::Administrator Area::::"<<endl<<endl;

cout<<endl;
cout<<"1-For ADD Donors\n";
cout<<"2-For check Donors\n";
cout<<"3-For check Request\n";
cout<<"4-For Print Donor List\n";
cout<<"5-For Remove Donor\n";
cout<<"6-For Update Donor\n";
cout<<"0-For Exit\n";
cout<<endl;
int num;
cin>>num;

if(num==1)
{
    char no1;
int Data,key;
	string name;
	string blood;
	string date;
	string address;
	int mobile;
	int id;

cout<<":::::ADD DONAION:::::"<<endl<<endl;
         id=rand()%100;
         cout<<"ID="<<id<<endl;
		cout<<"Please enter the name"<<endl;
		cin>>name;
		cout<<"please enter the blood Group"<<endl;
		cin>>blood;
		cout<<"please enter the last date of donation"<<endl;
		cin>>date;
		cout<<"please enter the Address of donor"<<endl;
		cin>>address;
		cout<<"please enter the Mobile Number"<<endl;
		cin>>mobile;
        insert(name,blood,date,address,mobile,id);
        cout<<endl;
        cout<<"you want to post donation again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
        if (no1=='y')
        {
adminmenu();
        }
        else
        {

            adminmenu();
        }

}
else
if(num==2)

{
    char no1;
  int key;

        cout<<":::::SEARCH Donor:::::"<<endl<<endl;
        cout<<"please enter the Donor ID for search your Search"<<endl;
        cin>>key;
        Search(root,key);
         cout<<endl;
        cout<<"you want to  Search again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
         if (no1=='y')
        {
adminmenu();
        }
        else{
          adminmenu();
        }
}
if(num==4)
{
    char no1;
    cout<<":::::Print List:::::"<<endl<<endl;
    print(root);
         cout<<endl;
        cout<<"you want to  Search again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
         if (no1=='y')
        {
adminmenu();
        }
        else{
          adminmenu();
        }
}
if (num==5)
{
int key;
     char no1;
    cout<<":::::Delete Donor:::::"<<endl<<endl;
    cout<<"Enter the mobile number for Deletion"<<endl;
    cin>>key;
   remove(key);
         cout<<endl;
        cout<<"you want to  Search again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
         if (no1=='y')
        {
adminmenu();
        }
        else{
          adminmenu();
        }

}
if (num==6)
{
int key;
     char no1;
    cout<<":::::Update Donor:::::"<<endl<<endl;
    cout<<"Enter the ID for Updation"<<endl;
    cin>>key;
    update(root,key);
         cout<<endl;
        cout<<"you want to  Search again?[press (y)for Yes & (n) for NO]"<<endl;
        cin>>no1;
         if (no1=='y')
        {
adminmenu();
        }
        else{
          adminmenu();
        }

}
}


template<class T>
void LinkedList<T>::print(Node<T>*ptr)
{
Node<T>*temp1=ptr;
if (temp1 != NULL)
{
	print(temp1->left);  // L
	     cout<<"Id="<<temp1->Getid()<<endl;
	    cout<<"Name="<<temp1->Getname()<<endl;
		cout<<"Blood Group="<<temp1->Getblood()<<endl;
		cout<<"Last Date="<<temp1->Getdate()<<endl;
		cout<<"Address="<<temp1->Getaddress()<<endl;
		cout<<"Mobile="<<temp1->Getmobile()<<endl; // V
	print(temp1->right); // R
}

}
template<class T>
void LinkedList<T>::Search(Node<T>*ptr,int i)
{
Node<T>*temp1=ptr;
if (temp1->Getid()==NULL||i==temp1->Getid())
{
       cout<<"ID="<<temp1->Getid()<<endl;
       cout<<"Name="<<temp1->Getname()<<endl;
		cout<<"Blood Group="<<temp1->Getblood()<<endl;
		cout<<"Last Date="<<temp1->Getdate()<<endl;
		cout<<"Address="<<temp1->Getaddress()<<endl;
		cout<<"Mobile="<<temp1->Getmobile()<<endl;
return;
}
if(i<temp1->Getid())
{
    Search(temp1=temp1->Getleft(),i);
}
else
   Search(temp1=temp1->Getright(),i);

}

template <class T>
void LinkedList<T>::remove(int d)
{
    //Locate the element
    bool found = false;
/*    if(isEmpty())
    {

        cout<<" This Tree is empty! "<<endl;
        return;
    }*/
    Node<T>* curr;
    Node<T>* parent;
    curr = root;
    while(curr != NULL)
    {
         if(curr->Getid() == d)
         {
            found = true;
            break;
         }
         else
         {
             parent = curr;
             if(d>curr->Getid()) curr = curr->right;
             else curr = curr->left;
         }
    }
    if(!found)
		 {
        cout<<" Data not found! "<<endl;
        return;
    }


		 // 3 cases :
    // 1. We're removing a leaf node
    // 2. We're removing a node with a single child
    // 3. we're removing a node with 2 children

    // Node with single child
    if((curr->left == NULL && curr->right != NULL)|| (curr->left != NULL
&& curr->right == NULL))
    {
       if(curr->left == NULL && curr->right != NULL)
       {
           if(parent->left == curr)
           {
             parent->left = curr->right;
             delete curr;
           }
           else
           {
             parent->right = curr->right;
             delete curr;
           }
       }
       else // left child present, no right child
       {
          if(parent->left == curr)
           {
             parent->left = curr->left;
             delete curr;
           }
           else
           {
             parent->right = curr->left;
             delete curr;
           }
       }
     return;
    }

		 //We're looking at a leaf node
		 if( curr->left == NULL && curr->right == NULL)
    {
        if(parent->left == curr) parent->left = NULL;
        else parent->right = NULL;
		 		 delete curr;
		 		 return;
    }


    //Node with 2 children
    // replace node with smallest value in right subtree
    if (curr->left != NULL && curr->right != NULL)
    {
        Node<T>* chkr;
        chkr = curr->right;
        if((chkr->left == NULL) && (chkr->right == NULL))
        {
            curr = chkr;
            delete chkr;
            curr->right = NULL;
        }
        else // right child has children
        {
            //if the node's right child has a left child
            // Move all the way down left to locate smallest element

            if((curr->right)->left != NULL)
            {
                Node<T>* lcurr;
                Node<T>* lcurrp;
                lcurrp = curr->right;
                lcurr = (curr->right)->left;
                while(lcurr->left != NULL)
                {
                   lcurrp = lcurr;
                   lcurr = lcurr->left;
                }
		 		 		 		 curr->id = lcurr->id;
                delete lcurr;
                lcurrp->left = NULL;
           }
           else
           {
               Node<T>* tmp;
               tmp = curr->right;
               curr->id = tmp->id;
		 		 		    curr->right = tmp->right;
               delete tmp;
           }

        }
		 return;
    }

}

template<class T>
void LinkedList<T>::update(Node<T>*ptr,int i)
{
    char op;
        int Data,key;
	string name;
	string blood;
	string date;
	string address;
	int mobile;
Node<T>*temp1=ptr;
if (temp1->Getid()==NULL||i==temp1->Getid())
{
       cout<<"ID="<<temp1->Getid()<<endl;
       cout<<"Name="<<temp1->Getname()<<endl;
		cout<<"Blood Group="<<temp1->Getblood()<<endl;
		cout<<"Last Date="<<temp1->Getdate()<<endl;
		cout<<"Address="<<temp1->Getaddress()<<endl;
		cout<<"Mobile="<<temp1->Getmobile()<<endl;
		cout<<"you want to update this existing donor information press[y] else press[n]"<<endl<<endl;
           cin>>op;
           if(op=='y')
           {
               cout<<"Please enter the name"<<endl;
		cin>>name;
		cout<<"please enter the blood Group"<<endl;
		cin>>blood;
		cout<<"please enter the last date of donation"<<endl;
		cin>>date;
		cout<<"please enter the Address of donor"<<endl;
		cin>>address;
		cout<<"please enter the Mobile Number"<<endl;
		cin>>mobile;
        temp1->Setname(name);
         temp1->Setblood(blood);
          temp1->SetDate(date);
           temp1->Setaddress(address);
           temp1->Setmobile(mobile);
        cout<<endl;
            return ;

            }
             else
                return;
}
if(i<temp1->Getid())
{
    Search(temp1=temp1->Getleft(),i);
}
else
   Search(temp1=temp1->Getright(),i);
cout<<"Not Found"<<endl;
}
