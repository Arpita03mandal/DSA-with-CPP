#include <iostream>
using namespace std;

int main()
{
    int marks;
        cout<<"Enter Marks: ";
        cin>>marks;
        if(marks>=90){
        cout<<"A";
        }
        else if(marks>=80 && marks<90)
        {
            cout<<"B";
        }
        else if(marks>=50 && marks<80)
        {
            cout<<"C";
        }
        else if(marks<40)
        {
            cout<<"D";
        }
    return 0;
}
