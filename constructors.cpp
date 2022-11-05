#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int age;
public:
	Employee() {
		name = "No Info";
		age = 0;
	}
	Employee(string name) {
		this->name = name;
		age = 0;
	}
	Employee(string name, int age) {
		this->name = name;
		if (age > 0 && age < 100)
			this->age = age;
		else {
			cout << "Something is wrong" << endl;
		}
	}


	void showInfos() {
		cout << "Name:" << name << "\n" << "Age:" << age << endl;
	}

};
int main() {
	Employee employee1("Serhat Kemal",19);
	Employee employee2("John Doe");
	Employee employee3;
	 
	employee1.showInfos();
	employee2.showInfos();
	employee3.showInfos();

	return 0;
}
