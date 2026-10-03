// Case-2.cpp : This file contains the 
#include <iostream>
#include<string>
using namespace std;
void per_info()
{
    string f_name, l_name;
    int age;
    cout << "1- THE PERSONAL INFO. :" << "\n";
    cout << "*** --- *** --- *** " << endl;
    cout << "ENTER THE FIRST NAME : ";
    cin >> f_name;
    cout << "ENTER LAST NAME : ";
    cin >> l_name;
    cout << "ENTER THE AGE : ";
    cin >> age;
    cout << endl;
    cout << "THE PERSONAL INFORMATION : " << endl;
    cout << "*** --- *** --- *** " << endl;
    cout << "THE FULL NAME : " << f_name<< "-" << l_name << endl;
    cout << "THE AGE : " << age << endl;
    cout << "*** --- *** --- *** " << endl;
    cout << endl;
}
void birth_info()
{
    int year, munth, day;
    cout << "2- THE BIRTH INFO. :" << "\n";
    cout << "*** --- *** --- *** " << endl;
    cout << "ENTER THE YEAR : ";
    cin >> year;
    cout << "ENTER THE MUNTH : ";
    cin >> munth;
    cout << "ENTER THE DAY : ";
    cin >> day;
    cout << endl;
    cout << "THE BIRTH INFORMATION : " << endl;
    cout << "*** --- *** --- ***" << endl;
    cout << "THE BIRTH : " << year << "-" << munth << "-" << day << endl;
    cout << endl;
}
void edu_info()
{
    string aca_ach, uni_name;
    int graduation_year;
    cout << "3- THE GRADUATED INFO. :" << endl;
    cout << "*** --- *** --- *** " << endl;
    cout << "ENTER THE ACADEMIC ACHIEVMENT : ";
    cin >> aca_ach;
    cout << "ENTER NAME OF THE UNIVERCITY : ";
    cin.ignore(1, '\n');//PROCESS FOR READ UNIVERSITY NAME.
    getline(cin, uni_name);
    cout << "ENTER THE GRADUATION YEAR : ";
    cin >> graduation_year;
    cout << "*** --- *** --- *** " << endl;
    cout << "THE EDUCATION INFORMATION : "<<endl;
    cout << "*** --- *** --- *** " << endl;
    cout << "ACADIMIC ACHIEVMENT : " << aca_ach << endl;
    cout << "UNIVERCITY NAME : " << uni_name << endl;
    cout << "THE GRADUATION YEAR : " << graduation_year << endl;
    cout << endl;
}
void menu()
{
    cout << "1- THE PERSONAL INFO. :" << "\n";
    cout << "2- THE BIRTH INFO. :" << "\n";
    cout << "3- THE GRADUATED INFO. :" << endl;
}
int switch_info()
{
    int s;
    cout << "INFORMATION CATOGERY: ";
    cin >> s;
    cout << endl;
    switch (s)
    {
    case 1:
        per_info();
        break;
    case 2:
        birth_info();
        break;
    case 3:
        edu_info();
        break;
    default:
        break;
    }
    return s;   
}
int main()
{
    menu();
    switch_info();
}
