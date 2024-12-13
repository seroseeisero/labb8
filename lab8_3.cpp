#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int age,height,bounty;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=25){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100){ cout << "Your character = Chopper";}
        else if(height >= 100 && height < 180){ cout << "Your character = Usopp";}
        else if(height >= 180){ 
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > pow(10,9)*1.1){
                cout << "Your character = Zoro";
            }else if(bounty <= pow(10,9)*1.1){
                cout << "Your character = Sanji";
            }
        }
    }else if(age <= 60 && age >25){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > pow(10,8)*5){
            cout << "Your character = Jinbe";
        }else{ cout << "Your character = Franky";}
    }else{ cout << "Your character = Brook";}
}