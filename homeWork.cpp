#include <iostream>
using namespace std;

//homewrok 1
string fullName = "Nadia Nouri";
unsigned short age = 32;
string city = "Stockholm";
string country = "Sweeden";
unsigned short monthlySalary = 5000;
char gender = 'M';
bool isMarried = false;

int main(){
    cout << "Name: "<< fullName << ".\n";
    cout << "Age: "<< age << " Years.\n";
    cout << "City: "<< city << ".\n";
    cout << "Country: "<< country << ".\n";
    cout << "Monthly Salary: "<< monthlySalary <<".\n";
    cout << "Yearly Salary: "<< monthlySalary * 12 << ".\n";
    cout << "Gender: "<< gender << ".\n";
    cout << "Married: "<< isMarried << ".\n\n";
    //homework 2
    unsigned short num_1 = 20 , num_2 = 30 ,num_3 = 10;
    cout << num_1 << "+" <<endl;
    cout << num_2 << "+" <<endl;
    cout << num_3 << endl;
    cout << "________________________"<<endl<<endl;
    cout << "Total = " << num_1 + num_2 + num_3 <<endl;
    //homework 3
    unsigned short my_age = 25;
    unsigned short yourAgeAfterFiveYears = my_age + 5;
    cout <<"After 5 years you will be "<< yourAgeAfterFiveYears <<" years old. \n\n";
    cout << sizeof(int)<< " bytes\n";
}




 