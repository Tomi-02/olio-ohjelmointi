#include <iostream>
#include <algorithm>
#include <string>
#include "Student.h"

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0: {
            string name;
            int age;
            cout<<"Anna opiskelijan nimi ";
            cin>>name;
            cout<<endl<<"Anna opiskelijan ika ";
            cin>>age;
            cout<<endl;
            Student newStudent(name, age);
            studentList.push_back(newStudent);
            break;
        }
        case 1: {
            cout<<"Lista opiskelijoista "<<endl;
            for(const auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }

        case 2: {
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.getName() < b.getName();
            });
            cout<<"Nimen mukaan "<<endl;
            for(const auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }

        case 3: {
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.getAge() < b.getAge();
            });
            cout<<"Ian mukaan "<<endl;
            for(const auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }

        case 4: {
            string searchName;
            cout<<"Syota etsimasi oppilaan nimi ";
            cin>>searchName;
            cout<<endl;

            auto it = find_if(studentList.begin(), studentList.end(), [&searchName](const Student& student) {
                return student.getName() == searchName;
            });

            if(it != studentList.end()) {
                cout<<"Oppilas loydetty "<<endl;
                it->printStudentInfo();
            }
            else{
                cout<<"Ei loytynyt"<<endl;
            }
            break;
        }
    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
