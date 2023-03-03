#include<fstream>
#include<string>
#include<iostream>
#include<ctring>
using namespace std;

int main(){
    int n_own, n_request;  char ** StoreOwn; char ** Request;
     fstream File;
     data_file.open("input.txt", ios::out);
     if(File.is_open()) {
        string temp;
        int count = 1;
        while(getline(File, temp)) {
            if(count%2==0){
             if(count==2){
             StoreOwn = new char* [n_own];
             
             }
             else{
             
             
             }
            }else{
               if(count==1)
                 n_own = stoi(temp);
                 else
                 n_request = stoi(temp);
            }
            count++;
        }
        }
    



}
