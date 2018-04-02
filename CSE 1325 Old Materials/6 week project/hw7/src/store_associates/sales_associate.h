#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class Sales_associate
{
	public :
		Sales_associate(string name, int employee_number) : _name(name), _employee_number(employee_number) {}
		string to_string();
		string get_name();
		void save_sales_associate(ostream& ofs);
		int get_employee_number();
	private :
		string _name;
		int _employee_number;
};

