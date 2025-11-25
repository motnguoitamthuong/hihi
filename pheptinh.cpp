#include <iostream>
#include <iomanip>
using namespace std;
double cong(double a, double b){
    return a+b;
}
double tru(double a, double b){
    return a-b;
}
double nhan(double a, double b){
    return a*b;
}
double chia(double a, double b){
    return a/b;
}
int main(){
    char op;
    cout<<"Nhap phep toan (+, -, *, /): ";
    cin>>op;
    double a,b;
    cout<<"Nhap so a: ";
    if(!(cin>>a)){
        cout<<"Gia tri khong hop le!"<<endl;
        return 0;
    }
    cout<<"Nhap so b: ";
    if(!(cin>>b)){
        cout<<"Gia tri khong hop le!"<<endl;
        return 0;
    }
    
    switch(op){
        case '+':
            cout<<"Ket qua: "<<(a,b)<<endl;
            break;
        case '-':
            cout<<"Ket qua: "<<tru(a,b)<<endl;
            break;
        case '*':
            cout<<"Ket qua: "<<nhan(a,b)<<endl;
            break;
        case '/':
            if(b==0){
                cout<<"Khong the chia cho 0!"<<endl;
            } else {
                //cout<<"Ket qua: "<<chia(a,b)<<endl;
                cout <<"ket qua : "<< fixed << setprecision(2) << chia(a,b) << endl;
            }
            break;
        default:
            cout<<"Phep toan khong hop le!"<<endl;
    }

    return 0;
}