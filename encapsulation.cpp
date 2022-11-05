#include <iostream>
using namespace std;

	class Employee {
		private:
			string name;
			int age;
		public:
			void setName(string pubName) {
				 name= pubName;
			}
			void setAge(int pubAge) {
				if (pubAge > 0 && pubAge < 100)
					age = pubAge;
				else
					cout << "Employee's age is probably wrong, please check"<< endl;
			}
			string getName() {
				return name;
			}
			int getAge() {
				return age;
			}

	};
	int main() {
		Employee employee;
		employee.setName("Serhat Kemal");
		employee.setAge(19);

		cout << employee.getName() << endl;
		cout << employee.getAge() << endl;
		return 0;
	}
