#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <ctype.h>
#include <iostream>
#include <string>
#include <sstream>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_File_Chooser.H>
#include "catalog.h"
#include "store.h"
#include "sales_associate.h"


Store store;

bool int_validation(string input);
bool double_validation(string input);
void robot_part_dialog_showCB(Fl_Widget* w, void* p);
void robot_part_dialog_hideCB(Fl_Widget* w, void* p);
void robot_head_dialog_showCB(Fl_Widget* w, void* p);
void robot_head_dialog_hideCB(Fl_Widget* w, void* p);
void create_robot_headCB(Fl_Widget* w, void* p);
void robot_arm_dialog_showCB(Fl_Widget* w, void* p);
void robot_arm_dialog_hideCB(Fl_Widget* w, void* p);
void create_robot_armCB(Fl_Widget* w, void* p);
void robot_torso_dialog_showCB(Fl_Widget* w, void* p);
void robot_torso_dialog_hideCB(Fl_Widget* w, void* p);
void create_robot_torsoCB(Fl_Widget* w, void* p);
void robot_locomotor_dialog_showCB(Fl_Widget* w, void* p);
void robot_locomotor_dialog_hideCB(Fl_Widget* w, void* p);
void create_robot_locomotorCB(Fl_Widget* w, void* p);
void robot_battery_dialog_showCB(Fl_Widget* w, void* p);
void robot_battery_dialog_hideCB(Fl_Widget* w, void* p);
void create_robot_batteryCB(Fl_Widget* w, void* p);
void show_robot_partsCB(Fl_Widget* w, void* p);
void show_head_imgCB(Fl_Widget* w, void* p);
void robot_model_dialog_showCB(Fl_Widget* w, void* p);
void robot_model_dialog_hideCB(Fl_Widget* w, void* p);
void create_robot_modelCB(Fl_Widget* w, void* p);
void show_robot_models_dialogCB(Fl_Widget* w, void* p);
void hide_robot_models_dialogCB(Fl_Widget* w, void* p);
void show_model_imgCB(Fl_Widget* w, void* p);
void show_torso_imgCB(Fl_Widget* w, void* p);
void show_locomotor_imgCB(Fl_Widget* w, void* p);
void show_battery_imgCB(Fl_Widget* w, void* p);
void show_arm_imgCB(Fl_Widget* w, void* p);
void create_sales_associateCB(Fl_Widget* w, void* p);
void sales_associate_dialog_showCB(Fl_Widget* w, void* p);
void cancel_sales_associateCB(Fl_Widget* w, void* p);
void create_customerCB(Fl_Widget* w, void *p);
void cancel_customerCB(Fl_Widget* w,void *p);
void customer_dialog_showCB(Fl_Widget* w, void* p);
void show_order_dialogCB(Fl_Widget* w, void* p);
void cancel_order_dialogCB(Fl_Widget* w, void* p);
void show_ordersCB(Fl_Widget* w, void* p);
void create_orderCB(Fl_Widget* w, void* p);
void open_fileCB(Fl_Widget* w, void* p);
void save_fileCB(Fl_Widget* w, void* p);

void show_sales_associatesCB(Fl_Widget* w, void* p);
void show_customersCB(Fl_Widget* w, void* p);

void save_orderCB(Fl_Widget* w, void* p);
void state1CB(Fl_Widget* w, void* p);
void state2CB(Fl_Widget* w, void* p);
void state3CB(Fl_Widget* w, void* p);
void state4CB(Fl_Widget* w, void* p);
void state5CB(Fl_Widget* w, void* p);
void cancel_orderCB(Fl_Widget* w, void* p);
void cancel_order_management_dialogCB(Fl_Widget* w, void* p);
void show_sales_reportCB(Fl_Widget* w, void* p);
void test_windowCB(Fl_Widget* w, void* p);
void show_invoiceCB(Fl_Widget* w, void* p);

class Input : public Fl_Input //new Fl_Input widget that incorporates copy/paste
{
    static void Copy_CB(Fl_Widget*, void* p)
    {
        Input *in = (Input*)p;
        in->copy(0);
        in->copy(1);
    }
    static void Paste_CB(Fl_Widget*, void* p)
    {
        Input *in = (Input*)p;
        Fl::paste(*in, 1);
    }
public:
    int handle(int e)
    {
    switch(e){
    case FL_PUSH:
    {
        if(Fl::event_button() == FL_RIGHT_MOUSE){
            Fl_Menu_Item rclick_menu[] = {
                {"Copy", 0, Copy_CB, (void*)this},
                {"Paste", 0, Paste_CB, (void*)this},
                {0}
            };

            const Fl_Menu_Item *m = rclick_menu->popup(Fl::event_x(), Fl::event_y(), 0, 0, 0);
            if(m) m->do_callback(0, m->user_data());
            return(1);
        }
        break;
        }
    case FL_RELEASE:
        {
        if(Fl::event_button() == FL_RIGHT_MOUSE){
            return(1);
        }
        break;
        }
    }
    return(Fl_Input::handle(e));
    }
    Input(int X, int Y, int W, int H, const char*L=0):Fl_Input(X, Y, W, H, L){}
};
//Copy/Paste class for Multiline Input
class Multiline_Input : public Fl_Multiline_Input
{
    static void Copy_CB(Fl_Widget*, void* p)
    {
        Input *in = (Input*)p;
        in->copy(0);
        in->copy(1);
    }
    static void Paste_CB(Fl_Widget*, void* p)
    {
        Input *in = (Input*)p;
        Fl::paste(*in, 1);
    }
public:
    int handle(int e)
    {
    switch(e){
    case FL_PUSH:
    {
        if(Fl::event_button() == FL_RIGHT_MOUSE){
            Fl_Menu_Item rclick_menu[] = {
                {"Copy", 0, Copy_CB, (void*)this},
                {"Paste", 0, Paste_CB, (void*)this},
                {0}
            };

            const Fl_Menu_Item *m = rclick_menu->popup(Fl::event_x(), Fl::event_y(), 0, 0, 0);
            if(m) m->do_callback(0, m->user_data());
            return(1);
        }
        break;
        }
    case FL_RELEASE:
        {
        if(Fl::event_button() == FL_RIGHT_MOUSE){
            return(1);
        }
        break;
        }
    }
    return(Fl_Input::handle(e));
    }
    Multiline_Input(int X, int Y, int W, int H, const char*L=0):Fl_Multiline_Input(X, Y, W, H, L){}
};


void Quit(Fl_Widget* w, void* p)
{
	exit(0);
}

