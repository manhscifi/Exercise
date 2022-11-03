#pragma once
#include"Student_Model.h"
#include<memory>

class Card_Model
{
private:
    string _cardID;
    int _borrowDate;
    int _returnDate;
    string _bookID;
    shared_ptr<Student_Model> _student;
public:
    Card_Model();
    Card_Model(string, int, int, string, shared_ptr<Student_Model>);
    string getCardID();
    void setCardID(string);
    int getBorrowDate();
    void setBorrowDate(int);
    int getReturnDate();
    void setReturnDate(int);
    string getBookID();
    void setBookID(string);
    shared_ptr<Student_Model> getStudent();
    void setStudent(shared_ptr<Student_Model>);
};

