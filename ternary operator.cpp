/*#include<iostream>
using namespace std;

int main(){


    int age ;
    cout << "enter age ";
    cin>> age;

    if (age > 0) {
    (age>=18)? cout <<"you can vote " : cout<< "you cannot vote";
    }

    else {
        cout <<"invalid age ";
    }


    return 0;
}*/



#include<iostream>
using namespace std;

int main (){

    int result;

    int x ; 
    cout << "enter value of x ";
    cin>>x;

    int y ;
    cout << "enter value of y ";
    cin>>y;

    result = (x>y) ? x : y ;
    cout<<"The largest number is :" << result << endl;


    return 0;

}