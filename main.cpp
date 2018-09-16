#include<iostream>
using namespace std;

int main() {
// variable
int c = 0;
int r = 0;
int b = 0;
int u_input;
int amount = 0, Count = 0;
cout<< "\nThis is very simple vehicles parking program!"<<endl<<endl;

while(true) {
    // Menu
    cout<<"Press 1 for park Rickshaw"<<endl;
    cout<<"Press 2 for park Car"<<endl;
    cout<<"Press 3 for park Bus"<<endl;
    cout<<"Press 4 for show the records"<<endl;
    cout<<"Press 5 for delete the record"<<endl;
    // Take user input
    cout<<"Enter : ";
    cin>>u_input;
    cout<<endl;

    if(u_input == 1) {
        if(Count <= 50) {
            r++;
            amount += 100;
            Count += 1;
        } else {
            cout<<"No more cars, Parking is full!"<<endl;
        }
    }

    else if(u_input == 2) {
        if(Count <= 50) {
            c++;
            amount += 200;
            Count += 1;
        } else {
                cout<<"No more cars, Parking is full!"<<endl;
            }
    }
    else if(u_input == 3) {
        if(Count <= 50) {
            b++;
            amount += 300;
            Count += 1;
        } else {
            cout<<"No more cars, Parking is full!"<<endl;
        }
    }
    else if(u_input == 4) {
        cout<<"**********************************************"<<endl;
        cout<<"The total amount = "<<amount<<endl;
        cout<<"The total number of vehicles parked = "<<Count<<endl;
        cout<<"The total number of rickshaw parked = "<<r<<endl;
        cout<<"The total number of car parked = "<<c<<endl;
        cout<<"The total number of bus parked = "<<b<<endl;
     cout<<"**********************************************"<<endl<<endl;
    }
    else if(u_input == 5) {
        amount = 0;
        Count = 0;
        r = 0;
        c = 0;
        b = 0;
        cout<<"**********************************************"<<endl;
        cout<<"RECORD DELETED!"<<endl;
        cout<<"**********************************************"<<endl<<endl;
    } else {
        cout<< "Invalid number!"<<endl;
    }
}
return 0;
}
