#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class invent1
{
	int code;
	int item;
	float price;
	public:
		invent1(int a,int b,float c)
		{
			code=a;
			item=b;
			price=c;
		}
		void putdata()
		{
			cout<<code<<"\n"<<item<<"\n"<<price;
		}
		int getcode()
		{
			return code;
		}
		int getitem()
		{
			return item;
		}
		float getprice()
		{
			return price;
		}
};
class invent2
{
	int code;
	float value;

	public:
		invent2()
		{
			code=0;
			value=0;
		}
		void putdata()
		{
			cout<<"code:"<<code<<"\nvalue:"<<value;
		}
		invent2(invent1 p)
		{
			code=p.getcode();
			value=p.getitem()*p.getprice();
		}
};
void main()
{
	clrscr();
	invent1 i(1,5,100);
	invent2 d;
	d=i;
	d.putdata();
	getch();
}
