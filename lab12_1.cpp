#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

int main(){
    cout<<"Press Enter 3 times to reveal your future.";
    string G;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x=rand()%9;
    switch(x){
        case 0 : G="A";break;
        case 1 : G="B+";break;
        case 2 : G="B";break;
        case 3 : G="C+";break;
        case 4 : G="C";break;
        case 5 : G="D+";break;
        case 6 : G="D";break;
        case 7 : G="F";break;
        case 8 : G="W";break;
    }
    cout<<"You will get "<<G<<" in this 261102.";
    return 0;
}