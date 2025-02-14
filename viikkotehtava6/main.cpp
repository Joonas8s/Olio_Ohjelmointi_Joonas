#include <iostream>
#include <limits>
#include <vector>
#include "student.h"
#include <algorithm>
#include <string>


using namespace std;



int main ()
{
    int selection = 0;
    vector<Student>studentList;


    Student A("Jarmo Penttila", 18);
    Student B("Oskari Opiskelija", 25);
    Student C("Hannes Hantta", 22);
    Student D("Anni Ainakainen", 27);

    studentList.push_back(A);
    studentList.push_back(B);
    studentList.push_back(C);
    studentList.push_back(D);

    vector<Student>::iterator it = studentList.begin();
    string etsittavaNimi;


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
        case 0:
            /*
            cout << "Give me your name: " << endl;
            cin >> name;
            cout << "Give me your age: " << endl;
            cin >> age;
            Student *s = new student
            studentList->lisää(student)

            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            */
            break;
        case 1:

            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.

            cout << "Opiskelijoiden nimet: " << endl;
            for (Student s: studentList)
            {
                cout << s.getName() << ", ";
            }
            cout << endl;

            break;

        case 2:

            sort (studentList.begin(), studentList.end(), [](Student &A, Student &B){
                return A.getName()<B.getName();
            });

            cout << endl << "Oppilaat lajiteltu ian perusteella" << endl;
            for (Student &s: studentList)
            {
                s.printStudentInfo();
            } cout << endl;

            break;

        case 3:



            sort (studentList.begin(), studentList.end(), [](Student &A, Student &B){
            return A.getAge()<B.getAge();
            });

            cout << endl << "Oppilaat lajiteltu ian perusteella" << endl;
            for (Student &s: studentList)
            {
                s.printStudentInfo();
            } cout << endl;

            break;

        case 4:

            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            cout << "Anna opiskelijan nimi: " << endl;
            cin.ignore();
            getline(cin, etsittavaNimi);
            it = find_if(studentList.begin(), studentList.end(),
            [etsittavaNimi](const Student & m) -> bool { return m.getName() == etsittavaNimi; });

            if(it != studentList.end())
            {
                cout << "Opiskelija loytynyt: " << endl;
                it->printStudentInfo();

            }
            else
            {
                cout << "Opiskelijaa ei loytynyt" << endl;
            }

            break;

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;

        }
    }   while(selection < 5);

return 0;
}
