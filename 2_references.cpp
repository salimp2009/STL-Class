#include <iostream>

void foo(int& a)
{
    std::cout << "non-const lvalue ref\n";
}

void foo(int&& a)
{
    std::cout << "non-const rvalue ref\n";
}

void bar(const int& a)
{
    std::cout << "const lvalue ref\n";
}

int main()
{
    int a = 0;
    foo(a);

    foo(5);

    bar(a);
    bar(5);
    std::cout<<"\nActive file...\n";
}
