include <iostream>
include <string>
using namespace std;
int main(){
    string name;
    string id;
    cout<<"What is your name? ";
    cin>> name;
    cout<<"Hello " << name<<endl;
    cout<<"What is your Student ID?";
    cin>>id;
    cout<<"Your ID is "<<id<<endl;

    int var1;
    int var2;
    int sum,diff,prod;
    cout<<"Enter var1: ";
    cin>>var1;
    cout<<"enter var2: ";
    cin>>var2;
    sum = var1+var2;
    diff=var1-var2;
    prod=var1*var2;

    cout<<"Sum: " <<sum<<endl;
    cout<<"Diff: " <<diff<<endl;
    cout<<"product: " <<prod<<endl;

    string stuName;
    double lab,mid,final,last;
    cout<<"What is your name ? ";
    cin>>stuName;
    cout<<"Enter Lab Score: ";
    cin>>lab;
    cout<<"Enter Midterm Score: ";
    cin>>mid;
    cout<<"Enter Final Score: ";
    cin>>final;

    last = lab*0.25 +mid*0.35+final*0.4;
    cout<<"Last Score: "<<last;


    cout<<"*\n**\n***\n**\n*";
    return 0;
    
}
