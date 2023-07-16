#include<iostream>
using namespace std;

// this it the task2 at codsoft:
int main()
{
    double number1, number2;
    char operation;

    cout<<"Enter the First Number: ";
    cin>>number1;

    cout<<"Enter the Second Number: ";
    cin>>number2;

    cout<<"Enter the operation ( +, -, * ,/): ";
    cin>>operation;

    double result;

    // use switch case:
    switch(operation){
        case '+':
        result = (number1 + number2);
        cout<<"Result: "<<result<<endl;
        break;

        case '-':
        result = (number1 - number2);
        cout<<"Result: "<<result<<endl;
        break;


        case '*':
        result = (number1 * number2);
        cout<<"Result: "<<result<<endl;
        break;


        case '/':
        if(number2 !=0 ){
        result = (number1 / number2);
        cout<<"Result: "<<result<<endl;
        }
        else{
            cout<<"Error detected: "<<endl;
        }
        break;

        default:
        cout<<"Enter valid operation: "<<endl;
        break;

    }

    return 0;

}