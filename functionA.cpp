#include <iostream>
using namespace std;

int minimum(){
    int a, b, c, min;
    cin >> a >> b >> c;

    min = a;

    if(min > b){
        min = b;
    }if(min > c){
        min = c;
    }
    cout << min << endl;
}

int main(){
    minimum();
}
