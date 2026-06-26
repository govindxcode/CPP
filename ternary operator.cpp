#include<iostream>
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
}