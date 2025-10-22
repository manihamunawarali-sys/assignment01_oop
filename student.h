#pragma once
#include<iostream>
using namespace std;
class student {
private:
	char name[50];
	int roll_numb;
	int age;
	float gpa;
public:
	//constructor
	student();
	student(const char n[], int a, int r, float g = 0);
	//destructor
	~student();
	//setter method
	void setdata(const char n[], int a, int r, float g);

	//getter method 

	char* getname();
	int getroll_numb();
	int getage();
	float getgpa();

	//other member functions


	void displayinfo();
	void show_grades();

};

