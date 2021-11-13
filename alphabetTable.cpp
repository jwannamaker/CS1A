//  Date: 3/12/2020
//  Description: This program lets the user view the alphabet in either uppercase
//  or lower case. printf is utilized for formatting the output.

#include <iostream>
using namespace std;

void printFormattedAlphabet(const char caseChoice);

int main()
{
    char caseChoice = ' ';

    cout << "Would you like to view the alphabet in UPPERCASE?" << endl;
    cout << "Please enter your choice (Y/N): ";
    cin >> caseChoice;
    cout << endl;

    printFormattedAlphabet(toupper(caseChoice));

    cout << endl;
    return 0;
}

void printFormattedAlphabet(const char caseChoice)
{
    char ch = (caseChoice == 'Y') ? 'A' : 'a';
    char endChar = (caseChoice == 'Y') ? 'Z' : 'z';

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 13; j++)
            if (ch <= endChar)
                printf("%5c", ch++);

        cout << endl << endl;   
    }
}

// SAMPLE OUTPUT 1:
// Would you like to view the alphabet in UPPERCASE?
// Please enter your choice (Y/N): n
//
//     a    b    c    d    e    f    g    h    i    j    k    l    m
//
//     n    o    p    q    r    s    t    u    v    w    x    y    z
//
//
// SAMPLE OUTPUT 2:
// Would you like to view the alphabet in UPPERCASE?
// Please enter your choice (Y/N): Y
//
//     A    B    C    D    E    F    G    H    I    J    K    L    M
//
//     N    O    P    Q    R    S    T    U    V    W    X    Y    Z
