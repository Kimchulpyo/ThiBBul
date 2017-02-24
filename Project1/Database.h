#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records {
	const int kFirstEmployeeNumber = 1000;

	class Database {
	public:
		Database();
		~Database();
		Employee& addEmplyee(std::string inFirstname,
			std::string inLastName);
		Employee& getEmployee(int inEmployeeNumber);
		Employee& getEmployee(std::string inFirstName,
			std::string inLastName);

		void displayAll() const;
		void displayCurrent() const;
		void displayFormer() const;

	protected:
		std::vector<Employee> mEmployees;
		int mNextEmployeeNumber;
	};
}