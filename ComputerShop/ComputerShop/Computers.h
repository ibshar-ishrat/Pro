#include<iostream>
#include<string>
using namespace std;
class Computers
{
protected:
	string operating_system;
	string processor;
	string processor_speed;
	string memory;
	string hard_drive;
	string model_name;
	string graphics_card;
	string color;
	string price;
	string weight;
	static int item_number;
public:
	//virtual void Description();
	//virtual void Import_Item();
	//virtual void Export_Item();
	//void New_Item();
	//virtual void Delivery_Option();
	//virtual void Working_Condition();
	//virtual void Modify_Item();
	//virtual void Delete_Item();
	//virtual void Search_Item();
Computers()
{
	operating_system="";
	processor="";
	memory="";
	hard_drive="";
	graphics_card="";
	color="";
	price="";
	weight="";
}
};
int Computers::item_number=0;

