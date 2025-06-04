#include<iostream>
using namespace std;
int main()
{
    string choice;
    cout<< "What you want to Calculate: (CGPA/SPGA)"<<endl;
    cin>>choice;
    if (choice == "CGPA")

    {
        int semester_number,sgpa;
        cout<<"Enter the number of completed semester: "<<endl;
        cin>>semester_number;
        int Total_sgpa=0;
        for (int i = 1; i <= semester_number; i++)
        {
            cout<<"Enter the sgpa of semester "<<i<<endl;
            cin>>sgpa;
            Total_sgpa=Total_sgpa+sgpa;
        }
        cout<<"Your SGPA is: ";
        cout<<Total_sgpa/semester_number;
    }

    return 0;
}