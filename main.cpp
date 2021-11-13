//  Date: 4/21/2020
//  Description: User enters student information and the program formats it,
//  using setw(), left, and right
//      - Input: Information about a student
//      - Output: A table of student record

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void getRecord(int& id, string& name, double& gpa); 
void displayRecord(int id, string name, double gpa);

int main()
{
    // variable declaration and initialization
    int id = 0;                              
    string name = "";
    double gpa = 0.0;
    
    // passing by reference, variables are changed globally
    getRecord(id, name, gpa);                            
    
    // passing by copy, variables are ony changed locally
    displayRecord(id, name, gpa);                            
    
    return 0;
}

void getRecord(int& id, string& name, double& gpa)
{
    cout << "Enter a student record: " << endl;
    cout << "ID: ";
    cin >> id;                                    
    cout << "NAME: ";
    cin.ignore();
    getline(cin, name);
    cout << "GPA: ";
    cin >> gpa;
}

void displayRecord(int id, string name, double gpa)
{
    system("clear");
    cout << "STUDENT RECORD" << endl;
    cout << left << setw(6) << "ID: " << right << setw(10) << id << endl;
    cout << left << setw(6) << "NAME: " << right << setw(10) << name << endl;
    cout << left << setw(6) << "GPA: " << right << setw(10) << gpa << endl;
}

// SAMPLE OUTPUT:
// Enter a student record:
// ID: 12345
// NAME: Tom Lee
// GPA: 3.5
// 
// (SCREEN CLEAR)
// 
// STUDENT RECORD
// ID:        12345
// NAME:    Tom Lee
// GPA:         3.5
