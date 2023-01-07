#include <iostream>
using namespace std;

int main(){
    int a, b;
    char operation;
    int ans;
    std::cout<<"enter the value of first parameter"<<endl;
        std::cin>> a;
    std::cout<<"enter the value of second parameter"<<endl;
    std::cin>> b;
    std::cout<<"enter the operation which you want to perform"<<endl;
    std::cin>>operation;
    switch(operation){
        case '+' : ans= a+b;
        break;
        case '-' : ans= a-b;
        break;
        case '*' : ans= a*b;
        break;
        case '/':ans= a/b;
        break;
        default: "the operation which you enter is not folllowing any upper code";
    }
     std::cout<<ans;


    return 0;
}