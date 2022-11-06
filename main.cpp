#include"Book_Signature.h"
#include"User_Signature.h"
#include"currentBookUser_Signature.h"

int main()
{
	user John;
	book test;
	currentBookUser johnWithTest(John, test);
	cout << johnWithTest.checkName();
}