#include <iostream>

class Customer
{
public:
    std::string name;
    long long acc_num;
    double balance;
    long long number;
    int code;

    int *arr;
    // Default constructor
    Customer()
    {
        name = "Uttam Kumar Singh";
        acc_num = 1234567894;
        balance = 789489;
        number = 8547548;
        code = 107;

        std::cout << "Name: " << name << std::endl;
        std::cout << "Account Number: " << acc_num << std::endl;
        std::cout << "Balance: " << balance << std::endl;
        std::cout << "Number: " << number << std::endl;
        std::cout << "Code: " << code << std::endl;
    }
    // Parametrized constructor
    Customer(std::string name, long long acc_num, double balance)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;

        std::cout << "Name: " << name << std::endl;
        std::cout << "Account_number: " << acc_num << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
    // Constructor overloading(Number of parameter must be different)
    Customer(std::string name, long long acc_num, double balance, int code)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        this->code = code;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account_number: " << acc_num << std::endl;
        std::cout << "Balance: " << balance << std::endl;
        std::cout << "Code: " << code << std::endl;
    }

    // Inline constructor
    Customer(std::string n, long long acc) : name(n), acc_num(acc)
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account Number: " << acc_num << std::endl;
    }
    // Shallow copy constructor // Copy constructor
    Customer(Customer &obj)
    {
        name = obj.name;
        acc_num = obj.acc_num;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account Number: " << acc_num << std::endl;
    }
};
int main()
{
    Customer C1;
    Customer C2("Tom Holland", 789455155, 458789);
    Customer C3("Robert", 4547, 69, 107);
    Customer C4("Chris Hemsworth", 4578955);
    Customer C5 = C4; // shallow copy constructor
    Customer C6(C2);  // Copy constructor
    return 0;
}