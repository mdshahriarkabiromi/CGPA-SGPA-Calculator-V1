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
        float Total_sgpa=0;
        for (int i = 1; i <= semester_number; i++)
        {
            cout<<"Enter the sgpa of semester "<<i<<endl;
            cin>>sgpa;
            Total_sgpa=Total_sgpa+sgpa;
        }
        cout<<"Your SGPA is: ";
        cout<<Total_sgpa/semester_number;
    }
     else if(choice == "SGPA" || choice == "sgpa")
    {
        float total_credit,total_course,sgpa,obtained_grade_point,credit,creditXgrade,total_creditXgrade=0;
        cout<<"Enter the Total Credit"<<endl;
        cin>>total_credit;
        cout<<"Enter the number of total courses: "<<endl;
        cin>>total_course;
        for(int i=1;i<=total_course;i++)
        {   cout<<"Enter the credit for course "<<i<<endl;
            cin>>credit;
            cout<<"Enter your obtained grade point: "<<i<<endl;
            cin>>obtained_grade_point;
            creditXgrade = credit * obtained_grade_point;
            //cout<< creditXgrade;
            total_creditXgrade += creditXgrade;
            sgpa = total_creditXgrade / total_credit; 
            
        }
        cout<<"Your SGPS is: "<<sgpa<<endl;
    }

    return 0;
}