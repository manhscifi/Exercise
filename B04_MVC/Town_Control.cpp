#include "Town_Control.h"

Town_Control::Town_Control(Town_Model model, Town_View view)
{
	_model = model;
	_view = view;
}

Person Town_Control::inputPerson()
{
	Person person = make_shared<Person_Model>();
	string name = _view.inputName();
	person->setName(name);
	int age = _view.inputAge();
	person->setAge(age);
	string job = _view.inputJob();
	person->setJob(job);
	string id = _view.inputID();
	person->setID(id);
	return person;
}

Family Town_Control::inputFamily()
{
	Family family = make_shared<Family_Model>();
	Person person;
	string houseNo = _view.inputHouseNo();
	family->setHouseNo(houseNo);
	int memberNo = _view.inputMemberNo();
	family->setMemberNo(memberNo);

	for (int i = 0; i < memberNo; i++)
	{
		person = inputPerson();
		family->addPerson(person);
	}
	return family;
}

void Town_Control::inputTown()
{
	Family family;
	int familyNo = _view.inputFamilyNo();
	for (int i = 0; i < familyNo; i++)
	{
		family = inputFamily();
		_model.addFamily(family);
	}
}

void Town_Control::printTown()
{
	_view.printTown(_model.getListFamily());
}


