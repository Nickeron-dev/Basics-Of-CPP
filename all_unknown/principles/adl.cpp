#include <cstdio>

namespace MyNamespace
{
    class MyClass {};
    void doSomething(MyClass) {}
}

MyNamespace::MyClass obj; // global object


int main()
{
    doSomething(obj); // Works Fine - MyNamespace::doSomething() is called.
    return 0;
}

