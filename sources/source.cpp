// Copyright 2020 Your Name <your_email>
#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <utility>
#include <header.hpp>
using namespace std;
float mean(const std:: vector<float>& a)
{
  float k = 0.;
  for (int i = 0; i < a.size(); i++)
  {
    k += a[i];
  }
  return !a.empty() ? k / a.size() : 0;
}
//tasks 2
pair<float, float> minMax(const std::vector<float>&a)
{
  pair<float, float>min_Max;
  if (a.size()!=0)
  {
    min_Max.first = numeric_limits<float>::max();
    min_Max.second = numeric_limits<float>::min();
    for (int i = 0; i < a.size(); i++)
    {
      if (min_Max.first > a[i])
        min_Max.first = a[i];
      if (min_Max.second < a[i])
        min_Max.second = a[i];
    }
  }
  else
  {
    min_Max.first = numeric_limits<float>::min();
    min_Max.second = numeric_limits<float>::max();
  }
  return min_Max;
}
//tasks 3
int argmax(const std::vector<float>& a)
{
  int k = -1;
  float m = numeric_limits<int>::min();
  for (int i = 0; i <a.size(); i++)
  {
    if (m < a[i])
    {
      m=a[i];
      k=i;
    }
  }
  return k;
}
//tasks 4
void sort(vector<float>& a)
{
  int f=0, i;
  float t;
  do
  {
    i=f+1;
    for (i; i < a.size() ; i++)
    {
      if (a[f] > a[i])
      {

        t = a[f];
        a[f] = a[i];
        a[i] = t;
      }
    }
    f++;
  } while (f<a.size());
}
//tasks 5
bool remove_first_negative_element (vector<int>& vec, int& removed_element)
{
  if (vec.size()!=0)
  {
    for (int i = 0; i < vec.size(); i++) {
      if (vec[i] < 0) {
        removed_element = vec[i];
        vec.erase(vec.begin() + i);
      }
      if (removed_element != 0) i = vec.size();
    }

    if (removed_element != 0) {
      return true;
    } else
      return false;
  }
  else
    return false;
}

//tasks 6
string replace(const string& str, const string& old, const string& new_string)
{

  string str1;
  str1 = str;
  int n = static_cast<int>(str.find(old));
  while (n != -1)
  {
    str1.replace(n, new_string.length(), new_string);
    n = static_cast<int>(str1.find(old));
  }
  return str1;
}
//tasks 7
vector<string> split(string& str, char sep)
{
  string str1;
  vector<string> st;
  str1 = str;
  int n = static_cast<int>(str.find(sep));
  while (n != -1 && static_cast<int>(str1.length() != 1))
  {
    string s = str1.substr(0, str1.find(sep));
    st.emplace_back(s);
    str1.erase(0, static_cast<int>(s.size()+1));
    n = static_cast<int>(str1.find(sep));
  }
  if (!str.empty() && str1[0] != sep){
    st.emplace_back(str1);
  }
  return st;
}
// tasks 8
string join(const vector<string>& str, const string& sep)
{
  string s;
  for (string i :str){
    s += (i + sep);
  }
  s.erase(static_cast<int>(s.size()) - static_cast<int>(sep.size()));
  return s;
}

