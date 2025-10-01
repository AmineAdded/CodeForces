#include <bits/stdc++.h>
using namespace std;

int main() {
    string triad1;
    map<string,int>list= {{"C",1},{"C#",2},{"D",3},{"D#",4},{"E",5},{"F",6},{"F#",7},{"G",8},{"G#",9},{"A",10},{ "B",11},{"H",12}};
    
    getline(cin, triad1);

    stringstream ss(triad1);
    //travailler les notes(6 combinaisons possibles)
    string note1, note2, note3;
    ss >> note1 >> note2 >> note3;
    if((((list[note2]-list[note1]+12)%12)==4 && ((list[note3]- list[note2]+12)%12)==3) 
    || (((list[note3]-list[note1]+12)%12)==4 && ((list[note2]-list[note3]+12)%12)==3 )
    || (((list[note1]-list[note2]+12)%12)==4 && ((list[note3]-list[note1]+12)%12)==3)
    ||(((list[note3]-list[note2]+12)%12)==4 && ((list[note1]-list[note3]+12)%12)==3)
    ||(((list[note1]-list[note3]+12)%12)==4 && ((list[note2]-list[note1]+12)%12)==3)
    ||(((list[note2]-list[note3]+12)%12)==4 && ((list[note1]-list[note2]+12)%12)==3)){
        cout<<"major"<<endl;
    }
    else if((((list[note2]-list[note1]+12)%12)==3 && ((list[note3]- list[note2]+12)%12)==4) 
    || (((list[note3]-list[note1]+12)%12)==3 && ((list[note2]-list[note3]+12)%12)==4 )
    || (((list[note1]-list[note2]+12)%12)==3 && ((list[note3]-list[note1]+12)%12)==4)
    ||(((list[note3]-list[note2]+12)%12)==3 && ((list[note1]-list[note3]+12)%12)==4)
    ||(((list[note1]-list[note3]+12)%12)==3 && ((list[note2]-list[note1]+12)%12)==4)
    ||(((list[note2]-list[note3]+12)%12)==3 && ((list[note1]-list[note2]+12)%12)==4)){
        cout<<"minor"<<endl;
    }
    else{
        cout<<"strange"<<endl;
    }
    
    
    return 0;
}
