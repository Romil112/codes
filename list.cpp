#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(5,100);
    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(7);
    l.push_front(8);
     for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    for(int i:l)
    {
        cout<<i<<" ";
    }

}