#include<iostream>
#include<string>
#include<algorithm>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mymap{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };

        
        int value=0;

        for(int i=0;i<s.size();i++)

        if(mymap[s[i]]<mymap[s[i+1]])
        {
            value -= mymap[s[i]];
        }

        else{

            value += mymap[s[i]];
        }

        return value;
        
    }
};


int main()
{

 Solution ex;
 string roman;
 cin>>roman;

 int result = ex.romanToInt(roman);

cout<< result<<endl;

    return 0;
}