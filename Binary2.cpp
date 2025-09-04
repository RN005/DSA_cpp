#include<iostream>

using namespace std;

    class binary{
    string s;
    public: 
    void read();
    bool chk_bin();
    void ones_compliment();
    void twos_compliment();
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;

    if(!chk_bin())
    {
        cout<<"Try again"<<endl;
        read();
    }
}

bool binary :: chk_bin(void){
    for(int i = 0; i < s.length(); i++){
    if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"Entered number is not in binary"<<endl;
         return false; 
        }
    }
        return true;
    }

void binary :: ones_compliment(){
    for(int i = 0; i < s.length(); i++){
        if (s.at(i) == '0')
         s.at(i) = '1';

        else if (s.at(i) == '1')
            s.at(i)= '0';
    }
    cout<<"One's compliment: "<<s<<endl; 
        }

void binary :: twos_compliment(){
     for(int i = 0; i < s.length(); i++){
     s.at(i) = (s.at(i) = '0') ? '1' : '0';
    }

    int carry = 1;
    for(int i = 0; i < s.length(); i--){
    if(s.at(i) = '1' && carry == 1){
        s.at(i) = '0';
    }
    else if(s.at(i) = '0' && carry == 1){
        s.at(i) = '1';
        carry = 0;
    }
    cout<<"Two's complement: "<<s<<endl;
    }
}
int main(){
    binary b;
    b.read();
    b.ones_compliment();
    b.twos_compliment();
    return 0; 
}