class robot_part_dialog
{
	public :
	robot_part_dialog() {
		dialog = new Fl_Window(340,270,"Robot Parts");
		rp_head = new Fl_Return_Button(100, 50, 120, 25, "Head");
		rp_head->callback((Fl_Callback *)robot_head_dialog_showCB, 0);

		rp_torso = new Fl_Return_Button(100, 80, 120, 25, "Torso");
		rp_torso->callback((Fl_Callback *)robot_torso_dialog_showCB, 0);

		rp_arm = new Fl_Return_Button(100, 110, 120, 25, "Arm");
		rp_arm->callback((Fl_Callback *)robot_arm_dialog_showCB, 0);

		rp_locomotor = new Fl_Return_Button(100, 140, 120, 25, "Locomotor");
		rp_locomotor->callback((Fl_Callback *)robot_locomotor_dialog_showCB, 0);

		rp_battery = new Fl_Return_Button(100, 170, 120, 25, "Battery");
		rp_battery->callback((Fl_Callback *)robot_battery_dialog_showCB, 0);

		rp_return = new Fl_Return_Button(230, 240, 100, 25, "Return:");
		rp_return->callback((Fl_Callback *)robot_part_dialog_hideCB, 0);
		dialog->end();
		dialog->set_non_modal();
		}
		void show() {dialog->show();}
		void hide() {dialog->hide();}
	private :
		Fl_Window *dialog;
		Fl_Return_Button *rp_head, *rp_torso, *rp_arm, *rp_locomotor, *rp_battery, *rp_return;
};
robot_part_dialog *robot_part_dlg;
void robot_part_dialog_showCB(Fl_Widget* w, void* p)
{
	robot_part_dlg->show();
}
void robot_part_dialog_hideCB(Fl_Widget* w, void* p)
{
	robot_part_dlg->hide();
}
//=======================================
//             Head Dialog
//=======================================
class robot_head_dialog
{
	public :
		robot_head_dialog() {
		dialog = new Fl_Window(480, 360, "Robot Head");

		rp_name = new Input(270, 10, 210, 25, "Name:");
		rp_name->align(FL_ALIGN_LEFT);


		rp_model_number = new Input(270, 40, 210, 25, "Model Number:");
		rp_model_number->align(FL_ALIGN_LEFT);

		rp_cost = new Input(270, 70, 210, 25, "Cost:");
		rp_cost->align(FL_ALIGN_LEFT);

		rp_description = new Multiline_Input(270, 100, 210, 75, "Description:");
		rp_description->align(FL_ALIGN_LEFT);

		rp_file_name = new Input(270, 180, 210, 25, "File name:");
		rp_file_name->align(FL_ALIGN_LEFT);

		rp_power = new Input(270, 220, 210, 25, "Power:");
		rp_power->align(FL_ALIGN_LEFT);

		rp_create = new Fl_Return_Button(270, 250, 100, 25, "Create:");
		rp_create->callback((Fl_Callback *)create_robot_headCB, 0);

		rp_cancel = new Fl_Return_Button(380, 250, 95, 25, "Cancel:");
		rp_cancel->callback((Fl_Callback *)robot_head_dialog_hideCB, 0);
		dialog->end();
		dialog->set_non_modal();
		}

		void show() {dialog->show();}
		void hide() {dialog->hide();}
		void clear() {rp_name->value(NULL);rp_model_number->value(NULL);rp_cost->value(NULL);rp_description->value(NULL);
			rp_file_name->value(NULL);rp_power->value(NULL);}
		string name() {return rp_name->value();}
		int model_number() {bool valid = int_validation(rp_model_number->value());
			if (valid){return atoi(rp_model_number->value());} else{return -999;}}
		double cost() {bool valid = double_validation(rp_cost->value());
			if (valid){return atof(rp_cost->value());} else{return -999;}}
		string description() {return rp_description->value();}
		string file() {return rp_file_name->value();}
		double power() {bool valid = double_validation(rp_power->value());
			if (valid){return atof(rp_power->value());} else{return -999;}}
	private :
		Fl_Window *dialog;
		Input *rp_name, *rp_model_number, *rp_cost, *rp_file_name, *rp_power;
		Fl_Return_Button *rp_create, *rp_cancel;
		Multiline_Input *rp_description;
		int a, b;
		double c;
};

robot_head_dialog *robot_head_dlg;
void robot_head_dialog_showCB(Fl_Widget* w, void* p)
{
	robot_head_dlg->show();
}
void robot_head_dialog_hideCB(Fl_Widget* w, void* p)
{
	robot_head_dlg->hide();
}
void create_robot_headCB(Fl_Widget* w, void* p)
{
	if (robot_head_dlg->model_number() == -999 || robot_head_dlg->cost() == -999 || robot_head_dlg->power() == -999)
	{
		fl_message("Invalid Input");
	}
	else
	{
		Head head(robot_head_dlg->name(),robot_head_dlg->model_number(),robot_head_dlg->cost(),robot_head_dlg->description(),robot_head_dlg->file(),robot_head_dlg->power());
		store.get_catalog()->add_head(head);
		fl_message("Created part");
	}
	robot_head_dlg->clear();
	robot_head_dlg->hide();
}
//=======================================
//             Torso Dialog
//=======================================
class robot_torso_dialog
{
	public :
		robot_torso_dialog() {
		dialog = new Fl_Window(480, 360, "Robot torso");
		rp_name = new Input(270, 10, 210, 25, "Name:");
		rp_name->align(FL_ALIGN_LEFT);

		rp_model_number = new Input(270, 40, 210, 25, "Model Number:");
		rp_model_number->align(FL_ALIGN_LEFT);

		rp_cost = new Input(270, 70, 210, 25, "Cost:");
		rp_cost->align(FL_ALIGN_LEFT);

		rp_description = new Multiline_Input(270, 100, 210, 75, "Description:");
		rp_description->align(FL_ALIGN_LEFT);

		rp_file_name = new Input(270, 180, 210, 25, "File name:");
		rp_file_name->align(FL_ALIGN_LEFT);

		rp_battery = new Input(270, 220, 210, 25, "Battery compartments:");
		rp_battery->align(FL_ALIGN_LEFT);

		rp_max_arms = new Input(270, 250, 210, 25, "Max arms:");
		rp_max_arms->align(FL_ALIGN_LEFT);

		rp_create = new Fl_Return_Button(270, 280, 100, 25, "Create:");
		rp_create->callback((Fl_Callback *)create_robot_torsoCB, 0);

		rp_cancel = new Fl_Return_Button(380, 280, 95, 25, "Cancel:");
		rp_cancel->callback((Fl_Callback *)robot_torso_dialog_hideCB, 0);
		dialog->end();
		dialog->set_non_modal();
		}

		void show() {dialog->show();}
		void hide() {dialog->hide();}
		void clear() {rp_name->value(NULL);rp_model_number->value(NULL);rp_cost->value(NULL);rp_description->value(NULL);
			rp_file_name->value(NULL);rp_battery->value(NULL);rp_max_arms->value(NULL);}
		string name() {return rp_name->value();}
		int model_number() {bool valid = int_validation(rp_model_number->value());
		       if (valid){return atoi(rp_model_number->value());} else{return -999;}}
		int cost() {bool valid = int_validation(rp_cost->value());
		       if(valid){return atoi(rp_cost->value());} else{return -999;}}
		string description() {return rp_description->value();}
		string file() {return rp_file_name->value();}
		int battery() {bool valid = int_validation(rp_battery->value());
		        if(valid){return atoi(rp_battery->value());} else{return -999;}}
		int max_arms() {bool valid = int_validation(rp_max_arms->value());
	  	        if(valid) {return atoi(rp_max_arms->value());} else{return -999;}}
	private :
		Fl_Window *dialog;
		Input *rp_name, *rp_model_number, *rp_cost, *rp_file_name, *rp_battery, *rp_max_arms;
		Multiline_Input *rp_description;
		Fl_Return_Button *rp_create, *rp_cancel;
		int a, b, c, d;
};

