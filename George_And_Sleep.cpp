#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int sHour=stoi(s.substr(0,2));
    int sMin=stoi(s.substr(3,5));
    int tHour=stoi(t.substr(0,2));
    int tMin=stoi(t.substr(3,5));
    
    int hour,min;
    if(tHour > sHour){
        hour = 24 - (tHour - sHour);
        if(tMin > sMin){
            hour --;
            min = 60 - (tMin - sMin);
        }
        else{
            min = sMin - tMin;
        }
    }
    else if(tHour == sHour){
        if(tMin > sMin){
            hour = 23;
            min = 60 - (tMin - sMin);
        }
        else if(tMin == sMin){
            hour = 0;
            min = 0;
        }
        else{
            hour = 0;
            min = sMin - tMin;
        }
    }
    else{
        hour = sHour - tHour;
        if(tMin > sMin){
            hour --;
            min = 60 - (tMin - sMin);
        }
        else{
            min = sMin - tMin;
        }
    }
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<min;

}