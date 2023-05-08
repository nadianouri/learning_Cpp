#include <iostream>
using namespace std;

int main(){
//homework 7
/*short number;
cout<<"Please enter the number?\n\n";
cin >> number;
cout<< "The half of the number "<< number <<" is "<< number/2 << " .\n\n";
//homwork 9
short number1;
short number2;
short number3;
cout<< "Please enter the first number?\n\n";
cin >> number1;
cout<< "Please enter the second number?\n\n";
cin >> number2;
cout << "Please enter the third number?\n\n";
cin >> number3;
short sum = number1 + number2 + number3;
cout<< "The sum of the entered numbers is "<< sum << ".\n\n";
//homwork 10
short mark1;
short mark2;
short mark3;
cout <<"Please enter the first mark?";
cin >> mark1;
cout <<"Please enter the second mark?";
cin >> mark2;
cout <<"Please enter third mark?";
cin >> mark3;
cout <<"The average of entered Marks is "<< (mark1+mark2+mark3)/3<<".\n\n";
//homework 14
short num1;
short num2;
cout <<"Please enter the number one ?\n";
cin >> num1;
cout <<"Please enter the number two ?\n";
cin >> num2;
short temp = num1;
cout<<"Let's swap the numbers:\n";
num1 = num2;
num2 = temp;
cout <<num1 <<"\n";
cout <<num2 <<"\n";
//homework 15
short a;
short b;
cout<< "Please enter the length of the rectangle \n\n";
cin>> a;
cout<< "Please enter the width of the rectangle \n\n";
cin>> b;
short area = a*b;
cout<<"The area of the rectangle is "<< area <<".\n\n";
//Homework 17
short A;
short h;
cout<<"Please enter the width of the rectangle \n";
cin>> A;
cout<<"Please enter the height of the rectangle \n";
cin >> h;
short Area = A/2 * h ;
cout<<"Triangle Area is " << Area <<"\n";
//homework 19
short diameter;
cout<< "Please enter the diameter of the circle \n";
cin >> diameter;
const double PI = 3.14;
short circleArea = (PI*diameter*diameter)/4;
cout<<"The circle area through diameter is "<<circleArea<<".\n";
//homework 20
short length;
cout<<"Please enter the length:\n";
cin>> length;
const double PI = 3.14;
double cirAreaInSquare = (PI*length*length)/4;
cout<< "The circle area inscribed in a square is "<<cirAreaInSquare;
//homwork 21
short L;
cout<<"Please enter l value \n";
cin >> L;
const double PI = 3.14;
double circAreaAlogCircumference =(L*L)/(4*PI);
cout<<"circle area along the circumference is "<<circAreaAlogCircumference;
//homework 22
short a;
short b;
cout << "Please enter a \n";
cin >> a;
cout <<"Please enter b \n";
cin >> b;
const double PI = 3.14;
double circleArea = (PI*b*b/4)*(2*a-b)/(2*a+b);
cout<<"The circle area inscribed in an isosceles triangle is "<< circleArea;
//homwork 31
short number;
cout<< "Please enter the number \n";
cin>> number;
short x = number*number;
short y = number*number*number;
short z = number*number*number*number;
cout<<"Outputs:\n";
cout<< x <<"\n";
cout<< y <<"\n";
cout <<z <<"\n";
//homework 35
short Pennies;
short Nickels;
short Dimes;
short Quarters;
short Dollars;
cout<<"Please enter the number of Pennies:\n";
cin>> Pennies;
cout<<"Please enter the number of Nickels:\n";
cin>> Nickels;
cout<<"Please enter the number of Dimes:\n";
cin>> Dimes;
cout<<"Please enter the number of Quarters:\n";
cin>> Quarters;
cout<<"Please enter the number of Dollars:\n";
cin>> Dollars;
short totalPennies = Pennies*1 + Nickels*5 + Dimes*10 + Quarters*25 + Dollars*100;
short totalDollars = totalPennies / 100;
cout<< totalPennies<<" Pennies.\n";
cout<< totalDollars<<" Dollars.\n";
//homework 39;
short totalBill;
short cashPaid;
cout<<"Please enter the total bill:\n";
cin>> totalBill;
cout<<"Please enterthe cash paid:\n";
cin>> cashPaid;
cout<<"The remainder is: "<< cashPaid - totalBill ;
//homework 40
short billValue;
cout<<"Please enter the bill value:\n";
cin>> billValue;
short TotalBill = billValue * 1.1;
TotalBill = TotalBill * 1.16;
cout<<"The total bill is: "<<TotalBill;
//homework 42
short NumberOfDays;
short NumberOfHours;
short NumberOfMinutes;
short NumberOfSeconds;
cout<<"Please enter the number of days: \n";
cin>> NumberOfDays;
cout<<"Please enter the number of hours: \n";
cin>> NumberOfHours;
cout<<"Please enter the number of minutes: \n";
cin>> NumberOfMinutes;
cout<<"Please enter the number of seconds: \n";
cin>> NumberOfSeconds;
int TotalSeconds = (NumberOfDays*24*60*60)+(NumberOfHours*60*60)+(NumberOfMinutes*60)+ NumberOfSeconds;
cout<<"The total of the seconds is: "<<TotalSeconds;
//homework 43
int TotalOfSeconds;
cout<<"Please enter the total of seconds: \n";
cin>>TotalOfSeconds;
int secondsPerDay = 24 * 60 * 60;
short secondsPerHour = 60*60;
short secondsPerMinute = 60;
short numberOfDays = (TotalOfSeconds/secondsPerDay);
short remainder = TotalOfSeconds % secondsPerDay;
short numberOfHours =(remainder/secondsPerHour);
remainder = remainder % secondsPerHour;
short numberOfMinutes = (remainder/secondsPerMinute);
remainder = remainder % secondsPerMinute;
short numberOfSeconds = remainder;
cout<< numberOfDays<<":"<<numberOfHours<<":"<<numberOfMinutes<<":"<<numberOfSeconds;
//homewrok 47
int loanAmount;
int monthlyPayment;
cout<<"Please enter the loan amount:\n";
cin>>loanAmount;
cout<<"Please enter the amount you will pay monthly: \n";
cin>>monthlyPayment;
cout<<"You need "<<loanAmount/monthlyPayment<<" Months in order to settle the loan.";
//homework 48
int LoanAmount;
short numberOfMonth;
cout<<"Please enter the amount you want to borrow:\n ";
cin>>LoanAmount;
cout<<"Please enter how many months you need to pay the loan:\n";
cin>>numberOfMonth;
cout<<"The monthly installment amount you need to pay is "<<LoanAmount / numberOfMonth<<".";
//homework "Relational Operators"
int A;
int B;
cout<<"Please enter the first number:\n ";
cin>> A;
cout<<"Please enter the second number:\n";
cin>> B;
cout<< "A == B is "<< (A == B)<<"\n";
cout<<"A != B is "<< (A != B)<<"\n";
cout<<"A > B is "<< (A > B)<<"\n";
cout<<"A < B is "<< (A < B)<<"\n";
cout<<"A >= B is "<< (A >= B)<<"\n";
cout<<"A <= B is "<< (A <= B)<<"\n";*/
//assignment operators
int a = 10,b = 20;
a += b;
cout<< "a = "<< a << endl;
a -= b;
cout<< "a = "<< a << endl;
a *= b;
cout<< "a = "<< a << endl;
a /= b;
cout<< "a = "<< a << endl;
a %= b;
cout<< "a = "<< a << endl;

return 0;
}