#include <iostream>

/**
* function to demonstrate auto keyword
*/
void testAuto() {
    auto x = 10;
    auto y = 3.37;
    auto z = 3.37f;
    auto c = 'a';
    auto ptr_x = &x;
    auto ptr_y = &y;
    auto pptr = &ptr_x;
    
    std::cout << "variable x tipenya :" << typeid(x).name() << std::endl;
    std::cout << "variable y tipenya :" << typeid(y).name() << std::endl;
    std::cout << "variable z tipenya :" << typeid(z).name() << std::endl;
    std::cout << "variable c tipenya :" << typeid(c).name() << std::endl;
    std::cout << "variable ptr_x tipenya :" << typeid(ptr_x).name() << std::endl;
    std::cout << "variable ptr_y tipenya :" << typeid(ptr_y).name() << std::endl;
    std::cout << "variable pptr tipenya :" << typeid(pptr).name() << std::endl;
}

/*
* class to demonstrate using keyword
*/
class Base {
public:
    void greet() {
        std::cout << "Hello!" << std::endl;
    }
};
class Derived : Base {
public:
    using Base::greet;
    void greet(std::string s) {
        std::cout << "Hello from " << s << std::endl;
        greet();
    }
};

/*
* class for demonstrate explicit keyword
*/
class Foo {
private:
    int m_foo;

public:
    // single parameter constructor, can be used as an implicit conversion
    Foo (int foo): m_foo(foo) {}
    // explicit Foo (int foo): m_foo(foo) {} // <- explicit prefix will prefents compiler from using constructor as implisit conversion.
    int GetFoo() { return m_foo; }
};
int dooBar(Foo foo) {
    return foo.GetFoo();
}

int main()
{
    // testing auto keyword
    testAuto();

    // testing using keyword
    Derived d;
    d.greet("Evan");

    // testing explicit keyword
    int ii = dooBar(42);    // this way demonstrate implisit conversion on constructor.
        

    return 0;
}