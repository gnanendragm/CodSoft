#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    
    cout<<"Calculator!\n";
    
    cout<<"Enter the 1st number: ";
    cin>>a;
    
    cout<<"Enter the 2nd number: ";
    cin>>b;
    
    cout<<"Choose 1: \n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n\n";
    cin>>op;
    
    switch(op)
    {
        case '+':
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        case '-':
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;
        case '*':
            cout<<a<<" * "<<b<<" = "<<a*b;
            break;
        case '/':
            cout<<a<<" / "<<b<<" = "<<a/b;
            break;
        default:
            cout<<"Invalid operator!";
            break;
    }
    return 0;
}
