#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <utility>
using namespace std;
float mean(const vector<float>& a);
pair<float, float> minMax(const vector<float>&a);
int argmax(const vector<float>&a);
void sort(vector<float>& a);
bool remove_first_negative_element (vector<int>& vec, int& removed_element);
string replace(const string& str, const string& old, const string& new_string);
vector<string> split(string& str, char sep);
string join(const vector<string>& str, const string& sep);
#endif // INCLUDE_HEADER_HPP_

