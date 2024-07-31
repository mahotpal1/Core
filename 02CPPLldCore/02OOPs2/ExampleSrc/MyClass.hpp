#ifndef _MY_CLASS_
#define _MY_CLASS_

class MyClass{
  private:
    std::string firstName;
    std::string lastName;
    std::string designation;
    int age;

  public:
    /* Default Constructor */
    MyClass();
    /* Parameterized Cosntructor with default arguments */
    MyClass(std::string firstName="Vishal", std::string lastName="Mahotpal", int age=27);
    /* Parameterized constructor with Constructor Chaining */
    MyClass(std::string firstName, std::string lastName, int age, std::string designation);
    /* Prints Object details */
    void printMyDetails();
};

#endif