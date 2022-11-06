#pragma once
#include<iostream>
using namespace std;

class user
{
public:
	user();


private:
	string name;
	string male;

	float age;


public:
	void setName();
	void setMale();
	void setAge();

public:
	string getName();
	string getMale();
	float getAge();
};

