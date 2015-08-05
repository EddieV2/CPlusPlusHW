#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
int items = 0;
vector<int> weight(items);

cout << "Number of items: " << flush;
cin >> items;

weight.resize (items);

 for (vector<int>::size_type i = 0; i < items; i++)
 {
 cout << "Enter weight of item " << i+1
 << ": " << flush;
 cin >> weight[i];
 }
 
 cout << "The weight in order from highest to lowest is: ";
 sort(weight.rbegin(), weight.rend());
  for (vector<int>::iterator it=weight.begin(); it!=weight.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
    
float sum = 0;
 
for(vector<int>::iterator i = weight.begin(); i != weight.end(); ++i)
    sum += *i;
    
    cout << "The sum of the weights are: " << sum << endl;


auto it = max_element(begin(weight), end(weight));

float percentage = (*it/sum) * 100;

cout << "The percentage the highest weight is of the total weight is: " << percentage << "%" << endl; 
    
 
 return 0;
 
}