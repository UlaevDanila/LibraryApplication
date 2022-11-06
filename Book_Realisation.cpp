#include"Book_Signature.h"

book::book()
{
	setBookName();
	setDateOfPrint();
	setAuthor();
	setGenre();
	setAccessAge();
}

void book::setBookName()
{
	cout << "Enter name of this book: ";
	cin >> bookName;
	cout << endl;
}

void book::setDateOfPrint()
{
	cout << "Enter date of ptint this book: ";
	cin >> dateOfPrint;
	cout << endl;
}

void book::setAuthor()
{
	cout << "Enter author of this book: ";
	cin >> author;
	cout << endl;
}

void book::setGenre()
{
	cout << "Enter genre of this book: ";
	cin >> genre;
	cout << endl;
}

void book::setAccessAge()
{
	cout << "Enter access age for this book: ";
	cin >> accessAge;
	cout << endl;
}

string book::getBookName()
{
	return bookName;
}

string book::getDateOfPrint()
{
	return dateOfPrint;
}

string book::getAuthor()
{
	return author;
}

string book::getGenre()
{
	return genre;
}

float book::getAccessAge()
{
	return accessAge;
}