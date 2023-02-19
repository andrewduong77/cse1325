#ifndef CATALOG_H
#define CATALOG_H
#include <vector>
#include "customer.h"
#include "sales_associate.h"
#include "robot.h"
using namespace std;

class Catalog
{
	public:
	void add_model(Robot_model model);
	void add_head(Head head);
	void add_torso(Torso torso);
	void add_arm(Arm arm);
	void add_locomotor(Locomotor locomotor);
	void add_battery(Battery battery);
	//void add_customer(Customer cus);
	//void add_associate(Sales_associate ass);

	string customer_to_string(int customer_number);
	string robot_model_to_string(int model_index);
	string robot_model_name(int index);
	string head_to_string(int head_index);
	string torso_to_string(int torso_index);
	string arm_to_string(int arm_index);
	string locomotor_to_string(int locomotor_index);
	string battery_to_string(int battery_index);

	int model_vector_size();
	int head_vector_size();
	int torso_vector_size();
	int arm_vector_size();
	int locomotor_vector_size();
	int battery_vector_size();
	int robot_model_vector_size();

	Robot_model* get_model(int model_index);
	Head* get_head(int head_index);
	Torso* get_torso(int torso_index);
	Arm* get_arm(int arm_index);
	Locomotor* get_locomotor(int locomotor_index);
	Battery* get_battery(int battery_index);

	string catalog_to_string();
	void save_catalog(ostream& ofs);

	private:
	vector<Robot_model> robot_model_vector;
	vector<Head> head_part_vector;
	vector<Torso> torso_part_vector;
	vector<Arm> arm_part_vector;
	vector<Locomotor> locomotor_part_vector;
	vector<Battery> battery_part_vector;
	//vector<Customer> customer_vector;
	//vector<SalesAssociate> associate_vector;
};

#endif
