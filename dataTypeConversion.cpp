#include <iostream>
#include <string>
using namespace std;

int main(){
    string st = "43.22";

    //convert string to int
    int numInT = stoi(st);
    
    //convert string to float
    float numfloat = stof(st);
    
    //convert string to double
    double numdouble = stod(st);

    cout << "The numInt : "<< numInT <<endl;
    cout<< "The numfloat : "<<numfloat<<endl;
    cout << "The numdouble : "<< numdouble<<endl;

    int num1 = 20;
    double num2 = 33.5;

    //convert int and double to string 
    string intToStr , doubleToStr;

    intToStr = to_string(num1);
    doubleToStr = to_string(num2);
    cout<<"int To string : "<<intToStr<<endl;
    cout<<"double to string : "<<doubleToStr<<endl;

    int numToInt;
    float num3 = 55.23;
    //convert float to int
    numToInt = num3;//implicit conversion from float to string
    numToInt = (int)num3;//explicit conversion
    numToInt = int (num3);//explicit conversion

    cout<<"num3 : "<<  numToInt <<endl;

    //conver float to string
    string toStr = to_string(num3);

    cout <<"float to string : "<< toStr <<endl;

//string 

string fullName,string_1 ,string_2 ;
//full name 
cout <<"Please enter the full name : "<<endl;
getline (cin , fullName);
cout<< fullName <<endl;

//string 1 & string 2
string_1 = 5;
string_2 = 10;
cout<<"Please enter the string 1 "<<endl;
cin>> string_1;
cout<< "Please enter the string 2 "<<endl;
cin>> string_2;
cout<<"*****************************"<<endl;

//the length 
cout<<"The length of the full name is: "<<fullName.length()<<endl;

//characters at [0,2,4,7]
cout<< fullName[0]<<" ";
cout<< fullName[2]<<" ";
cout<< fullName[4]<<" ";
cout<< fullName[7]<<endl;

//concatenation
cout<<"Concatenation of the string 1 and the string 2 is : "<< string_1 + string_2<<endl;

//convert string to integer
int sum = stoi(string_1) * stoi(string_2);
cout<<string_1<< " + "<<string_2<<" = "<< sum <<endl;


return 0;




    













}
