#include <iostream>
using namespace std;


class Employee{
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void print_info(){
        cout << "Name: " << Name << endl << "Company: " << Company << endl << "age: " << Age << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }
};

class Developer: private Employee{
public:
    string ProgramName;

    void debugging() {
        cout << getName() << " debugging " << ProgramName << endl;
    }
    Developer(string name, string company, int age, string programName)
        : Employee(name, company, age)
    {
        ProgramName = programName;
    }
};

int main() {
    Employee em1 = Employee("alice", "benz", 25);
    Employee em2 = {"john", "bmw", 35};
    cout << em1.getName() << endl;
    em1.print_info();
    cout << endl;
    em2.print_info();
    Developer dev1 = Developer("ali", "microsoft", 40, "c++");
    dev1.debugging();
    return 0;
}
