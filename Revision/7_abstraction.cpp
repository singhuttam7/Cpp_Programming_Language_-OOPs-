// Abstraction
#include <iostream>

class Status
{
private:
    std::string name;
    int roll;
    float marks;

public:
    void details()
    {
        getName();
        getRoll();
        getMarks();
        display();
        std::cout << "This is the example of abstraction" << std::endl;
    }

private:
    void getName()
    {
        std::cout << "Enter the name: " << std::endl;
        std::getline(std::cin, name);
    }
    void getRoll()
    {
        std::cout << "Enter Roll" << std::endl;
        std::cin >> roll;
    }
    void getMarks()
    {
        std::cout << "Enter marks" << std::endl;
        std::cin >> marks;
    }
    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll: " << roll << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main()
{
    Status S;
    S.details();
    return 0;
}