robot_torso_dialog *robot_torso_dlg;
void robot_torso_dialog_showCB(Fl_Widget* w, void* p)
{
	robot_torso_dlg->show();
}
void robot_torso_dialog_hideCB(Fl_Widget* w, void* p)
{
	robot_torso_dlg->hide();
}
void create_robot_torsoCB(Fl_Widget* w, void* p)
{
	if(robot_torso_dlg->model_number() == -999 || robot_torso_dlg->cost() == -999 || robot_torso_dlg->battery() == -999 || robot_torso_dlg->max_arms() == -999)
	{
		fl_message("Invalid Input");
	}
	else
	{
	Torso torso(robot_torso_dlg->name(),robot_torso_dlg->model_number(),robot_torso_dlg->cost(),robot_torso_dlg->description(),robot_torso_dlg->file(),
				robot_torso_dlg->battery(),robot_torso_dlg->max_arms());
	store.get_catalog()->add_torso(torso);
	fl_message("Created part");
	}
	robot_torso_dlg->hide();
	robot_torso_dlg->clear();
}
//=======================================
//             Arm Dialog
//=======================================
class robot_arm_dialog
{
	public :
		robot_arm_dialog() {
		dialog = new Fl_Window(480, 360, "Robot Arm");
		rp_name = new Input(270, 10, 210, 25, "Name:");
		rp_name->align(FL_ALIGN_LEFT);

		rp_model_number = new Input(270, 40, 210, 25, "Model Number:");
		rp_model_number->align(FL_ALIGN_LEFT);

		rp_cost = new Input(270, 70, 210, 25, "Cost:");
		rp_cost->align(FL_ALIGN_LEFT);

		rp_description = new Multiline_Input(270, 100, 210, 75, "Description:");
		rp_description->align(FL_ALIGN_LEFT);

		rp_file_name = new Input(270, 180, 210, 25, "File name:");
		rp_file_name->align(FL_ALIGN_LEFT);

		rp_power = new Input(270, 220, 210, 25, "Max arm power:");
		rp_power->align(FL_ALIGN_LEFT);

		rp_create = new Fl_Return_Button(270, 250, 100, 25, "Create:");
		rp_create->callback((Fl_Callback *)create_robot_armCB, 0);

		rp_cancel = new Fl_Return_Button(380, 250, 95, 25, "Cancel:");
		rp_cancel->callback((Fl_Callback *)robot_arm_dialog_hideCB, 0);
		dialog->end();
		dialog->set_non_modal();
		}

		void show() {dialog->show();}
		void hide() {dialog->hide();}
		void clear() {rp_name->value(NULL);rp_model_number->value(NULL);rp_cost->value(NULL);rp_description->value(NULL);
			rp_file_name->value(NULL);rp_power->value(NULL);}
		string name() {return rp_name->value();}
		int model_number() {bool valid = int_validation(rp_model_number->value());
		       if (valid){return atoi(rp_model_number->value());} else{return -999;}}
		int cost() {bool valid = int_validation(rp_cost->value());
		       if (valid){return atoi(rp_cost->value());} else{return -999;}}
		string description() {return rp_description->value();}
		string file() {return rp_file_name->value();}
		double power() {bool valid = double_validation(rp_power->value());
			if (valid){return atof(rp_power->value());} else{return -999;}}
	private :
		Fl_Window *dialog;
		Input *rp_name, *rp_model_number, *rp_cost, *rp_file_name, *rp_power;
		Multiline_Input *rp_description;
		Fl_Return_Button *rp_create, *rp_cancel;
		int a, b;
		double c;
};

robot_arm_dialog *robot_arm_dlg;
void robot_arm_dialog_showCB(Fl_Widget* w, void* p)
{
	robot_arm_dlg->show();
}
void robot_arm_dialog_hideCB(Fl_Widget* w, void* p)
{
	robot_arm_dlg->hide();
}
void create_robot_armCB(Fl_Widget* w, void* p)
{
	if(robot_arm_dlg->model_number() == -999 || robot_arm_dlg->cost() == -999 || robot_arm_dlg->power() == -999)
	{
		fl_message("Invalid Input.");
	}
	else
	{
	Arm arm(robot_arm_dlg->name(),robot_arm_dlg->model_number(),robot_arm_dlg->cost(),robot_arm_dlg->description(),robot_arm_dlg->file(),robot_arm_dlg->power());
	store.get_catalog()->add_arm(arm);
	fl_message("Created part");
	}
	robot_arm_dlg->hide();
	robot_arm_dlg->clear();
}
//=======================================
//           Locomotor Dialog
//=======================================
class robot_locomotor_dialog
{
	public :
		robot_locomotor_dialog() {
		dialog = new Fl_Window(480, 360, "Robot locomotor");
		rp_name = new Input(270, 10, 210, 25, "Name:");
		rp_name->align(FL_ALIGN_LEFT);

		rp_model_number = new Input(270, 40, 210, 25, "Model Number:");
		rp_model_number->align(FL_ALIGN_LEFT);

		rp_cost = new Input(270, 70, 210, 25, "Cost:");
		rp_cost->align(FL_ALIGN_LEFT);

		rp_description = new Multiline_Input(270, 100, 210, 75, "Description:");
		rp_description->align(FL_ALIGN_LEFT);

		rp_file_name = new Input(270, 180, 210, 25, "File name:");
		rp_file_name->align(FL_ALIGN_LEFT);

		rp_power = new Input(270, 220, 210, 25, "Max locomotor power:");
		rp_power->align(FL_ALIGN_LEFT);

		rp_create = new Fl_Return_Button(270, 250, 100, 25, "Create:");
		rp_create->callback((Fl_Callback *)create_robot_locomotorCB, 0);

		rp_cancel = new Fl_Return_Button(380, 250, 95, 25, "Cancel:");
		rp_cancel->callback((Fl_Callback *)robot_locomotor_dialog_hideCB, 0);
		dialog->end();
		dialog->set_non_modal();
		}

		void show() {dialog->show();}
		void hide() {dialog->hide();}
		void clear() {rp_name->value(NULL);rp_model_number->value(NULL);rp_cost->value(NULL);rp_description->value(NULL);
			rp_file_name->value(NULL);rp_power->value(NULL);}
		string name() {return rp_name->value();}
		int model_number() {bool valid = int_validation(rp_model_number->value());
		       if (valid){return atoi(rp_model_number->value());} else{return -999;}}
		int cost() {bool valid = int_validation(rp_cost->value());
		       if (valid){return atoi(rp_cost->value());} else{return -999;}}
		string description() {return rp_description->value();}
		string file() {return rp_file_name->value();}
		double power() {bool valid = double_validation(rp_power->value());
			if (valid){return atof(rp_power->value());} else{return -999;}}
	private :
		Fl_Window *dialog;
		Input *rp_name, *rp_model_number, *rp_cost, *rp_file_name, *rp_power;
		Multiline_Input *rp_description;
		Fl_Return_Button *rp_create, *rp_cancel;
		int a, b;
		double c;
};

