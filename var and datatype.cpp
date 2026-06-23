 //                     UPDATION OR MANIPULATION 




/*include<iostream>
using namespace std ;

int main (){

    int age = 21;
    cout << "The age was "<< age <<  endl;

    age = 45 ;
    cout << " Now the age is " << age << endl ; 

    return 0 ;

}*/


//             DOUBLE DATA TYPE AND PRECISION 



/*#include <iostream>
using namespace std ;

int main() {
    double num = 55.6988447;
    cout << fixed << setprecision(7) << num;
} */



//         SIZE OF DATA TYPE 

/*#include <iostream>
using namespace std ;

int main(){

    int age = 21; 
    cout << sizeof(int) << endl ;
    
    return 0;
}*/




//        DOUBLE OR NESTED BLOCK UPDATION AND MANIPULATION OF SAME VARIABLE
//         USING TWO DIFF BLOCKS 


/*#include<iostream>
using namespace std ;

int main(){

    int age =21 ;
    cout << "age is "<< age << endl;

    { 
        int age =25 ;
        cout << "now the age is " << age << endl ;
    }

    return 0;
}*/


//               OR (NESTED BLOCKS )


#include<iostream>
using namespace std ;

int main(){

    { int age =21 ;
    cout << "age is "<< age << endl;

    }
        int age =25 ;
        cout << "now the age is " << age << endl ;
    

    return 0;
}



 