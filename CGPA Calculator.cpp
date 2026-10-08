#include <iostream>
using namespace std;

int main()
{
    int n;
    float grade, hours;
    float totalHours = 0;
    float totalPoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> hours;

        totalHours = totalHours + hours;
        totalPoints = totalPoints + (grade * hours);
    }

    float GPA = totalPoints / totalHours;

    cout << "\nTotal Credit Hours = " << totalHours << endl;
    cout << "Total Grade Points = " << totalPoints << endl;
    cout << "GPA = " << GPA << endl;
    cout << "CGPA = " << GPA << endl;

    return 0;
}
/*
    How it works

    The program first asks the student to enter the number of courses.

    Then for every course, the student enters the **grade** and **credit hours**.

    The program calculates the grade points using:

    Grade Points = Grade × Credit Hours

    After entering all courses, it calculates the GPA using:

    GPA = Total Grade Points ÷ Total Credit Hours

    Finally, it displays the total credit hours, total grade points, GPA, and CGPA.

*/