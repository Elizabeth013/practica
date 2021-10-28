#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    getline(cin,s);
    int pos=-1;
    do{
        pos=s.find("password:", pos+1);
        if(pos!=-1)
        {

            for(int i=pos+9;i<=pos+16 && i<s.length();i++)
                s[i]='*';
        }
    }
   while(pos!=-1);

    cout<<s;
    return 1;
}
