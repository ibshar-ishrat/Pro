#include "Computers.h"
#include <iostream>
#include <string>
class Laptops:public Computers
{
protected:
	string display;
	string camera;
Laptops()
{
display="";
camera="";
}

};
class Hewlett_Packard:public Laptops
{
public:
	Hewlett_Packard *next;
	Hewlett_Packard()
	{
	cout<<"Enter Specifications of the Laptop"<<endl<<endl;
    cout<<"Model name:"<<endl;
	cin>>model_name;
	cout<<"Operating System:"<<endl;
	cin>>operating_system;
	cout<<"Processor:"<<endl;
	cin>>processor;
	cout<<"Processor Speed:"<<endl;
	cin>>processor_speed;
	cout<<"Memory:"<<endl;
	cin>>memory;
	cout<<"Hard Drive:"<<endl;
	cin>>hard_drive;
	cout<<"Graphics Card:"<<endl;
	cin>>graphics_card;
	cout<<"Color:"<<endl;
	cin>>color;
	cout<<"Weight:"<<endl;
	cin>>weight;
	cout<<"Price:"<<endl;
	cin>>price;
	item_number++;
	next=NULL;
	}
	void Display()
	{
	cout<<"---LAPTOP SPECIFICATIONS---"<<endl<<endl;
	cout<<"Model name:"<<model_name<<endl;
	cout<<"Operating System:"<<operating_system<<endl;
	cout<<"Processor:"<<processor<<endl;	
	cout<<"Processor speed:"<<processor_speed<<endl;
	cout<<"Memory:"<<memory<<endl;
	cout<<"Hard Drive:"<<hard_drive<<endl;
	cout<<"Graphics Card:"<<graphics_card<<endl;
	cout<<"Color:"<<color<<endl;
	cout<<"Weight:"<<weight<<endl;
	cout<<"Price:"<<price<<endl;
	}
	string get_Price()
	{
		return price;
	}
	string get_Model_name()
	{
		return model_name;
	}
	string get_Color()
	{
		return color;
	}
};
class Dell:public Laptops
{
public:
	Dell *next;
	Dell()
	{
	cout<<"Enter Specifications of the Laptop"<<endl<<endl;
    cout<<"Model name:"<<endl;
	cin>>model_name;
	cout<<"Operating System:"<<endl;
	cin>>operating_system;
	cout<<"Processor:"<<endl;
	cin>>processor;
	cout<<"Processor Speed:"<<endl;
	cin>>processor_speed;
	cout<<"Memory:"<<endl;
	cin>>memory;
	cout<<"Hard Drive:"<<endl;
	cin>>hard_drive;
	cout<<"Graphics Card:"<<endl;
	cin>>graphics_card;
	cout<<"Color:"<<endl;
	cin>>color;
	cout<<"Weight:"<<endl;
	cin>>weight;
	cout<<"Price:"<<endl;
	cin>>price;
	item_number++;
	next=NULL;
	}
	void Display()
	{
	cout<<"---LAPTOP SPECIFICATIONS---"<<endl<<endl;
	cout<<"Model name:"<<model_name<<endl;
	cout<<"Operating System:"<<operating_system<<endl;
	cout<<"Processor:"<<processor<<endl;	
	cout<<"Processor speed:"<<processor_speed<<endl;
	cout<<"Memory:"<<memory<<endl;
	cout<<"Hard Drive:"<<hard_drive<<endl;
	cout<<"Graphics Card:"<<graphics_card<<endl;
	cout<<"Color:"<<color<<endl;
	cout<<"Weight:"<<weight<<endl;
	cout<<"Price:"<<price<<endl;
	}
	string get_Price()
	{
		return price;
	}
	string get_Model_name()
	{
		return model_name;
	}
	string get_Color()
	{
		return color;
	}
};
class Lenovo:public Laptops
{
public:
	Lenovo *next;
	Lenovo()
	{
	cout<<"Enter Specifications of the Laptop"<<endl<<endl;
    cout<<"Model name:"<<endl;
	cin>>model_name;
	cout<<"Operating System:"<<endl;
	cin>>operating_system;
	cout<<"Processor:"<<endl;
	cin>>processor;
	cout<<"Processor Speed:"<<endl;
	cin>>processor_speed;
	cout<<"Memory:"<<endl;
	cin>>memory;
	cout<<"Hard Drive:"<<endl;
	cin>>hard_drive;
	cout<<"Graphics Card:"<<endl;
	cin>>graphics_card;
	cout<<"Color:"<<endl;
	cin>>color;
	cout<<"Weight:"<<endl;
	cin>>weight;
	cout<<"Price:"<<endl;
	cin>>price;
	item_number++;
	next=NULL;
	}
	void Display()
	{
	cout<<"---LAPTOP SPECIFICATIONS---"<<endl<<endl;
	cout<<"Model name:"<<model_name<<endl;
	cout<<"Operating System:"<<operating_system<<endl;
	cout<<"Processor:"<<processor<<endl;	
	cout<<"Processor speed:"<<processor_speed<<endl;
	cout<<"Memory:"<<memory<<endl;
	cout<<"Hard Drive:"<<hard_drive<<endl;
	cout<<"Graphics Card:"<<graphics_card<<endl;
	cout<<"Color:"<<color<<endl;
	cout<<"Weight:"<<weight<<endl;
	cout<<"Price:"<<price<<endl;
	}
	string get_Price()
	{
		return price;
	}
	string get_Model_name()
	{
		return model_name;
	}
	string get_Color()
	{
		return color;
	}
};
class Apple:public Laptops
{
public:
	Apple *next;
	Apple()
	{
	cout<<"Enter Specifications of the Laptop"<<endl<<endl;
    cout<<"Model name:"<<endl;
	cin>>model_name;
	cout<<"Operating System:"<<endl;
	cin>>operating_system;
	cout<<"Processor:"<<endl;
	cin>>processor;
	cout<<"Processor Speed:"<<endl;
	cin>>processor_speed;
	cout<<"Memory:"<<endl;
	cin>>memory;
	cout<<"Hard Drive:"<<endl;
	cin>>hard_drive;
	cout<<"Graphics Card:"<<endl;
	cin>>graphics_card;
	cout<<"Color:"<<endl;
	cin>>color;
	cout<<"Weight:"<<endl;
	cin>>weight;
	cout<<"Price:"<<endl;
	cin>>price;
	item_number++;
	next=NULL;
	}
	void Display()
	{
	cout<<"---LAPTOP SPECIFICATIONS---"<<endl<<endl;
	cout<<"Model name:"<<model_name<<endl;
	cout<<"Operating System:"<<operating_system<<endl;
	cout<<"Processor:"<<processor<<endl;	
	cout<<"Processor speed:"<<processor_speed<<endl;
	cout<<"Memory:"<<memory<<endl;
	cout<<"Hard Drive:"<<hard_drive<<endl;
	cout<<"Graphics Card:"<<graphics_card<<endl;
	cout<<"Color:"<<color<<endl;
	cout<<"Weight:"<<weight<<endl;
	cout<<"Price:"<<price<<endl;
	}
	string get_Price()
	{
		return price;
	}
	string get_Model_name()
	{
		return model_name;
	}
	string get_Color()
	{
		return color;
	}
};
template <class rtype>	
class Laptops_Database
{
protected:
	rtype *list;
public:
	Laptops_Database()
	{
		list=NULL;
	}
	void New_Item () 
	{
	rtype *r= new rtype;
	rtype *temp=list;
	if(list==NULL)
	{
		list=r;
	}
	else
	{
		while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		temp->next=r;
	}
	cout<<"New Laptop added"<<endl;
	}
	void Display_All_With_Specs()
	{
		if(list==NULL)
			cout<<"No record...";
		else
		{
			rtype *current=list;
			while(current!=NULL)
			{
				current->Display();
				current=current->next;
			}

		}
		
	}

};

