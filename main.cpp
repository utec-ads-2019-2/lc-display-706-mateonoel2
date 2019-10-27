#include <iostream>
#include <string>
#define unt unsigned int
using namespace std;

void display(unt x, const string& y){
    for(auto c : y){
        cout<<' ';
        if(c == '0' or c == '2' or c == '3' or c == '5' or c=='6' or c=='7' or c=='8' or  c == '9'){
            for(unt i =0; i<x; i++) cout<<'-';
        }
        else{
            for(unt i =0; i<x; i++) cout<<' ';
        }
        cout<<' ';
        if(c != *(--y.end())) cout<<' ';
    }
    cout<<'\n';
    for(unt i = 0; i<x; i++){
        for(auto c : y){
            if(c=='0' or c=='4' or c=='5' or c=='6' or c=='8' or c=='9') cout<<'|';
            else cout<<' ';
            for(unt j =0; j<x; j++) cout<<' ';
            if(c=='0' or c=='1' or c=='2' or c=='3' or c=='4' or c=='7' or c=='8' or c=='9') cout<<'|';
            else cout<<' ';
            if(c != *(y.end()-1)) cout<< ' ';
        }
        cout<<'\n';
    }
    for(auto c : y){
        cout<<' ';
        if(c == '2' or c == '3' or c == '4' or c == '5' or c=='6' or c=='8' or  c == '9'){
            for(unt i =0; i<x; i++) cout<<'-';
        }
        else{
            for(unt i =0; i<x; i++) cout<<' ';
        }
        cout<<' ';
        if(c != *(--y.end())) cout<<' ';
    }
    cout<<'\n';
    for(unt i = 0; i<x; i++){
        for(auto c : y){
            if(c=='0' or c=='2' or c=='6' or c=='8') cout<<'|';
            else cout<<' ';
            for(unt j =0; j<x; j++) cout<<' ';
            if(c=='0' or c=='1' or c=='3' or c=='4' or c=='5' or c=='6' or c=='7' or c=='8' or c=='9') cout<<'|';
            else cout<<' ';
            if(c != *(y.end()-1)) cout<< ' ';
        }
        cout<<'\n';
    }
    for(auto c : y){
        cout<<' ';
        if(c == '0' or c == '2' or c == '3' or c == '5' or c=='6' or c=='8'){
            for(unt i =0; i<x; i++) cout<<'-';
        }
        else{
            for(unt i =0; i<x; i++) cout<<' ';
        }
        cout<<' ';
        if(c != *(--y.end())) cout<<' ';
    }
}

int main() {
    unt x;
    string y;
    while(cin>>x>>y){
        display(x,y);
        cout<<'\n';
        cout<<'\n';
    }
    return 0;
}