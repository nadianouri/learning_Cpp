#include <iostream>
#include <cmath>
using namespace std;
int main(){
//homework #16
/*short a = 5;
short d = 40;
cout<< a * sqrt(pow(d,2) - pow(a,2));
//homework #18
short r = 5;
const float PI = 3.1415926535;
cout<<ceil(PI * pow(r,2));
//homework#19
short D = 10;
const float PI = 3.1415926535;
cout<< ceil(PI * pow(D,2)/4);
//homework #20;
short A = 10;
const float PI = 3.1415926535;
cout<< ceil((PI * pow(A , 2))/4);
//homework#21
short L;
const float PI = 3.1415926535;
cout<<"Please enter L: "<<endl;
cin >> L;
cout<< floor(pow(L,2) / (4*PI));
//homework #22
short e;
short f;
const float PI = 3.1415926535;
cout<<"Please enter e: "<<endl;
cin>> e;
cout<<"Please enter f: "<<endl;
cin>> f;
float result = (PI * pow(f,2)/4) * (2 * e - f ) / (2 * e + f );
cout<<floor(result);

cout<<"Please enter a: "<<endl;
cin>> a;
cout<<"Please enter b: "<<endl;
cin>> b;
cout<<"Please enter c: "<<endl;
cin>> c;
T = T * T;
double area = PI * T;
//homework #23
short a = 5;
short b = 6; 
short c = 7;
const float PI = 3.1415926535;
float P = (a + b + c) / 2;
int T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
T = pow(T,2);
float area = PI * T;
cout<< round(area);
//homework #31
int num;
cout<<"Please enter the number: "<<endl;
cin>>num;
int a = pow(num,2);
int b = pow(num,3);
int c = pow(num,4);
cout<< round(a)<<endl;
cout<< round(b)<<endl;
cout<< round(c) <<endl;
//homework#32
float number;
int M;
cout<<"Please enter the number: "<<endl;
cin>>number;
cout<<"Please enter M: "<<endl;
cin>>M;
cout<<round(pow(number,M));
//homework#42
short NumberOfDays ;
short NumberOfHours;
short NumberOfMinutes;
short NumberOfSeconds;
cout<<"Please enter number of the days: "<<endl;
cin>>NumberOfDays ;
cout<<"Please enter number of the hours: "<<endl;
cin>>NumberOfHours;
cout<<"Please enter number of the minutes: "<<endl;
cin>>NumberOfMinutes;
cout<<"Please enter number of the seconds: "<<endl;
cin>>NumberOfSeconds;
int TotalSeconds = (NumberOfDays * 24 * 60 * 60) + (NumberOfHours * 60 * 60) + (NumberOfMinutes * 60) + NumberOfSeconds;
cout<< round(TotalSeconds)<<" Seconds"<<endl;*/
//homework #43
int TotalSeconds;
cout<<"Please enter number of seconds "<<endl;
cin>>TotalSeconds;
int secondsPerDay = 24 * 60 * 60;
short secondsPerHour = 60 * 60;
short secondsPerMinute = 60 ;
int numOfDays = TotalSeconds / secondsPerDay;
int Remainder = TotalSeconds % secondsPerDay;
int numOfHours = Remainder/secondsPerHour;
Remainder = Remainder % secondsPerHour;
int numOfMinutes = Remainder / secondsPerMinute;
Remainder = Remainder % secondsPerMinute;
int numOfSeconds = Remainder;
cout<<numOfDays <<":"<<numOfHours<<":"<<numOfMinutes<<":"<<numOfSeconds<<endl;









return 0;
}