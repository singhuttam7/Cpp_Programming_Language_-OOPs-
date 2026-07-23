#include <iostream>

class Human
{
public:
    std::string name;
    int age;
    std::string nationality;

    Human(std::string name, int age, std::string nationality)
    {
        this->name = name;
        this->age = age;
        this->nationality = nationality;
    }
};

class Student : public Human
{
public:
    std::string semester;
    int roll;
    Student(std::string name, int age, std::string nationality, std::string semester, int roll) : Human(name, age, nationality)
    {
        this->semester = semester;
        this->roll = roll;
    }
    void display()
    {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Nationality: " << nationality << std::endl;
        std::cout << "Semester: " << semester << std::endl;
        std::cout << "Roll: " << roll << std::endl;
    }
};
int main()
{
    Student S("Uttam Kumar Singh", 21, "Indian", "Fifth", 25632);
    S.display();
    return 0;
}