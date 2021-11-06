#include <bits/stdc++.h>
using namespace std;

string convert(string s)
{
    int n = s.length();
 
    int p = 0;
 
    for (int i = 0; i < n; i++) {

        if (s[i] == ' ') 
        {
            s[i + 1] = toupper(s[i + 1]);
            continue;
        }
        else
            s[p++] = s[i];        
    }
    return s.substr(0, p);
}
int main()
{
  string a = "hola mundo";
  cout << convert(a);
  return 0;
}