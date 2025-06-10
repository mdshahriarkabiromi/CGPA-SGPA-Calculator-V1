#include<iostream>
using namespace std;

int main()
{
    string choice;
    
    cout << "Welcome to the Academic Calculator." << endl;
    cout << "Please select the type of calculation you wish to perform:" << endl;
    cout << "1. CGPA (Cumulative Grade Point Average)" << endl;
    cout << "2. SGPA (Semester Grade Point Average)" << endl;
    cout << "Enter your choice (CGPA/SGPA): ";
    cin >> choice;

    for (char &c : choice)
        c = tolower(c);

    if (choice == "cgpa")
    {
        int semester_number;
        float sgpa, total_sgpa = 0;

        cout << "\nCGPA Calculation Selected.\n";
        cout << "Enter the total number of completed semesters: ";
        cin >> semester_number;

        for (int i = 1; i <= semester_number; i++)
        {
            cout << "Enter the SGPA for Semester " << i << ": ";
            cin >> sgpa;
            total_sgpa += sgpa;
        }

        cout << "\nCalculation Complete.\n";
        cout << "Your CGPA is: " << total_sgpa / semester_number << endl;
    }
    else if (choice == "sgpa")
    {
        float total_credit, total_courses, sgpa, obtained_grade_point, credit, total_creditXgrade = 0;

        cout << "\nSGPA Calculation Selected.\n";
        cout << "Enter the total number of credits for this semester: ";
        cin >> total_credit;
        cout << "Enter the total number of courses taken: ";
        cin >> total_courses;

        for (int i = 1; i <= total_courses; i++)
        {
            cout << "Enter the credit hours for Course " << i << ": ";
            cin >> credit;
            cout << "Enter the grade point obtained for Course " << i << ": ";
            cin >> obtained_grade_point;

            total_creditXgrade += credit * obtained_grade_point;
        }

        sgpa = total_creditXgrade / total_credit;

        cout << "\nCalculation Complete.\n";
        cout << "Your SGPA is: " << sgpa << endl;
    }
    else
    {
        cout << "\nInvalid selection. Please restart the program and enter 'CGPA' or 'SGPA'." << endl;
    }

    cout << "\n---------------------------" << endl;
    cout << "Project Developed by: Shahriar & RimJhim" << endl;
    cout << "---------------------------" << endl;

    return 0;
}