#include<iostream>      
using namespace std;   

int main(){             // main function
    int x = 10;         // variable x
    int &ref = x;       // reference variable
    ref = 20;           // change value
    cout << x;          // print x
}


// OUTPUT

// 20
