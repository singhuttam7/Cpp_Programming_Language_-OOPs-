#include <iostream>
#include <string>

class MyClass
{
public:
    char a;           // 1 byte
    char b;           // 1 byte
    int c;            // 4 bytes
    std::string name; // Size depends on compiler (commonly 24 or 32 bytes)
};

int main()
{
    // Create an object
    MyClass value;

    // Display sizes
    std::cout << "Size of char          : " << sizeof(char) << " byte\n";
    std::cout << "Size of int           : " << sizeof(int) << " bytes\n";
    std::cout << "Size of std::string   : " << sizeof(std::string) << " bytes\n";
    std::cout << "Size of MyClass       : " << sizeof(MyClass) << " bytes\n";

    return 0;
}

/*
---------------------- Memory Layout ----------------------

Offset
0   -> a (1 byte)
1   -> b (1 byte)
2-3 -> Padding (2 bytes)
4-7 -> c (4 bytes)
8   -> name (std::string object)

-----------------------------------------------------------

Why is padding added?

The compiler inserts padding so that each data member starts at an address
that satisfies its alignment requirement.

Typical alignment rules:

char         -> Alignment = 1 byte
short        -> Alignment = 2 bytes
int          -> Alignment = 4 bytes
float        -> Alignment = 4 bytes
double       -> Alignment = 8 bytes
std::string  -> Usually 8-byte alignment (implementation-dependent)

The total size of a class is also rounded up to a multiple of the largest
alignment requirement.

Note:
The size of std::string and MyClass may vary depending on the compiler,
standard library, and operating system.
*/