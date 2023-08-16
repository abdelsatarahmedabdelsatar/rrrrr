/*#include <iostream>
using namespace std;

class Singleton {
    static Singleton *instance;

    Singleton(){};

public :
    int number = 231;
    static Singleton *getInstance(){
        if(instance == nullptr){
            instance = new Singleton();
        }
        return instance;

    }
    // Public method
    void doSomething() {

    }
};

Singleton *Singleton::instance = nullptr; // Initialize the static variable

int main() {
    // Get the instance of the Singleton
    Singleton *singleton = Singleton::getInstance();

    // Use the singleton object to call its methods
    singleton->number = 2000;
    Singleton *singleton2 = Singleton::getInstance();

    cout<<singleton2->number<<endl;


    return 0;
}*/

#include <iostream>

using namespace std;

string TEST_EQ(int expected, int actual, string testCase){

     if(expected == actual)
        return testCase + " ======> accepted";
        else
        return testCase + " ======> rejected";

}

string TEST_STRING(int eee, int actual, string testCase){

     if(eee == actual)
        return testCase + " ======> accepted";
        else
        return testCase + " ======> rejected";

}

int sum(int n1, int n2){

    return n1+n2;
}

int main(){
    string s;
    int x,y;
    cout<<"enter a name : "<<endl;
    cin>>s;

    cout<<"enter two number : "<<endl;
    cin>>x>>y;

    cout<<TEST_EQ(11,s.length(),"String Test Case")<<endl;
    cout<<TEST_EQ(11,sum(x,y),"Equal Test Case")<<endl;


    return 0;
}
