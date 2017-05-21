#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"\t\tConverter\n";
	cout<<"Choice is 1 to 5.\nPress 1 for change Pakistani Rupees into other.\nPress 2 for chnage Kuwaiti Dinar into other.\nPress 3 for change British Pound into other.\n";
	cout<<"Press 4 For change US Dollar into other.\nPress 5 for change Saudi Reyal into other.";
	cout<<"\nEnter your choice=";
	cin>>y;
	if(y==1)
	{
			int x;
	double a,c;
	cout<<"Enter your amount in Pakistani Rupees=";
	cin>>a;
	cout<<"Choice is 1 to 4.\npress 1 for US Dollar.\nPress 2 for British Pound.\npress 3 for Saudi Reyal.\npress 4 for Kuwaiti Dinar.";
	cout<<"\nEnter your choice=";
	cin>>x;
	if (x==1)
	{
		c=a/105;
	cout<<a<<"<=into US Dollar=>"<<c;
	}
	else if (x==2)
	{
		c=a/250;
	cout<<a<<"<=into British Pound=>"<<c;
	}
	else if (x==3)
	{
		c=a/25;
	cout<<a<<"<=into Saudi Reyal=>"<<c;
	}
	else if (x==4)
	{
		c=a/350;
	cout<<a<<"<=into Kuwaiti Dinar=>"<<c;
	}
	else
	{
		cout<<"Error";
	}
	cout<<"\nNote:\nErrors in Price Rates can be Neglect.";
	}
	else if(y==2)
	{
		int x;
	double a,c;
	cout<<"Enter your amount in Kuwaiti Dinar=";
	cin>>a;
	cout<<"Choice is 1 to 4.\npress 1 for Pakistani Rupees.\nPress 2 for US Dollar.\npress 3 for British Pound.\npress 4 for Saudi Reyal.";
	cout<<"\nEnter your choice=";
	cin>>x;
	if (x==1)
	{
		c=a/0.0029;
	cout<<a<<"<=into Pakistani Rupees=>"<<c;
	}
	else if (x==2)
	{
		c=a/0.30;
	cout<<a<<"<=into US Dollar=>"<<c;
	}
	else if (x==3)
	{
		c=a/0.38;
	cout<<a<<"<=into British Pound=>"<<c;
	}
	else if (x==4)
	{
		c=a/0.081;
	cout<<a<<"<=into Saudi Reyal=>"<<c;
	}
	else
	{
		cout<<"Error";
	}
	cout<<"\nNote:\nErrors in Price Rates can be Neglect.";	
	}
	else if(y==3)
	{
			int x;
	double a,c;
	cout<<"Enter your amount in British Pound=";
	cin>>a;
	cout<<"Choice is 1 to 4.\npress 1 for Pakistani Rupees.\nPress 2 for US Dollar.\npress 3 for Saudi Reyal.\npress 4 for Kuwaiti Dinar.";
	cout<<"\nEnter your choice=";
	cin>>x;
	if (x==1)
	{
		c=a/0.0076;
	cout<<a<<"<=into Pakistani Rupees=>"<<c;
	}
	else if (x==2)
	{
		c=a/0.80;
	cout<<a<<"<=into US Dollar=>"<<c;
	}
	else if (x==3)
	{
		c=a/0.21;
	cout<<a<<"<=into Saudi Reyal=>"<<c;
	}
	else if (x==4)
	{
		c=a/2.61;
	cout<<a<<"<=into Kuwaiti Dinar=>"<<c;
	}
	else
	{
		cout<<"Error";
	}
	cout<<"\nNote:\nErrors in Price Rates can be Neglect.";
	}
	else if(y==4)
	{
			int x;
	double a,c;
	cout<<"Enter your amount in US Dollar=";
	cin>>a;
	cout<<"Choice is 1 to 4.\npress 1 for Pakistani Rupees.\nPress 2 for British Pound.\npress 3 for Saudi Reyal.\npress 4 for Kuwaiti Dinar.";
	cout<<"\nEnter your choice=";
	cin>>x;
	if (x==1)
	{
		c=a/0.0095;
	cout<<a<<"<=into Pakistani Rupees=>"<<c;
	}
	else if (x==2)
	{
		c=a/1.25;
	cout<<a<<"<=into British Pound=>"<<c;
	}
	else if (x==3)
	{
		c=a/0.27;
	cout<<a<<"<=into Saudi Reyal=>"<<c;
	}
	else if (x==4)
	{
		c=a/3.28;
	cout<<a<<"<=into Kuwaiti Dinar=>"<<c;
	}
	else
	{
		cout<<"Error";
	}
	cout<<"\nNote:\nErrors in Price Rates can be Neglect.";
	}
	else if(y==5)
	{
			int x;
	double a,c;
	cout<<"Enter your amount in Saudi Reyal=";
	cin>>a;
	cout<<"Choice is 1 to 4.\npress 1 for Pakistani Rupees.\nPress 2 for US Dollar.\npress 3 for British Pound.\npress 4 for Kuwaiti Dinar.";
	cout<<"\nEnter your choice=";
	cin>>x;
	if (x==1)
	{
		c=a/0.036;
	cout<<a<<"<=into Pakistani Rupees=>"<<c;
	}
	else if (x==2)
	{
		c=a/3.75;
	cout<<a<<"<=into US Dollar=>"<<c;
	}
	else if (x==3)
	{
		c=a/4.70;
	cout<<a<<"<=into British Pound=>"<<c;
	}
	else if (x==4)
	{
		c=a/12.30;
	cout<<a<<"<=into Kuwaiti Dinar=>"<<c;
	}
	else
	{
		cout<<"Error";
	}
	cout<<"\nNote:\nErrors in Price Rates can be Neglect.";
	}
	else
	{
		cout<<"Choice is 1 to 5 please press between numbers.";
	}
	return 0;
}
