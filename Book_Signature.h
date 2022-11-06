#pragma once
#include<iostream>
using namespace std;

class book
{
public:
	book();


private:
	string bookName;
	string dateOfPrint;
	string author;
	string genre;

	int accessAge;


public:
	void setBookName();
	void setDateOfPrint();
	void setAuthor();
	void setGenre();
	void setAccessAge();

public:
	string getBookName();
	string getDateOfPrint();
	string getAuthor();
	string getGenre();
	float getAccessAge();
};