robot_locomotor_dialog *robot_locomotor_dlg;
void robot_locomotor_dialog_showCB(Fl_Widget* w, void* p)
{
	robot_locomotor_dlg->show();
}
void robot_locomotor_dialog_hideCB(Fl_Widget* w, void* p)
{
	robot_locomotor_dlg->hide();
}
void create_robot_locomotorCB(Fl_Widget* w, void* p)
{
	if(robot_locomotor_dlg->model_number() == -999 || robot_locomotor_dlg->cost() == -999 || robot_locomotor_dlg->power() == -999)
	{
		fl_message("Invalid Input.");
	}
	else
	{
	Locomotor loco(robot_locomotor_dlg->name(),robot_locomotor_dlg->model_number(),robot_locomotor_dlg->cost(),robot_locomotor_dlg->description(),robot_locomotor_dlg->file(),robot_locomotor_dlg->power());
	store.get_catalog()->add_locomotor(loco);
	fl_message("Created part");
	}
	robot_locomotor_dlg->hide();
	robot_locomotor_dlg->clear();
}
//=======================================
//            Battery Dialog
//=======================================
class robot_battery_dialog
{
	public :
		robot_battery_dialog() {
		dialog = new Fl_Window(480, 360, "Robot battery");
		rp_name = new Input(270, 10, 210, 25, "Name:");
		rp_name->align(FL_ALIGN_LEFT);

		rp_model_number = new Input(270, 40, 210, 25, "Model Number:");
		rp_model_number->align(FL_ALIGN_LEFT);

		rp_cost = new Input(270, 70, 210, 25, "Cost:");
		rp_cost->align(FL_ALIGN_LEFT);

		rp_description = new Multiline_Input(270, 100, 210, 75, "Description:");
		rp_description->align(FL_ALIGN_LEFT);

		rp_file_name = new Input(270, 180, 210, 25, "File name:");
		rp_file_name->align(FL_ALIGN_LEFT);

		rp_power = new Input(270, 220, 210, 25, "Power available:");
		rp_power->align(FL_ALIGN_LEFT);

		rp_energy = new Input(270, 250, 210, 25, "Energy available:");
		rp_energy->align(FL_ALIGN_LEFT);

		rp_create = new Fl_Return_Button(270, 280, 100, 25, "Create:");
		rp_create->callback((Fl_Callback *)create_robot_batteryCB, 0);

		rp_cancel = new Fl_Return_Button(380, 280, 95, 25, "Cancel:");
		rp_cancel->callback((Fl_Callback *)robot_battery_dialog_hideCB, 0);
		dialog->end();
		dialog->set_non_modal();
		}

		void show() {dialog->show();}
		void hide() {dialog->hide();}
		void clear() {rp_name->value(NULL);rp_model_number->value(NULL);rp_cost->value(NULL);rp_description->value(NULL);
			rp_file_name->value(NULL);rp_power->value(NULL);rp_energy->value(NULL);}
		string name() {return rp_name->value();}
		int model_number() {bool valid = int_validation(rp_model_number->value());
		       if (valid){return atoi(rp_model_number->value());} else{return -999;}}
		int cost() {bool valid = int_validation(rp_cost->value());
		       if (valid){return atoi(rp_cost->value());} else{return -999;}}
		string description() {return rp_description->value();}
		string file() {return rp_file_name->value();}
		double power() {bool valid = double_validation(rp_power->value());
			if (valid){return atof(rp_power->value());} else{return -999;}}
		double energy() {bool valid = double_validation(rp_energy->value());
			if (valid){return atof(rp_energy->value());} else{return -999;}}
	private :
		Fl_Window *dialog;
		Input *rp_name, *rp_model_number, *rp_cost, *rp_file_name, *rp_power, *rp_energy;
		Multiline_Input *rp_description;
		Fl_Return_Button *rp_create, *rp_cancel;
		int a, b;
		double c, d;
};

robot_battery_dialog *robot_battery_dlg;
void robot_battery_dialog_showCB(Fl_Widget* w, void* p)
{
	robot_battery_dlg->show();
}
void robot_battery_dialog_hideCB(Fl_Widget* w, void* p)
{
	robot_battery_dlg->hide();
}
void create_robot_batteryCB(Fl_Widget* w, void* p)
{
	if(robot_battery_dlg->model_number() == -999 || robot_battery_dlg->cost() == -999 || robot_battery_dlg->power() == -999 || robot_battery_dlg->energy() == -999)
	{
		fl_message("Invalid Input.");
	}
	else
	{
	Battery battery(robot_battery_dlg->name(),robot_battery_dlg->model_number(),robot_battery_dlg->cost(),robot_battery_dlg->description(),
					robot_battery_dlg->file(),robot_battery_dlg->power(), robot_battery_dlg->energy());
	store.get_catalog()->add_battery(battery);
	fl_message("Created part");
	}
	robot_battery_dlg->hide();
	robot_battery_dlg->clear();
}

void saveCB(Fl_Widget* w, void* p)
{
	store.save("save_file.txt");
}

void openCB(Fl_Widget* w, void* p)
{
	store.open("save_file.txt");
}

class robot_model_dialog
{
	public :
		robot_model_dialog() {
		dialog = new Fl_Window(480, 260, "Robot Model");
		rp_head_index = new Input(270, 10, 210, 25, "Head index:");
		rp_head_index->align(FL_ALIGN_LEFT);
		rp_head_show = new Fl_Button(10, 10, 100, 25, "Show Image");
		rp_head_show->callback((Fl_Callback *)show_head_imgCB, 0);

		rp_torso_index = new Input(270, 40, 210, 25, "Torso index:");
		rp_torso_index->align(FL_ALIGN_LEFT);
		rp_torso_show = new Fl_Button(10, 40, 100, 25, "Show Image");
		rp_torso_show->callback((Fl_Callback *)show_torso_imgCB, 0);

		rp_arm_index = new Input(270, 70, 210, 25, "Arm index:");
		rp_arm_index->align(FL_ALIGN_LEFT);
		rp_arm_show = new Fl_Button(10, 70, 100, 25, "Show Image");
		rp_arm_show->callback((Fl_Callback *)show_arm_imgCB, 0);

		rp_locomotor_index = new Input(270, 100, 210, 25, "Locomotor index:");
		rp_locomotor_index->align(FL_ALIGN_LEFT);
		rp_locomotor_show = new Fl_Button(10, 100, 100, 25, "Show Image");
		rp_locomotor_show->callback((Fl_Callback *)show_locomotor_imgCB, 0);

		rp_battery_index = new Input(270, 130, 210, 25, "Battery index:");
		rp_battery_index->align(FL_ALIGN_LEFT);
		rp_battery_show = new Fl_Button(10, 130, 100, 25, "Show Image");
		rp_battery_show->callback((Fl_Callback *)show_battery_imgCB, 0);

		rp_name = new Input(270, 160, 210, 25, "Model name:");
		rp_name->align(FL_ALIGN_LEFT);

		rp_model_number = new Input(270, 190, 210, 25, "Model number:");
		rp_model_number->align(FL_ALIGN_LEFT);

		rp_show = new Fl_Return_Button(160, 230, 100, 25, "Show Parts");
		rp_show->callback((Fl_Callback *)show_robot_partsCB, 0);

		rp_create = new Fl_Return_Button(270, 230, 100, 25, "Create:");
		rp_create->callback((Fl_Callback *)create_robot_modelCB, 0);

		rp_cancel = new Fl_Return_Button(380, 230, 95, 25, "Cancel:");
		rp_cancel->callback((Fl_Callback *)robot_model_dialog_hideCB, 0);
		dialog->end();
		dialog->set_non_modal();
		}

