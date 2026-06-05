#include <bits/stdc++.h>
using namespace std;
class YOUTUBE{
public:
        // adding attrutbute
        string owner;
        string channelname;
        int subscriber;
        vector<string> videotile;
        // constructor
        YOUTUBE(string ownerassignes , string channel){
            owner = ownerassignes;
            channelname = channel;
            subscriber = 0;
        }
        // method or function
        void getinfo(){
            cout<<"NAME: "<<owner<<endl;
            cout<<"channel: "<<channelname<<endl;
            cout<<"subs: "<<subscriber<<endl;

        }
};
int main(){
    // creating object from the class
    YOUTUBE ytchannel("SARTHAK" , "CODE HELP"); // PASSING PARAMETERS TO THE CONSTRUCTOR
    ytchannel.videotile.push_back("DSA BEGINNER");
    ytchannel.videotile.push_back("TREES DSA");
    // ytchannel.owner = "SARTHAK";
    // ytchannel.channelname = "CODE HELP DSA";
    // ytchannel.subscriber = 100;
    // ytchannel.videotile = {"FASTEST 50" , "LEARN OOPS BASIC" , "LEARNS C++"};
    // cout<<"OWNER NAME: "<<ytchannel.owner<<endl;
    // for(auto it:ytchannel.videotile){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // NEW OBJECT 
    YOUTUBE secondchannel("DHRUV" , "GAMER HUN MAIN");
    cout<<secondchannel.subscriber<<endl;
    ytchannel.getinfo();
    secondchannel.getinfo();
   
}