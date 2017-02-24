#include <iostream>
#include "Records.h"
using namespace std;
using namespace Records;

int main(void) {
	cout << "Testing the Employee class." << endl;
	Employee emp;
	emp.setFirstName("Chulpyo");
	emp.setLastName("Kim");
	emp.setEmployeeNumber(71);
	// important !!
	emp.setSalary(999999999);
	// this salary !! I want this
	emp.promte();
	emp.promte(50);
	emp.hire();
	emp.display();

	return 0;
}