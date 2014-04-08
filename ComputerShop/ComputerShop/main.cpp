#include<iostream>
#include"Laptops.h"
using namespace std;
void main()
{
Laptops_Database<Hewlett_Packard> hp1;
hp1.New_Item();
hp1.New_Item();
hp1.Display_All_With_Specs();
}