#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    multimap<string, string> dict;

  
    dict.insert(
        pair<string, string>(
            "Apple", "A fruit"));

    dict.insert(
        pair<string, string>(
            "Apple", "A company"));

    for (auto itr = dict.begin();
         itr != dict.end(); itr++) {
        cout << itr->first << " ";
        cout << itr->second << " " << endl;
    }
}
