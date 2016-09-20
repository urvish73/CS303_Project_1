#include <iostream>
#include <string>

using namespace std;

void GetUserInput();

void ShowMenu()
{
    cout << "********** -Polynomial Program- **********" << endl;
    cout << "Rules: bla bla bla..." << endl;
    cout << endl;

    char input;

    bool end = true;
    while (end != false)
    {
        cout << "Please choose one of the following option:\n";
        cout << "<E> to enter a Polynomial\n<N> to quit the program";
        cout << "Please enter <E> or <N>:" << endl;

        cin >> input;
        cin.ignore(256, '\n');

        switch (input)
        {
        case 'E':
        case 'e':
            GetUserInput();
            break;

        case 'N':
        case'n':
            end = false;
            break;

        default:
            cout << "Please enter 'E' or 'N'" << endl;
        }
    }
}

void GetUserInput()
{
    string polynomial1, polynomial2;

    //read first poly
    cout << "Please enter your first polynomial: " << '\n';
    getline(cin, polynomial1);

    //read second poly
    cout << "Please enter your second polynomial: " << '\n';
    getline(cin, polynomial2);
}

int main()
{
    ShowMenu();
}