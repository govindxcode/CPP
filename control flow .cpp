

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


#include<iostream>
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
    return 0;
}
