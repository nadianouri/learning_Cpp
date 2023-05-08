#include <iostream>
using namespace std;

int main(){
//homework 1
bool a = 12 >= 12 ;
bool b = 12 > 7;
bool c = 8 < 6;
bool d = 8 == 6;
bool e = 12 <= 12 ;
bool f = 7 == 5;
cout<<"a = "<< a << endl;
cout<<"b = "<< b << endl;
cout<<"c = "<< c << endl;
cout<<"d = "<< d << endl;
cout<<"e = "<< e << endl;
cout<<"f = "<< f << endl<<endl;
//homework 2
bool x = !(12 >= 12);
bool y = !(12 < 7);
bool z = !(8 < 6);
bool n = !(8 == 8);
bool l = !(12 <= 12);
bool q = !(7 == 5);
cout<<"x = "<< x << endl;
cout<<"y = "<< y << endl;
cout<<"z = "<< z << endl;
cout<<"n = "<< n << endl;
cout<<"l = "<< l << endl;
cout<<"q = "<< q << endl<<endl;
//homework 3
bool A = 1 , B = 0;
cout<< (A && A)<<endl;
cout<< (A && B)<<endl;
cout<< (B || A)<<endl;
cout<<(B || B)<<endl;
cout<<!(B)<<endl;
cout<<!(A || B)<<endl;
// homewrok 4
bool s;
bool r;
bool t;
bool w;
bool g;
bool h;
s = (7 == 7) && (7 > 5);
r = (7 == 7) && (7 < 5);
t = (7 == 7) || (7 < 5);
w = (7 < 7) || (7 > 5);
g = !(7 == 7) && (7 > 5);
h = (7 == 7) && !( 7 < 5);
cout<<"s = "<< s <<endl;
cout<<"r = "<< r <<endl;
cout<<"t = "<< t <<endl;
cout<<"w = "<< w <<endl;
cout<<"g = "<< g <<endl;
cout<<"h = "<< h <<endl;
//homwork 5
 bool result1;
 bool result2;
 bool result3;
 bool result4;
 bool result5;
 bool result6;
 result1 = (5 > 6 && 7 == 7)||(1 || 0);
 result2 =!(5 > 6 && 7 == 7)||(1 || 0);
 result3 =!(5 > 6 && 7 == 7) || !(1 || 0);
 result4 =!(5 > 6 && 7 == 7) && !(1 || 0);
 result5 =((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true;
 result6 =((5 > 6 && !(7 <= 8)) && (8 > 1 && 4 <= 3)) || true;
 cout<<"The result 1 is "<< result1 <<endl;
 cout<<"The result 2 is "<< result2 <<endl;
 cout<<"The result 3 is "<< result3 <<endl;
 cout<<"The result 4 is "<< result4 <<endl;
 cout<<"The result 5 is "<< result5 <<endl;
 cout<<"The result 6 is "<< result6 <<endl;



return 0;
}