#include "Card_View.h"

string Card_View::inputCardID()
{
	string cardID;
	cout << "Enter card ID: ";
	cin.ignore();
	getline(cin, cardID);
	return cardID;
}

int Card_View::inputBorrowDate()
{
	int borrowDate;
	cout << "Enter borrow date: ";
	cin >> borrowDate;
	return borrowDate;
}

int Card_View::inputReturnDate()
{
	int returnDate;
	cout << "Enter return date: ";
	cin >> returnDate;
	return returnDate;
}

string Card_View::inputBookID()
{
	string bookID;
	cout << "Enter book ID: ";
	cin.ignore();
	getline(cin, bookID);
	return bookID;
}

string Card_View::inputName()
{
	string name;
	cout << "Enter student name: ";
	cin.ignore();
	getline(cin, name);
	return name;
}

int Card_View::inputAge()
{
	int age;
	cout << "Enter student age: ";
	cin >> age;
	return age;
}

string Card_View::inputStudentClass()
{
	string studentClass;
	cout << "Enter student class: ";
	cin.ignore();
	getline(cin, studentClass);
	return studentClass;
}

void Card_View::printCard(string cardID, int borrowDate, int returnDate, string bookID, shared_ptr<Student_Model> student)
{
	cout << "Card ID: " << cardID << endl;
	cout << "Borrow Date: " << borrowDate << endl;
	cout << "Return Date: " << returnDate << endl;
	cout << "Book ID: " << bookID << endl;
	cout << "Student name: " << student->getName() << endl;
	cout << "Student age: " << student->getAge() << endl;
	cout << "Student class: " << student->getStudentClass() << endl;
}