#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int hour,minutes;
    double x,y,xHour,yHour;
    xHour=30;
    yHour=6;
    cin>>s;
    hour=stoi(s.substr(0,2));
    minutes=stoi(s.substr(3,5));
    if(hour+12<24){
        x=((hour+12)-12)*30+(minutes*30.0)/60;
    }
    else{
        x=(hour-12)*30+(minutes*30.0)/60;
    }
    y=minutes*6;
     cout<<x<<" "<<y<<endl;
}