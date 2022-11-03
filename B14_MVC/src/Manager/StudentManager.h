#include"NormalStudent.h"
#include"GoodStudent.h"
#include"View.h"
#include<algorithm>
#include<memory>
#include<vector>

class StudentManager
{
private:
	vector<shared_ptr<Student>> mListStudent;
public:
	void addStudent(int type);
	int getQuantityOfStudentType(int type);
	//sort
	static bool compareStudentType(const shared_ptr<Student>& a, const shared_ptr<Student>& b);
	static bool compareGoodStudent(const shared_ptr<Student>& a, const shared_ptr<Student>& b);
	static bool compareNormalStudent(const shared_ptr<Student>& a, const shared_ptr<Student>& b);
	void sortListStudent();
	//
	void printQualifiedStudent();
	void printListStudent();
};