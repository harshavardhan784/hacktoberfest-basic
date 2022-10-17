#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
    int upper=0,lower=0; 
    getline(cin,str);
    int size=str.length();
    for(int i=0;i<size;i++){
        if(isupper(str[i]))
        upper++;
        else if(islower(str[i]))
        lower++;
    }
    cout<<"No of Upper Case letters:"<<upper<<endl;
    cout<<"No of Lower Case letters:"<<lower<<endl;
}
