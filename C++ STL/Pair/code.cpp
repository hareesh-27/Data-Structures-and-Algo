#include<iostream>
using namespace std;
void explpair()
{
  pair<int,int> pr1 = {1,2};                  cout<<pr1.first<<pr2.second;  // 1 2
  pair<int,char> pr2 = {1,"a"};               
  pair<pair<int,char>,int> pr3= { 2,"a",1};   cout<<pr3.first.second<<pr3.second  //2 a 1
}
