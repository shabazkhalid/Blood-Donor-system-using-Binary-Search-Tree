using namespace std;
template<class T>
class Node
{
public:
    string name;
	string bloodgrp;
	string date;
	string address;
	int mobile;
	int id;
  Node *left;
  Node *right;
public:
	Node(string n, string b,string d,string ad ,int m,int i,Node *ptr,Node*ptr1)
	{
		name=n;
		bloodgrp=b;
		date=d;
		address=ad;
		mobile=m;
		id=i;
		left=ptr;
		right=ptr1;

	}
	void Setblood(string b)
	{
		bloodgrp=b;
	}

	string Getblood()
	{
		return bloodgrp;
	}


	void Setmobile(int m)
	{
		mobile=m;
	}

	int Getmobile()
	{
		return mobile;
	}


	void Setaddress(string a)
	{
		address=a;
	}

	string Getaddress()
	{
		return address ;
	}

	void Setname(string n)
	{
		name=n;
	}

	string Getname()
	{
		return name;
	}


	void SetDate(string d)
	{
		date=d;
	}

	string Getdate()
	{
		return date;
	}


	void Setid(int i)
	{
		id=i;
	}

	int Getid()
	{
		return id;
	}
	Node * Getleft()
	{
		return left;
	}
	void Setleft(Node *ptr)
	{
		left=ptr;
	}
	void Setright(Node *ptr1)
	{
		right=ptr1;
	}
	Node * Getright()
	{
		return right;
	}
};
