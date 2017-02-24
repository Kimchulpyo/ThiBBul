#pragma once
#include <string>
namespace Records {
	
	// 기본 월급
	const int kDefaultStartingSalary = 30000;
	
	class Employee {
	public:
		Employee();
		void promte(int inRaiseAmount = 1000);
		void demote(int inDemeritAmount = 1000);
		void hire();
		void fire();
		void display() const;

		// getter / setter
		void setFirstName(std::string inFirstName);
		std::string getFirstName() const;
		void setLastName(std::string inLastName);
		std::string getLastName() const;
		void setEmployeeNumber(int inEmployeeNumber);
		int getEmployeeNumber() const;
		void setSalary(int inNewSalary);
		int getSalary() const;
		bool getIsHired() const;
	
	protected:
		std::string mFirstName;
		std::string mLastName;
		int mEmployeeNumbrer;
		int mSalary;
		bool bHired;
	};

}
