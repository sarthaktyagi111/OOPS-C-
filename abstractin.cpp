#include <bits/stdc++.h>
using namespace std;
// smartphone is now a abstract class
class smartphone{
public:    
    virtual void takeselfie() = 0; // we have vreated a virtual function
    virtual void callingphone() = 0;
    // every child of this class will created its own takeselfie class
};
class android: public smartphone{
public:
        void takeselfie(){
            cout<<"ANDROID TAKE A SELFIE\n";
        }
        void callingphone(){
            cout<<"ANDROID calling\n";
        }

};
class IPHONE: public smartphone{
public:
        void takeselfie(){
            cout<<"iphone TAKE A SELFIE\n";
        }
        void callingphone(){
            cout<<"iphone calling\n";
        }

};
int main(){
    // abstraction means showing important details and hiding unnecessary details
    smartphone* phone1 = new android();
    smartphone* phone2 = new IPHONE();
    phone1->takeselfie();
    phone1->callingphone();
    phone2->takeselfie();
    phone2->callingphone();

}