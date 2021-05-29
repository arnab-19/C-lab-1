
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string DNA;
    cout << "Enter the string: ";
    cin >> DNA;
    for (i=100;i>=0;i--)
    {
       cout << DNA[i]; 
    }
}