#include"currentBookUser_Signature.h"

currentBookUser::currentBookUser(user currentUser, book currentBook)
{
	this->concreteUser = &currentUser;
	this->concreteBook = &currentBook;
}

void currentBookUser::setNewBookUser(book currentBook, user currentUser)
{
	delete concreteBook;
	this->concreteBook = &currentBook;
	delete concreteUser;
	this->concreteUser = &currentUser;
}

string currentBookUser::checkCurrentBookUser(book currentBook)
{
	if (currentBook.getBookName() == concreteBook->getBookName())
	{
		cout << concreteUser->getName() << " has this book now" << endl;
		return concreteUser->getName();
	}
	else
	{
		cout << "This book free" << endl;
		return "0";
	}
}

string currentBookUser::checkName()
{
	return concreteUser->getName();
}