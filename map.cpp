#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> marksmap;
    marksmap["Atul"]=15;
    marksmap["Rajesh"]=43;
    marksmap["Vijay"]=64;
    marksmap["Sanya"]=38;
    map<string,int>:: iterator s;
    for(s=marksmap.begin();s!=marksmap.end();s++)
    {
             cout<<(*s).first<<" "<<(*s).second<<endl;
    }
    marksmap.insert({{"Rohan",16},{"Himani",23}});
    for(s=marksmap.begin();s!=marksmap.end();s++)
    {
             cout<<(*s).first<<" "<<(*s).second<<endl;
    }
}