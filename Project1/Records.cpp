#include <iostream>
#include <vector>
#include "Records.h"

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

	void  Employee::display() const	{
		cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
		cout << "----------------------------------------------" << endl;
		cout << (bHired ? "Current Employee" : "Former Employee") << endl;
		cout << "Employee Number: " << getEmployeeNumber() << endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << endl;
	}

	// accessors & setters
	void Employee::setFirstName(string inFirstName) {
		mFirstName = inFirstName;
	}

	string Employee::getFirstName() const {
		return mFirstName;
	}

	void Employee::setLastName(string inLastName) {
		mLastName = inLastName;
	}

	string Employee::getLastName() const {
		return mLastName;
	}

	void Employee::setEmployeeNumber(int inEmpNum) {
		mEmployeeNumbrer = inEmpNum;
	}

	int Employee::getEmployeeNumber() const {
		return mEmployeeNumbrer;
	}

	void Employee::setSalary(int inSalary) {
		mSalary = inSalary;
	}

	int Employee::getSalary() const {
		return mSalary;
	}
}



