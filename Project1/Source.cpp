#include <iostream>
#include <array>
#include "Database.h"
using namespace std;
using namespace Records;

// Chapter1 functions
void debugging(int n1, int n2);

int main(void) {

	// version 0.000000001 ~page 89
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

	// version 0.000000002 ~page 93
	//Database myDB;
	//Employee& emp1 = myDB.addEmplyee("Chulpyo", "Kim");
	//emp1.setSalary(100000000);
	//emp1.fire();  // Oh!!! god..

	//Employee& emp2 = myDB.addEmplyee("Greg", "Wallis");
	//emp2.setSalary(100000);

	//Employee& emp3 = myDB.addEmplyee("Scott", "Kleper");
	//emp3.setSalary(10000);
	//emp3.promte();

	//cout << "all employees: " << endl;
	//cout << endl;
	//myDB.displayAll();

	//cout << endl;
	//cout << "Current employees: " << endl;

	//cout << endl;
	//myDB.displayCurrent();
		
	// Chapter 1 array

	array<int, 3> arr = { 2, 3, 4 };
	cout << "Array size= " << arr.size() << endl;
	for (auto i : arr) {
		cout << i << endl;
	}
	
	// Chapter 1 function
	// print function name
	debugging(1, 2);

	return 0;
}

void debugging(int n1, int n2) {
	cout << "Enter function >> " << __func__ << endl;
	cout << "param : " << n1 << " " << n2 << endl;
}