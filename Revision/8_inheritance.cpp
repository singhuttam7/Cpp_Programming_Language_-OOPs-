#include <iostream>
class Parent
{
public:
    int car = 1;

protected:
    int house = 1;

private:
    int bank_account = 456;
};
class derived : public Parent
{
public:
    void display()
    {
        std::cout << "Car: " << car << std::endl;
        std::cout << "House: " << house << std::endl;
        // std::cout<<"bank_account"<<bank_account<<std::endl;
    }
};
class derived2 : protected Parent
{
public:
    void display()
    {
        std::cout << "Car: " << car << std::endl;
        std::cout << "House: " << house << std::endl;
        // std::cout<<"bank_account"<<bank_account<<std::endl;
    }
};
class derived3 : private Parent
{
public:
    void display()
    {
        std::cout << "Car: " << car << std::endl;
        std::cout << "House: " << house << std::endl;
        // std::cout<<"bank_account"<<bank_account<<std::endl;
    }
};

int main()
{
    derived d;
    d.display();
    d.car;
    derived2 d2;
    d2.display();
    // d2.car;
    derived3 d3;
    // d3.car;
    d3.display();
    return 0;
}