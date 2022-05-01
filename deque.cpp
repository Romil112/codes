#include<iostream>
#include<deque>
using namespace std;
int main()
{
 deque<int> d;
 d.push_back(2);
 d.push_front(3);
 for(int i:d)
 {
     cout<<i<<endl;
 }
 d.pop_back();
 for(int i:d)
 {
     cout<<i<<endl;
 }
 d.push_back(9);
cout<<"Element at first index-> "<<d.at(1)<<endl;

cout<<"Size->"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"Size->"<<d.size()<<endl;
}