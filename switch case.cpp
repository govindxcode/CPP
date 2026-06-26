/*#include<iostream>
using namespace std ;

int main(){

    int day;
    cout<<"enter day"<<endl;
    cin>>day;

    switch(day){
        case 1: 
        cout<<"monday"<<endl;
        break;

        case 2: 
        cout<<"tuesday"<<endl;
        break;

        case 3: 
        cout<<"wednesday"<<endl;
        break;

        case 4: 
        cout<<"thursday"<<endl;
        break;

        case 5:
        cout<<"friday"<<endl;
        break;

        case 6: 
        cout<<"saturday"<<endl;
        break;

        default:
        cout<<"weekend" <<endl;

    }

    return 0;
}*/


#include<iostream>
using namespace std;

int main(){

    int a , b;
    char op ;

    cout << "enter your first number ";
    cin>> a;

    cout << "enter operator ";
    cin>> op;

    cout <<"enter your second number";
    cin>>b;


    switch(op){

    case '+':
    cout << a+b;
    break;

    case '-':
    cout<< a-b;
    break;

    case '*':
    cout<< a*b;
    break;
    }
    
    return 0;
}