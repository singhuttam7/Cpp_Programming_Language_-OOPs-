#include <iostream>

class Customer
{
public:
    std::string bank_name;
    std::string name;
    long long account;
    double balance;
    static int total_customers;
    static double total_balance;

    Customer(std::string bank_name, std::string name, long long account, double balance)
    {
        this->bank_name = bank_name;
        this->name = name;
        this->account = account;
        this->balance = balance;
        total_customers++;
        total_balance += balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
            std::cout << "The deposited amount is " << amount << std::endl;
            std::cout << "The current balance is " << balance << std::endl;
        }
    }
    void withdrawal(int amount)
    {
        if (amount > balance || amount <= 0)
        {
            std::cout << "Invalid entry" << std::endl;
        }
        else
        {
            balance -= amount;
            total_balance -= amount;
            std::cout << "The withdrawal amount is: " << amount << std::endl;
            std::cout << "The current balance is: " << balance << std::endl;
        }
    }
    static void showStatics()
    {
        std::cout << "Total number of customers: " << total_customers << std::endl;
        std::cout << "Total availble balance: " << total_balance << std::endl;
    }
};
int Customer::total_customers = 0;
double Customer::total_balance = 0;

int main()
{
    Customer C("State Bank Of India", "Uttam", 455847, 50000);
    C.deposit(1000);
    C.withdrawal(1000);
    Customer::showStatics();

    Customer C1("State Bank Of India", "Uttam", 455847, 50000);
    C1.deposit(2000);
    C1.withdrawal(1000);
    Customer::showStatics();
    return 0;
}