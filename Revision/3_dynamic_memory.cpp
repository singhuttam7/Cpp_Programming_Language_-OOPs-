#include <iostream>
class Employee
{
public:
    std::string name;
    int emp_id;
    int salary;
};
int main()
{
    Employee *e = new Employee;
    e->name = "Tom";
    e->emp_id = 456;
    e->salary = 7894;
    std::cout << "Name: " << e->name << std::endl;
    std::cout << "Employee ID: " << e->emp_id << std::endl;
    std::cout << "Salary: " << e->salary << std::endl;
    delete e;
    return 0;
}