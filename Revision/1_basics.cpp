#include <iostream>
class Student
{
public:
    std::string name;
    int age;
    int roll;
    float marks;
};
int main()
{
    Student S;
    std::cout << "Enter the name of the student: " << std::endl;
    std::getline(std::cin, S.name);
    std::cout << "Enter the age: " << std::endl;
    std::cin >> S.age;
    std::cout << "Enter the roll: " << std::endl;
    std::cin >> S.roll;
    std::cout << "Enter the marks: " << std::endl;
    std::cin >> S.marks;

    std::cout << "Details of Student: " << std::endl;
    std::cout << "Name: " << S.name << std::endl;
    std::cout << "Age: " << S.age << std::endl;
    std::cout << "Roll: " << S.roll << std::endl;
    std::cout << "Marks: " << S.marks << std::endl;

    std::cout << "Status" << std::endl;
    if (S.marks >= 90)
    {
        std::cout << "Grade A" << std::endl;
    }
    else if (S.marks >= 80 && S.marks < 90)
    {
        std::cout << "Grade B" << std::endl;
    }
    else if (S.marks >= 70 && S.marks < 80)
    {
        std::cout << "Grade C" << std::endl;
    }
    else
    {
        std::cout << "Fail" << std::endl;
    }

    return 0;
}