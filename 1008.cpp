// Get employee's number
// Get his/her worked hours number in a month
// Get amount he/she received per hour
// Print emplyee's number and salary that he/she will receive at the end of the month (2 dec places)

#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
int main() {

    int employee_Num, worked_Hrs;
    float amount_Per_hr;
    float salary;

    cin >> employee_Num >> worked_Hrs >> amount_Per_hr; 

    salary = worked_Hrs * amount_Per_hr;

    cout << "NUMBER = " << employee_Num << endl;
    cout << "SALARY = " << "U$ " << fixed << setprecision(2) << salary << endl;

}