		void show() {dialog->show();}
		void hide() {dialog->hide();}
		void clear() {rp_name->value(NULL);rp_head_index->value(NULL);rp_torso_index->value(NULL);rp_arm_index->value(NULL);
			rp_locomotor_index->value(NULL);rp_battery_index->value(NULL);}
		string name() {return rp_name->value();}
		int model_number() {bool valid = int_validation(rp_model_number->value());
		       if (valid){return atoi(rp_model_number->value());} else{return -999;}}
		int head() {bool valid = int_validation(rp_head_index->value());
		       if (valid){return atoi(rp_head_index->value());} else{return -999;}}
		int torso() {bool valid = int_validation(rp_torso_index->value());
		       if (valid){return atoi(rp_torso_index->value());} else{return -999;}}
		int arm() {bool valid = int_validation(rp_arm_index->value());
		       if (valid){return atoi(rp_arm_index->value());} else{return -999;}}
		int locomotor() {bool valid = int_validation(rp_locomotor_index->value());
		       if (valid){return atoi(rp_locomotor_index->value());} else{return -999;}}
		int battery() {bool valid = int_validation(rp_battery_index->value());
		       if (valid){return atoi(rp_battery_index->value());} else{return -999;}}
	private :
		Fl_Window *dialog;
		Fl_Return_Button *rp_create, *rp_cancel, *rp_show;
		Input *rp_head_index, *rp_torso_index, *rp_arm_index, *rp_locomotor_index, *rp_battery_index, *rp_model_number, *rp_name;
		Fl_Button *rp_head_show, *rp_torso_show, *rp_arm_show, *rp_locomotor_show, *rp_battery_show;
		int a;
};
robot_model_dialog *robot_model_dlg;
void robot_model_dialog_showCB(Fl_Widget* w, void* p)
{
	robot_model_dlg->show();
}
void robot_model_dialog_hideCB(Fl_Widget* w, void* p)
{
	robot_model_dlg->hide();
}
void create_robot_modelCB(Fl_Widget* w, void* p)
{
	if((robot_model_dlg->model_number() == (-999) || robot_model_dlg->head() == (-999) || robot_model_dlg->torso() == (-999)
	   || robot_model_dlg->arm() == (-999) || robot_model_dlg->locomotor() == (-999) || robot_model_dlg->battery() == (-999))
	   || (store.get_catalog()->head_vector_size() == 0 || store.get_catalog()->torso_vector_size() == 0 || store.get_catalog()->arm_vector_size() == 0 ||
	   store.get_catalog()->locomotor_vector_size() == 0 || store.get_catalog()->battery_vector_size() == 0) ||
	   (robot_model_dlg->head() > store.get_catalog()->head_vector_size() || robot_model_dlg->torso() > store.get_catalog()->torso_vector_size()
	   || robot_model_dlg->arm() > store.get_catalog()->arm_vector_size() || robot_model_dlg->locomotor() > store.get_catalog()->locomotor_vector_size()
	   || robot_model_dlg->battery() > store.get_catalog()->battery_vector_size()) || (robot_model_dlg->head() <= 0 || robot_model_dlg->torso() <= 0
	   || robot_model_dlg->arm() <= 0 || robot_model_dlg->locomotor() <= 0
	   || robot_model_dlg->battery() <= 0))
	{
		fl_message("Invalid input, selected index that does not exist, or do not have a part of every type.");
	}
	else
	{
	Robot_model model(robot_model_dlg->name(),robot_model_dlg->model_number(),*(store.get_catalog()->get_torso(robot_model_dlg->torso()-1)),*(store.get_catalog()->get_head(robot_model_dlg->head()-1)),
					*(store.get_catalog()->get_locomotor(robot_model_dlg->locomotor()-1)),*(store.get_catalog()->get_arm(robot_model_dlg->arm()-1)),*(store.get_catalog()->get_battery(robot_model_dlg->battery()-1)));
	store.get_catalog()->add_model(model);
	fl_message("Created model");
	}
	robot_model_dlg->hide();
	robot_model_dlg->clear();
}

void show_robot_partsCB(Fl_Widget* w, void* p)
{
	Fl_Window *win = new Fl_Window(640,480);

	stringstream os;
	int i = 0;
	os << "Heads: \n";
	for (i=0;i<store.get_catalog()->head_vector_size();i++)
	{
		os << "Part index: " << i+1 << "\n" << store.get_catalog()->head_to_string(i) << '\n'
		   << "=================================================\n";
	}
	os << "Torsos: \n";
	for (i=0;i<store.get_catalog()->torso_vector_size();i++)
	{
		os << "Part index: " << i+1 << '\n' << store.get_catalog()->torso_to_string(i) << '\n'
		   << "=================================================\n";
	}
	os << "Arms: \n";
	for (i=0;i<store.get_catalog()->arm_vector_size();i++)
	{
		os << "Part index: " << i+1 << '\n' << store.get_catalog()->arm_to_string(i) << '\n'
		   << "=================================================\n";
	}
	os << "Locomotors: \n";
	for (i=0;i<store.get_catalog()->locomotor_vector_size();i++)
	{
		os << "Part index: " << i+1 << '\n' << store.get_catalog()->locomotor_to_string(i) << '\n'
		   << "=================================================\n";
	}
	os << "Batteries: \n";
	for (i=0;i<store.get_catalog()->battery_vector_size();i++)
	{
		os << "Part index: " << i+1 << '\n' << store.get_catalog()->battery_to_string(i) << '\n'
		   << "=================================================\n";
	}

	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Robot Parts");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());
}
void show_head_imgCB(Fl_Widget* w, void* p)
{
    int num = robot_model_dlg->head()-1;
    if(num == 999 || num < 0 || num > store.get_catalog()->head_vector_size()-1)
    {
        fl_message("Please Enter a part index in the box\n and select Show Image to view it");
        return;
    }
    string filename = "../img/" + (store.get_catalog()->get_head(robot_model_dlg->head()-1)->get_image_filename());
    Fl_Window *win = new Fl_Window(500+10, 500+10);
    Fl_Box *box = new Fl_Box(10, 10, 500, 500);
    Fl_PNG_Image *png = new Fl_PNG_Image(filename.c_str());
    box->image(*png);
    win->show();
}
void show_torso_imgCB(Fl_Widget* w, void* p)
{
    int num = robot_model_dlg->torso()-1;
    if(num == 999 || num < 0 || num > store.get_catalog()->torso_vector_size()-1)
    {
        fl_message("Please Enter a part index in the box\n and select Show Image to view it");
        return;
    }
    string filename = "../img/" + (store.get_catalog()->get_torso(robot_model_dlg->torso()-1)->get_image_filename());
    Fl_Window *win = new Fl_Window(500+10, 500+10);
    Fl_Box *box = new Fl_Box(10, 10, 500, 500);
    Fl_PNG_Image *png = new Fl_PNG_Image(filename.c_str());
    box->image(*png);
    win->show();
}
void show_arm_imgCB(Fl_Widget* w, void* p)
{
    int num = robot_model_dlg->arm()-1;
    if(num == 999 || num < 0 || num > store.get_catalog()->arm_vector_size()-1)
    {
        fl_message("Please Enter a part index in the box\n and select Show Image to view it");
        return;
    }
    string filename = "../img/" + (store.get_catalog()->get_arm(robot_model_dlg->arm()-1)->get_image_filename());
    Fl_Window *win = new Fl_Window(500+10, 500+10);
    Fl_Box *box = new Fl_Box(10, 10, 500, 500);
    Fl_PNG_Image *png = new Fl_PNG_Image(filename.c_str());
    box->image(*png);
    win->show();
}
void show_locomotor_imgCB(Fl_Widget* w, void* p)
{
    int num = robot_model_dlg->locomotor()-1;
    if(num == 999 || num < 0 || num > store.get_catalog()->locomotor_vector_size()-1)
    {
        fl_message("Please Enter a part index in the box\n and select Show Image to view it");
        return;
    }
    string filename = "../img/" + (store.get_catalog()->get_locomotor(robot_model_dlg->locomotor()-1)->get_image_filename());
    Fl_Window *win = new Fl_Window(500+10, 500+10);
    Fl_Box *box = new Fl_Box(10, 10, 500, 500);
    Fl_PNG_Image *png = new Fl_PNG_Image(filename.c_str());
    box->image(*png);
    win->show();
}
void show_battery_imgCB(Fl_Widget* w, void* p)
{
    int num = robot_model_dlg->battery()-1;
    if(num == 999 || num < 0 || num > store.get_catalog()->battery_vector_size()-1)
    {
        fl_message("Please Enter a part index in the box\n and select Show Image to view it");
        return;
    }
    string filename = "../img/" + (store.get_catalog()->get_battery(robot_model_dlg->battery()-1)->get_image_filename());
    Fl_Window *win = new Fl_Window(500+10, 500+10);
    Fl_Box *box = new Fl_Box(10, 10, 500, 500);
    Fl_PNG_Image *png = new Fl_PNG_Image(filename.c_str());
    box->image(*png);
    win->show();
}

