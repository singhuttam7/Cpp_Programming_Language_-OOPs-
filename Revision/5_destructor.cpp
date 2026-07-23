#include <iostream>

class customer
{
public:
    std::string name;
    double balance;
    int *data;

    customer(std::string name, double balance)
    {
        this->name = name;
        this->balance = balance;
        data = new int(0);
    }
    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
    // destructor
    ~customer()
    {
        delete data;
        std::cout << "Destructor called" << std::endl;
    }
};
int main()
{
    customer c("Ram", 4556);
    c.display();
    return 0;
}