#include <iostream>

class Student
{
    std::string name;
    int roll;
    float marks;

public:
    void setName(std::string name)
    {
        this->name = name;
        // std::cout << "Student Name: " << std::endl;
        // std::getline(std::cin, name);
        if (name.size() == 0)
        {
            std::cout << "Invalid Entry." << std::endl;
            return;
        }
    }
    void setRoll(int roll)
    {
        this->roll = roll;
        // std::cout << "Roll: " << std::endl;
        // std::cin >> roll;
        if (roll == 0 || roll < 0)
        {
            std::cout << "Invalid Entry" << std::endl;
        }
    }
    void setMarks(float marks)
    {
        this->marks = marks;
        // std::cout << "Marks: " << std::endl;
        // std::cin >> marks;
        if (marks < 0 || marks > 100)
        {
            std::cout << "Invalid Entry" << std::endl;
        }
    }

    void getName()
    {
        std::cout << "Student Name: " << name << std::endl;
    }
    void getRoll()
    {
        std::cout << "Student Roll No: " << roll << std::endl;
    }
    void getMarks()
    {
        int pin;
        std::cout << "Enter the pin" << std::endl;
        std::cin >> pin;
        if (pin == 123456)
        {
            std::cout << "Marks: " << marks << std::endl;
        }
    }
};

int main()
{
    Student S;
    // std::cout << "Enter Details" << std::endl;
    S.setName("Uttam Kumar Singh");
    S.setRoll(3603);
    S.setMarks(99);
    std::cout << "Details: " << std::endl;
    S.getName();
    S.getRoll();
    S.getMarks();
    return 0;
}