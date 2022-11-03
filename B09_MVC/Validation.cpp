#include"Validation.h"

template<typename T>
T Validation<T>::check()
{
	string temp;
	getline(cin, temp);
	T result;
	bool valid = ((std::istringstream(temp) >> result >> std::ws).eof());

	while (!valid)
	{
		cout << "Invalid value. Enter again: ";
		getline(cin, temp);
		valid = ((std::istringstream(temp) >> result >> std::ws).eof());
	}

	return result;
}

template class Validation<double>;
template class Validation<int>;