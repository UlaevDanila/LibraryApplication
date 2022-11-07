#pragma once
#include"User_Signature.h"
#include"Book_Signature.h"

class currentBookUser
{
public:
	currentBookUser(user currentUser, book currentBook);
private:
	user* concreteUser;
	book* concreteBook;

public:
	void setNewBookUser(book currentBook, user currentUser);
	string checkCurrentBookUser(book currenBook);
	string checkName();
};

