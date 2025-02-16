#include "Student.h"

Student::Student(string name, int age) {
    this->Name = name;
    this->Age = age;
}

void Student::setAge(int age)
{
    this->Age = age;
}

void Student::setName(string name)
{
    this->Name = name;
}

string Student::getName() const
{
    return this->Name;
}

int Student::getAge() const
{
    return this->Age;
}

void Student::printStudentInfo() const
{
    cout<<"Oppilaan nimi on "<<this->Name;
    cout<<" ja ika on "<<this->Age<<endl;
}
