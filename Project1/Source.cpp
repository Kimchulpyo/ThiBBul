#include <iostream>
#include "Database.h"
using namespace std;
using namespace Records;

int main(void) {

	// version 0.000000001
	//cout << "Testing the Employee class." << endl;
	//Employee emp;
	//emp.setFirstName("Chulpyo");
	//emp.setLastName("Kim");
	//emp.setEmployeeNumber(71);
	//// important !!
	//emp.setSalary(999999999);
	//// this salary !! I want this
	//emp.promte();
	//emp.promte(50);
	//emp.hire();
	//emp.display();

	Database myDB;
	Employee& emp1 = myDB.addEmplyee("Chulpyo", "Kim");
	emp1.setSalary(100000000);
	emp1.fire();  // Oh!!! god..

	Employee& emp2 = myDB.addEmplyee("Greg", "Wallis");
	emp2.setSalary(100000);

	Employee& emp3 = myDB.addEmplyee("Scott", "Kleper");
	emp3.setSalary(10000);
	emp3.promte();

	cout << "all employees: " << endl;
	cout << endl;
	myDB.displayAll();

	cout << endl;
	cout << "Current employees: " << endl;

	cout << endl;
	myDB.displayCurrent();

	return 0;
}