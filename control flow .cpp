

//              IF-ELSE CONDITION 


/*#include<iostream>
using namespace std;

int main(){

    int budget ;
    cout << "enter your budget "<<endl;

    cin >> budget;

    if(budget>2000000){
        cout << "you can buy a scorpio"<< endl;
    }
    else
           { cout<<"you cant buy a scorpio "<< endl;

           }
    return 0;
}*/




//           IF -  ELSE-IF  CONDITION


/*#include<iostream>
using namespace std ;

int main (){

    int marks;
    cout<< "enter your marks "<< endl;

    cin>> marks;

    if ( marks>=81 ){
        cout<<" Grade A" << endl;
    }

    else if ( marks<=80 && marks>=75 ){
        cout<<" Grade B" << endl;
    }

    else if ( marks<74 && marks>= 60){
        cout<<" Grade C" << endl;
    }

    else if ( marks<60 && marks>=30){
        cout<<" Grade D" << endl;
    }    

    else {
        cout << "You are Fail"<< endl;
    }
    return 0;
}*/



//           NESTED IF 




#include<iostream>
using namespace std ;

int main(){

    int age ;
    cout << "enter you age ";
    cin>>age;

    int weight;
    cout<< "enter your weight";
    cin>> weight;

    if (age>10){

        if (weight >50){
            cout <<"you have a good bmi";
        }
        else {
        cout <<"bhai tujhse nh ho payega";
        }
    }
    else {
        cout << "TU SUNDAY KO AANA ";
    }
 return 0 ;

}