#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<int> v;
     v.push_back(6);
     v.push_back(23);
     v.push_back(45);
     v.push_back(69);
     v.push_back(107);
     cout<<"Finding 69->"<<binary_search(v.begin(),v.end(),45)<<endl;;
     int a=3;
     int b=5;
     cout<<max(a,b)<<endl;
     string abcd="abcd";
     reverse(abcd.begin(),abcd.end());
     cout<<"String->"<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v)
    {
          cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"After sorting"<<endl;
     for(int i:v)
    {
          cout<<i<<" ";
    }

     
}