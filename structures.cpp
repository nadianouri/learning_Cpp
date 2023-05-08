#include <iostream>
using namespace std;
enum enGender {Male,Female};
enum enStatus {Single,Married};
enum enFavoritColor {pink,green,red,blue};

struct stSocialMediaContact{
    string email;
    string facebook;
    string github;

};

struct personInfoContact {
    string address;
    string phone ;
    stSocialMediaContact personSocialMedia;


};

struct stPersonInfo {
    string fullName;
    short age;
    string city; 
    string country;
    int monthlySalary;
    int yearlySalary;
    char gender;
    bool isMarried;
    personInfoContact contactInfo;
    enGender myGender;
    enStatus myStatus;
    enFavoritColor myFavoritColor;
};


int main() {
    stPersonInfo personOne ;

    personOne.fullName = "Karim Karam";
    personOne.age = 22;
    personOne.city = "Istanbul";
    personOne.country ="Turkey";
    personOne.monthlySalary = 6000;
    personOne.yearlySalary = 72000;
    personOne.myGender = enGender::Male;
    personOne.myStatus = enStatus::Married;
    personOne.myFavoritColor = enFavoritColor::blue;
    personOne.contactInfo.address = "Street 43";
    personOne.contactInfo.phone ="0344455679";
    personOne.contactInfo.personSocialMedia.email = "kar_2000@gmail.com";
    personOne.contactInfo.personSocialMedia.facebook = "Karim Official";
    personOne.contactInfo.personSocialMedia.github = "Karim Karam";


    cout<<"Full name: "<<personOne.fullName<<endl;
    cout<<"Age: "<<personOne.age<<endl;
    cout<<"City: "<< personOne.city<<endl;
    cout<<"Country: "<<personOne.country<<endl;
    cout<<"MonthlySalary: "<<personOne.monthlySalary<<endl;
    cout<<"YearlySalary: "<<personOne.yearlySalary<<endl;
    cout<<"Gender: "<<personOne.myGender<<endl;
    cout<<"Status: "<<personOne.myStatus<<endl;
    cout<<"Favorite color: "<<personOne.myFavoritColor<<endl;
    cout<< "Address: "<<personOne.contactInfo.address<<endl;
    cout<<"Phone: "<<personOne.contactInfo.phone<<endl;
    cout<<"Email: "<<personOne.contactInfo.personSocialMedia.email<<endl;
    cout<<"Facebook: "<<personOne.contactInfo.personSocialMedia.facebook<<endl;
    cout<<"Github: "<<personOne.contactInfo.personSocialMedia.github<<endl;






    return 0;
}