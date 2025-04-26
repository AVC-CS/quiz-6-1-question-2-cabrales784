#include <iostream>
#include <fstream>
using namespace std;

int writeFile(string filename);
int readFile(string filename);

int writeFile(string filename) {
    ofstream outfile(filename);

    int numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        int id;
        string name, department;
        double salary;

        cout << "Enter Employee ID " << (i + 1) << "name " << " department" << " salary " << endl;
        cin >> id >> name >> department >> salary;

        outfile << id << " " << name << " " << department << " " << salary << endl;
    }

    outfile.close();
    return numEmployees
}

int readFile(string filename) {
    ifstream inFile(filename);

    int id, numEmployee;
    string name, department;
    double salary;

    inFile >> numEmployee;

    for (int i = 0; i < numEmployee; i++) {
        inFile >> id >> name >> department >> salary;
        cout << "ID: " << id << " Name: " << name << " Department: " << department << " Salary: " << salary << endl;
    }
    inFile.close();
    return numEmployee
}