////////////////////////////////////////////////
//	Creating sales associate dialog
////////////////////////////////////////////////


class sales_associate_dialog
{
	public:
	  sales_associate_dialog()
	  {
		  dialog = new Fl_Window(300,100, "Sales associate");
		  rp_name = new Input(140,10,150,25, "Name:");
		  rp_name->align(FL_ALIGN_LEFT);

		  rp_number = new Input(140,40,150,25, "Employee number:");
		  rp_number->align(FL_ALIGN_LEFT);

		  rp_create = new Fl_Return_Button(95,70,100,25, "Create");
		  rp_create->callback((Fl_Callback *)create_sales_associateCB, 0);

		  rp_cancel = new Fl_Button(200,70,95,25, "Cancel");
		  rp_cancel->callback((Fl_Callback *)cancel_sales_associateCB, 0);

		  dialog->end();
		  dialog->set_non_modal();
	  }

	  void show() {dialog->show();}
	  void hide() {dialog->hide();}
	  void clear() {rp_name->value(NULL);rp_number->value(NULL);}
	  string name() {return rp_name->value();}
	  int number() {bool valid = int_validation(rp_number->value());
		       if (valid){return atoi(rp_number->value());} else{return -999;}}

	private:
	  Fl_Window *dialog;
	  Input *rp_name;
	  Input *rp_number;
	  Fl_Return_Button *rp_create;
	  Fl_Button *rp_cancel;

};

sales_associate_dialog *sales_associate_dlg;

void create_sales_associateCB(Fl_Widget* w, void* p)
{
	if(sales_associate_dlg->number() == -999)
	{
		fl_message("Invalid Input.");
	}
	else
	{
	Sales_associate associate(sales_associate_dlg->name(), sales_associate_dlg->number());
	store.add_sales_associate(associate);
	fl_message("Associate created.");
	}
	sales_associate_dlg->hide();
	sales_associate_dlg->clear();
}

void sales_associate_dialog_showCB(Fl_Widget* w, void* p)
{
	sales_associate_dlg->show();
}

void cancel_sales_associateCB(Fl_Widget* w, void* p)
{
	sales_associate_dlg->hide();
}

void show_sales_associatesCB(Fl_Widget* w, void* p)
{
	Fl_Window *win = new Fl_Window(640, 480);
	stringstream os;
	int i = 0;
	for(i = 0; i< store.sales_associates_size(); i++)
	{
		os << "Index: " << i+1 << '\n' << store.sales_associates_to_string(i) << "\n"
		<< "===========================" << '\n';
	}
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Sales Associates");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());
}

///////////////////////////////////////////////////
//	show robot models callback
//////////////////////////////////////////////////
class show_robot_models_dialog
{
public:
    show_robot_models_dialog(){}

    void show() {
        dialog = new Fl_Window(640, 520);
        rp_model_show = new Fl_Button(10, 480, 150, 25, "Show Image");
        rp_model_show->callback((Fl_Callback *)show_model_imgCB, 0);
        rp_model_number = new Input(400, 480, 210, 25, "Model Number: ");
        rp_model_number->align(FL_ALIGN_LEFT);
        int i = 0;
        for(i = 0; i< store.get_catalog()->robot_model_vector_size(); i++)
        {
            os << "Index: " << i+1 << '\n' << store.get_catalog()->robot_model_to_string(i) << "\n"
            << "===========================" << '\n';
        }
        Fl_Text_Buffer *buff = new Fl_Text_Buffer();
        Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Robot Models");
        disp->buffer(buff);
        dialog->resizable(*disp);
        dialog->show();
        buff->text((os.str()).c_str());
        os.str("");
    }
    void hide(){dialog->hide();}
    void clear() {rp_model_number->value(NULL);}
    int model_number() {bool valid = int_validation(rp_model_number->value());
		       if (valid){return atoi(rp_model_number->value());} else{return -999;}}
private:
    Fl_Window *dialog;
    Fl_Button *rp_model_show;
    Input *rp_model_number;
    Fl_Text_Buffer *buff;
    Fl_Text_Display *disp;
    int i;
    stringstream os;
};
show_robot_models_dialog *show_robot_models_dlg;
void show_robot_models_dialogCB(Fl_Widget* w, void* p)
{
    show_robot_models_dlg->show();
}
void hide_robot_models_dialogCB(Fl_Widget* w, void* p)
{
    show_robot_models_dlg->hide();
}
/*
void show_robot_modelsCB(Fl_Widget* w, void* p)
{
	Fl_Window *win = new Fl_Window(640, 520);
	stringstream os;
	int i = 0;
	for(i = 0; i< store.get_catalog()->robot_model_vector_size(); i++)
	{
		os << store.get_catalog()->robot_model_to_string(i) << "\n"
		<< "===========================" << '\n';
	}
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Robot Models");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());
}
*/
void show_model_imgCB(Fl_Widget* w, void* p)
{
    int num;
    num = show_robot_models_dlg->model_number();

    if(num == -999)
    {
        fl_message("Please Enter a valid model number and select\n Show Image to view model image.");
        return;
    }
    for(int i = 0; i < store.get_catalog()->model_vector_size(); i++){
        if(num == store.get_catalog()->get_model(i)->get_model_number()){
            string filename = "../img/full_white_can_w_antennae2.jpg"; //would normally get image filename but I just realized that models don't have those
            Fl_Window *win = new Fl_Window(400+10, 400+10);
            Fl_Box *box = new Fl_Box(10, 10, 400, 400);
            Fl_JPEG_Image *jpeg = new Fl_JPEG_Image(filename.c_str());
            box->image(*jpeg);
            win->show();
            return;
        }
    }
    fl_message("Please Enter a valid model number and select\n Show Image to view model image.");
    return;

}

/////////////////////////////////////////////////////
//	Creating customer
/////////////////////////////////////////////////////

