//Authors: Juan Aguirre-Ayala
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string first;
    string last;
  //get user input
    cout << "Please enter your first name\n>";
    cin >> first;
    cout << "Now please enter your last name\n>";
    cin >> last;

    string fi = first;
    string li = last;
    cout << "Welcome, " << fi[0] << "." << li[0] << "., here is your fortune...\n";
  //tell fortune
    cout << "Your lucky number is " << fi.length() << endl;
  return 0;
}
