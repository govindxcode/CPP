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


/*#include<iostream>
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
}*/



    #include<iostream>
    using namespace std;

    int main(){


        int choice ;
        cout << "enter ur choice ";
        cin >> choice ;

        switch(choice){

            case 1:
            cout<<"domestic plan "<< endl <<"rate = 5 per unit ";
            break; 

            case 2:
            cout<<"Commercial Plan "<< endl <<"rate = 10 per unit ";
            break;

            case 3:
            cout<<"Industrial Plan "<< endl <<"rate = 15 per unit ";
            break;

            case 4:
            cout<<"Agriculture Plan "<< endl <<"rate = 20 per unit ";
            break;

            default:
            cout<<"invalid choice ";
            break;
        }



        return 0;
    }