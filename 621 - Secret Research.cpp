#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        int len=s.size();
        if( s[len-2] == '3' && s[len-1] == '5'){
            cout<<"-"<<endl;
        }
        else if(s[0]=='9'&&s[len-1]=='4')
        {
        cout<<"*"<<endl;
        }
        else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0'){

        cout<<"?"<<endl;
        }
        else{
      cout<<"+"<<endl;
        }

    }
}
