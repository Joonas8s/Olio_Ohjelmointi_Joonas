#include "student.h"

Student::Student(string n, int a)
{
    Name = n;
    Age = a;
}

void Student::printStudentInfo()
{
    cout << getName() << ": " << getAge() << endl;
}

string Student::getName() const
{
    return Name;
}

void Student::setName(const string &newName)
{
    Name = newName;
}

int Student::getAge() const
{
    return Age;
}

void Student::setAge(int newAge)
{
    Age = newAge;
}

