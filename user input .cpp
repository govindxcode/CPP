/*#include<iostream>
using namespace std ;

int main (){


    //  variable declaration 
    
    int runs ; 

    // to print string 

    cout << " Enter total runs of your team : " ;

    // TO TAKE INPUT IN VARIABLE or variable me input le rahe hein yaha par

    cin >> runs ;

    // FINALLY TO CHECK THE RUNS OR INPUT 

    cout << " your team runs are " << runs << endl ;

    return 0;
  
}
*/




//            without getline()



/*#include<iostream>
using namespace std ;

int main (){

    
    string name ;

    cout << "name is " << endl ;

    cin>>name ;

    cout <<  " name " << name << endl ;

    return 0;
}*/

// input = govind rana 
// output = govind 
// rana ignore ho jayega for that 




//            we use getline()



/*#include<iostream>
using namespace std ;

int main (){

    
    string name ;

    cout << "name is " << endl ;

    getline (cin,name) ;

    cout <<  " name " << name << endl ;

    return 0;
}*/

// now input = govind rana 
// now output = govind rana 




//          without gitignore()
//          getline() newline (\n) milte hi line khatam maan leta hai.

//Buffer me pehle se hi \n pada tha.

//Isliye getline() usi ko read karke empty string return kar deta hai.

//name = ""


/*#include<iostream>
using namespace std ;

int main (){

    int age ; 
    string name ; 

    cout << " age is "<< endl << "name is "<< endl;

    cin >> age ;
    getline (cin,name);

    cout << " age is "<< age << endl << "name is "<< name << endl;

    return 0;
}*/



//   with cin.ignore()

#include<iostream>
using namespace std ;

int main (){

    int age ; 

    cout << " age is "<< endl;
    cin >> age ;
    cin.ignore();

    string name ; 

    cout << "name is "<< endl;

    getline(cin,name);

    cout << " age is "<< age << endl << "name is "<< name << endl;

    return 0;
}