class customer_dialog
{
		public:
		  customer_dialog()
		  {
 		  dialog = new Fl_Window(310,140, "Customer");
		  rp_name = new Input(140,10,150,25, "Name:");
		  rp_name->align(FL_ALIGN_LEFT);

		  rp_phonenumber = new Input(140,40,150,25, "Phone number:");
		  rp_phonenumber->align(FL_ALIGN_LEFT);

		  rp_email = new Input(140,70,150,25, "Email:");
		  rp_email->align(FL_ALIGN_LEFT);

		  rp_create = new Fl_Return_Button(100,100,100,25, "Create");
		  rp_create->callback((Fl_Callback *)create_customerCB, 0);

		  rp_cancel = new Fl_Button(210,100,95,25, "Cancel");
		  rp_cancel->callback((Fl_Callback *)cancel_customerCB, 0);

		  dialog->end();
		  dialog->set_non_modal();
		  }
		void show() {dialog->show();}
	  	void hide() {dialog->hide();}
	    void clear() {rp_name->value(NULL);rp_phonenumber->value(NULL);rp_email->value(NULL);}
	    string name() {return rp_name->value();}
		string phonenumber() {return rp_phonenumber->value();}
		string email() {return rp_email->value();}


	private:
	  Fl_Window *dialog;
	  Input *rp_name;
	  Input *rp_phonenumber;
	  Input *rp_email;
	  Fl_Return_Button *rp_create;
	  Fl_Button *rp_cancel;
};

customer_dialog *customer_dlg;

void create_customerCB(Fl_Widget* w, void* p)
{
		srand(time(NULL));
		int num = rand() % 10000;
		Customer customer(customer_dlg->name(),num,customer_dlg->phonenumber(),customer_dlg->email());
		store.add_customer(customer);
		fl_message("Customer created.");
	customer_dlg->hide();
	customer_dlg->clear();
}

void customer_dialog_showCB(Fl_Widget* w, void* p)
{
	customer_dlg->show();
}

void cancel_customerCB(Fl_Widget* w, void* p)
{
	customer_dlg->hide();
}

void show_customersCB(Fl_Widget* w, void* p)
{
	Fl_Window *win = new Fl_Window(640, 480);
	stringstream os;
	int i = 0;
	for(i = 0; i< store.customers_size(); i++)
	{
		os << "Index: " << i+1 << '\n' << store.customer_to_string(i) << "\n"
		<< "===========================" << '\n';
	}
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Robot Customers");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());
}
//===============================
//         Creating order
//===============================

class create_order
{
	public :
		create_order() {
		  dialog = new Fl_Window(380,260, "Create Order");
		  rp_model_number = new Input(220,10,150,25, "Model Index:");
		  rp_model_number->align(FL_ALIGN_LEFT);

		  rp_amount = new Input(220,40,150,25, "Quantity:");
		  rp_amount->align(FL_ALIGN_LEFT);

		  rp_customer_number = new Input(220,70,150,25, "Customer Index:");
		  rp_customer_number->align(FL_ALIGN_LEFT);

		  rp_sales_number = new Input(220,100,150,25, "Sales Associate Index:");
		  rp_sales_number->align(FL_ALIGN_LEFT);

		  rp_show = new Fl_Return_Button(55, 200, 120, 25, "Show Models");
		  rp_show->callback((Fl_Callback *)show_robot_models_dialogCB, 0);

		  rp_show_customers = new Fl_Return_Button(10, 230, 160, 25, "Show Customers");
		  rp_show_customers->callback((Fl_Callback *)show_customersCB, 0);

		  rp_show_associates = new Fl_Return_Button(175, 230, 200, 25, "Show Sales Associates");
		  rp_show_associates->callback((Fl_Callback *)show_sales_associatesCB, 0);

		  rp_create = new Fl_Return_Button(185,200,100,25, "Create");
		  rp_create->callback((Fl_Callback *)create_orderCB, 0);

		  rp_cancel = new Fl_Return_Button(285,200,90,25, "Cancel");
		  rp_cancel->callback((Fl_Callback *)cancel_order_dialogCB, 0);

		  dialog->end();
		  dialog->set_non_modal();
		}

		void show() {dialog->show();}
	  	void hide() {dialog->hide();}
	    void clear() {rp_model_number->value(NULL);rp_amount->value(NULL);rp_customer_number->value(NULL);
	    			  rp_sales_number->value(NULL);}
	    int model_number() {bool valid = int_validation(rp_model_number->value());
		                    if (valid){return atoi(rp_model_number->value());} else{return -999;}}
		int amount() {bool valid = int_validation(rp_amount->value());
					  if(valid){return atoi(rp_amount->value());} else{return -999;}}
		int customer_number() {bool valid = int_validation(rp_customer_number->value());
					  if(valid){return atoi(rp_customer_number->value());} else{return -999;}}
		int sales_number() {bool valid = int_validation(rp_sales_number->value());
					  if(valid){return atoi(rp_sales_number->value());} else{return -999;}}
	private :
		Fl_Window *dialog;
		Input *rp_model_number, *rp_amount, *rp_customer_number, *rp_sales_number;
		Fl_Return_Button *rp_create, *rp_cancel, *rp_show, *rp_show_customers, *rp_show_associates;
};

create_order *order_dlg;
void create_orderCB(Fl_Widget* w, void* p)
{
	time_t t =time(0);
	struct tm *now = localtime(&t);
	stringstream os;
	srand(time(NULL));
	int num = rand() % 10000;
	os <<(now->tm_year + 1900)<< '-'
	<<(now->tm_mon + 1)<<'-'<<(now->tm_mday);
	if ((order_dlg->model_number() == -999 || order_dlg->amount() == -999 || order_dlg->customer_number() == -999 ||
		order_dlg->sales_number() == -999) || (order_dlg->model_number() > store.order_vector_size() ||
		order_dlg->customer_number() > store.customers_size() || order_dlg->sales_number() > store.sales_associates_size())
		|| (order_dlg->model_number() < 1 || order_dlg->customer_number() < 1 || order_dlg->sales_number() < 1))
	{
		fl_message("Invalid Input");
		order_dlg->hide();
	}
	else
	{
		Order make_order(num,(os.str()),*(store.get_catalog()->get_model(order_dlg->model_number()-1)),
					 order_dlg->amount(),*(store.get_customer(order_dlg->customer_number() - 1)), 1,
					 *(store.get_associate(order_dlg->sales_number() - 1)));
		store.add_order(make_order);
		fl_message("Order created");
		Fl_Window *win = new Fl_Window(640,480);
	stringstream os;
	os << store.order_to_string(order_dlg->model_number()-1) << '\n'
	   << "Cost:\t\t\t" << '$' << store.get_catalog()->get_model(order_dlg->model_number()-1)->cost() << '\n'
	   << "===============================" << '\n';
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Invoice");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());
		order_dlg->hide();
	}
	order_dlg->clear();
}

void show_order_dialogCB(Fl_Widget* w, void* p)
{
	order_dlg->show();
}

void cancel_order_dialogCB(Fl_Widget* w, void* p)
{
	order_dlg->hide();
}

void show_ordersCB(Fl_Widget* w, void* p)
{
	Fl_Window *win = new Fl_Window(640, 480);
	stringstream os;
	int i = 0;
	for(i = 0; i <store.order_vector_size(); i++)
	{
		os << store.order_to_string(i) << "\n"
		<< "===========================" << '\n';
	}
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Orders");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());
}

void show_invoiceCB(Fl_Widget* w, void* p)
{
	Fl_Window *win = new Fl_Window(640,480);
	stringstream os;
	os << store.order_to_string(order_dlg->model_number()-1) << '\n'
	   << store.get_catalog()->get_model(order_dlg->model_number()-1)->cost() << '\n'
	   << "===============================" << '\n';
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());
}

