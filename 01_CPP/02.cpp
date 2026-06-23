#include<iostream>
using namespace std;

void doubleTheNumber(int num){  //if I just put & before num then the return value will be the same in this case both output will be 20
    num *= 2;
    cout << "Inside the function : " << num << endl;
}

//for instance
// void doubleTheNumber(int &num){  
//     num *= 2;
//     cout << "Inside the function : " << num << endl;
// }

int main(){
    int num = 10;

    doubleTheNumber(num);

    cout << "Outside the function : " << num << endl;
}