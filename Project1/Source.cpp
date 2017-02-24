#include <iostream>
#include <vector>
#include "Header.h"

using namespace std;

namespace Records {
	Employee::Employee()
		: mFirstName("")
		, mLastName("")
		, mEmployeeNumbrer(-1)
		, mSalary(kDefaultStartingSalary)
		, bHired(false)
	{}

	void Employee::promte(int inRaiseAmount) {
		setSalary(getSalary() + inRaiseAmount);
	}

	void Employee::demote(int inDemeritAmount) {
		setSalary(getSalary() - inDemeritAmount);
	}

	void Employee::hire() {
		bHired = true;
	}

	void Employee::fire() {
		bHired = false;
	}
}



