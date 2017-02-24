#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;
namespace Records {
	Database::Database() {
		mNextEmployeeNumber = kFirstEmployeeNumber;
	}
	Database::~Database() {

	}

	Employee& Database::addEmplyee(string inFirstName, string inLastName) {
		Employee theEmployee;
		theEmployee.setFirstName(inFirstName);
		theEmployee.setLastName(inLastName);
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
		theEmployee.hire();
		mEmployees.push_back(theEmployee);
		return mEmployees[mEmployees.size() - 1];
	}

	Employee& Database::getEmployee(int inEmployeeNumber) {
		// itr : vector<Employee>::const_iterator == auto
		for (auto itr = mEmployees.begin();
			itr != mEmployees.end(); ++itr) {
			if (itr->getEmployeeNumber() == inEmployeeNumber)
				return *itr;
		}
		cerr << "No employee with number " << inEmployeeNumber << endl;
		throw exception();
	}

	Employee& Database::getEmployee(string inFirstName, string inLastName) {
		for (auto itr = mEmployees.begin();
			itr != mEmployees.end(); ++itr) {
			if (itr->getFirstName().compare(inFirstName) && itr->getLastName().compare(inLastName))
				return *itr;
		}
		cerr << "No employee with Name " << inFirstName << " " << inLastName << endl;
		throw exception();
	}

	void Database::displayAll() const {
		for (auto itr = mEmployees.begin();
			itr != mEmployees.end(); ++itr) {
			itr->display();
		}
	}

	void Database::displayCurrent() const {
		for (auto itr = mEmployees.begin();
			itr != mEmployees.end(); ++itr) {
			if (itr->getIsHired())
				itr->display();
		}
	}
}