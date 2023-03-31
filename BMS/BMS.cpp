// BMS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include "system_flow.h"

using namespace std;

int main()
{
	ES::system_flow ne;
	ne.load_doctors_courses_assignments();
	ne.load_students();
	ne.show_students_data();
	ne.show_doctors_data();
	ne.main_Menu();
	ne.save_doctors_courses_assignments();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
