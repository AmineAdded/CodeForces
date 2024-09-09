
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char trump;
    cin>>trump;
    string card1,card2;
    cin>> card1>>card2;
    vector<char> vect = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    int pos1,pos2;
    if(card1[1]==trump && card2[1]!=trump)
        cout<<"YES";
    else if(card1[1]==card2[1])
    {
        auto it = find(vect.begin(), vect.end(), card1[0]);
        pos1 = distance(vect.begin(), it);
        it=find(vect.begin(), vect.end(), card2[0]);
        pos2= distance(vect.begin(), it);
        if(pos1>pos2)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
}