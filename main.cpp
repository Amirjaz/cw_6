#include<iostream>
using namespace std;

#define elif else if

template<typename T>
void print(T out){
    cout << out << endl;
}

template<typename T, typename... Args>
void print(T out, Args... args)
{
    cout << out <<" " ;

    print(args...) ;
}



int main(){
    print(1,2);
}