#include <bits/stdc++.h>
using namespace std;

void printDups(string str)
{
    unordered_map<char,int> count;

    for(int i=0;i<str.length();i++){
        // increase the count of every chracter
        count[str[i]]++;
    }

    for(auto it : count){
        if(it.second > 1){
            cout << it.first << "  count is :  "  << it.second <<endl;
        }
    }

}
int main()
{
    cout <<"Enter the stirng ";
    string str; 
    cin >> str;
    printDups(str);
    return 0;
}
// This code is form geeks for geeks
https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