/*
void test_windowCB(Fl_Widget* w, void* p)
{
	Fl_Window *win = new Fl_Window(640,480);
	stringstream os;
	int i = 0;
	for(i = 0; i < store.order_vector_size(); i++)
	{
		os << store.get_order(i) << "\n";
	}
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Test");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());
}
*/

//==========================================
//	  Display employee sales report
//==========================================

void show_sales_reportCB(Fl_Widget* w, void* p)
{
	Fl_Window *win = new Fl_Window(640, 480);
	stringstream os;
	int i,j = 0;
	for(i = 0; i < store.sales_associates_size(); i++)
	{
		os << store.get_associate(i)->get_name() << "\n";
		for(j = 0; j < store.order_vector_size(); j++)
		{

			if (store.get_associate(i)->get_employee_number() ==
			    store.get_order(j)->get_sales_associate().get_employee_number())
			{
				os << store.get_order(j)->to_string() << "\n";
			}

		}
		os << "===========================" << '\n';
	}
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20,20,640-40,480-40, "Employee sales report");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text((os.str()).c_str());

}






//===============================
//         Manage order
//===============================
class manage_order_dialog
{
public:
    manage_order_dialog() {
		  dialog = new Fl_Window(380,260, "Manage Order");
		  rp_order_number = new Input(220,10,150,25, "Order Number:");//type order#
		  rp_order_number->align(FL_ALIGN_LEFT);


		  rp_show = new Fl_Return_Button(35, 230, 135, 25, "Show Orders");//open order list
		  rp_show->callback((Fl_Callback *)show_ordersCB, 0);
		  //checkbox for all states
          rp_state1 = new Fl_Button(220,45,135,25, "Unfulfilled Order");
		  rp_state1->callback((Fl_Callback *)state1CB, 0);

          rp_state2 = new Fl_Button(220,75,135,25, "Robot Built");
		  rp_state2->callback((Fl_Callback *)state2CB, 0);

		  rp_state3 = new Fl_Button(220,105,135,25, "Invoice Sent");
		  rp_state3->callback((Fl_Callback *)state3CB, 0);

		  rp_state4 = new Fl_Button(220,135,135,25, "Payment Received");
		  rp_state4->callback((Fl_Callback *)state4CB, 0);

          rp_state5 = new Fl_Button(220,165,135,25, "Robot Shipped");
		  rp_state5->callback((Fl_Callback *)state5CB, 0);

		  rp_cancel_order = new Fl_Button(220,195,135,25, "Cancel Order");
		  rp_cancel_order->callback((Fl_Callback *)cancel_orderCB, 0);


		  rp_save = new Fl_Return_Button(180,230,100,25, "Create");//save changes
		  rp_save->callback((Fl_Callback *)save_orderCB, 0);

		  rp_cancel = new Fl_Return_Button(285,230,95,25, "Cancel");
		  rp_cancel->callback((Fl_Callback *)cancel_order_management_dialogCB, 0);

		  dialog->end();
		  dialog->set_non_modal();
		}

		void show() {dialog->show();}
		void hide() {dialog->hide();}
		void clear() {rp_order_number->value(NULL);}
		int order_number() {bool valid = int_validation(rp_order_number->value());
                            if (valid){return atoi(rp_order_number->value());}else{return -999;}}
private:
    Fl_Window *dialog;
    Input *rp_order_number;
    Fl_Return_Button *rp_show, *rp_save, *rp_cancel;
    Fl_Button *rp_state1, *rp_state2, *rp_state3, *rp_state4, *rp_state5, *rp_cancel_order;
};
manage_order_dialog *manage_order_dlg;
void save_orderCB(Fl_Widget* w, void* p)
{
    manage_order_dlg->hide();
    manage_order_dlg->clear();
}
void manage_order_dialogCB(Fl_Widget* w, void* p)
{
    manage_order_dlg->show();
}

void cancel_order_management_dialogCB(Fl_Widget* w, void* p)
{
    manage_order_dlg->hide();
    manage_order_dlg->clear();
}
void state1CB(Fl_Widget* w, void* p)
{
    for(int i = 0; i < store.order_vector_size(); i++){
        if(manage_order_dlg->order_number() == store.get_order(i)->get_order_number())
        {
            store.get_order(i)->set_status(1);
            break;
        }
    }
    manage_order_dlg->hide();
    manage_order_dlg->clear();
}
void state2CB(Fl_Widget* w, void* p)
{
    for(int i = 0; i < store.order_vector_size(); i++){
        if(manage_order_dlg->order_number() == store.get_order(i)->get_order_number())
        {
            store.get_order(i)->set_status(2);
            break;
        }
    }
    manage_order_dlg->hide();
    manage_order_dlg->clear();
}
void state3CB(Fl_Widget* w, void* p)
{
    for(int i = 0; i < store.order_vector_size(); i++){
        if(manage_order_dlg->order_number() == store.get_order(i)->get_order_number())
        {
            store.get_order(i)->set_status(3);
            break;
        }
    }
    manage_order_dlg->hide();
    manage_order_dlg->clear();
}
void state4CB(Fl_Widget* w, void* p)
{
    for(int i = 0; i < store.order_vector_size(); i++){
        if(manage_order_dlg->order_number() == store.get_order(i)->get_order_number())
        {
            store.get_order(i)->set_status(4);
            break;
        }
    }
    manage_order_dlg->hide();
    manage_order_dlg->clear();
}
void state5CB(Fl_Widget* w, void* p)
{
    for(int i = 0; i < store.order_vector_size(); i++){
        if(manage_order_dlg->order_number() == store.get_order(i)->get_order_number())
        {
            store.get_order(i)->set_status(5);
            break;
        }
    }
    manage_order_dlg->hide();
    manage_order_dlg->clear();
}
void cancel_orderCB(Fl_Widget* w, void* p)
{
    for(int i = 0; i < store.order_vector_size(); i++){
        if(manage_order_dlg->order_number() == store.get_order(i)->get_order_number())
        {
            store.get_order(i)->set_status(0);
            break;
        }
    }
    manage_order_dlg->hide();
    manage_order_dlg->clear();
}

void open_fileCB(Fl_Widget* w, void* p)
{
	Fl_File_Chooser chooser(".","*",Fl_File_Chooser::MULTI, "File Browser");
	chooser.show();
	while(chooser.shown())
	{
		Fl::wait();
	}
	if (chooser.count() > 1 || chooser.count() < 1)
	{
		fl_message("Please select 1 file");
	}
	else
	{
		store.open(chooser.value());
	}
}

void save_fileCB(Fl_Widget* w, void* p)
{
	Fl_File_Chooser chooser(".","*",Fl_File_Chooser::MULTI, "File Browser");
	chooser.show();
	while(chooser.shown())
	{
		Fl::wait();
	}
	if (chooser.count() > 1 || chooser.count() < 1)
	{
		fl_message("Please select 1 file");
	}
	else
	{
		store.save(chooser.value());
	}
}

//===============================
//     Validation functions
//===============================

bool int_validation(string input)
{
	int tmp;
	stringstream ss;
	ss << input;
	ss >> tmp;

	if (ss.fail())
	{
		return false;

	}
	else
	{
		return true;
	}
}

bool double_validation(string input)
{
	double tmp;
	stringstream ss;
	ss << input;
	ss >> tmp;

	if(ss.fail())
	{
		return false;
	}
	else
	{
		return true;
	}
}
