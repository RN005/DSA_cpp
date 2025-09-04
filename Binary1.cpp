#include<iostream>

using namespace std;

class binary{
    string s;
    public: 
    void read();
    void chk_bin();
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
    chk_bin();
}

void binary :: chk_bin(void){
    for(int i = 0; i < s.length(); i++){
    if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"Entered number is not in binary"<<endl;
        return;
        }
    }
   cout<<"Entered number is a valid binary"<<endl;

}
int main(){
    binary b;
    b.read();
}