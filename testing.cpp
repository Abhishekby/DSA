#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*
 * element, representing the vector with size of element_size.
 * num, representing the integer to be compared(K).
 */
int noOfElement (vector<int> stock, int valuek)
{

    // Write your code here
    sort(stock.begin(),stock.end());
    
    
    return stock[valuek-1];
}

int main()
{
    
 //input for element
 int element_size;
 cin >> element_size;
 vector<int> element;
 for ( int idx = 0; idx < element_size; idx++ )
 {
  int temp;
  cin >> temp;
  element.push_back(temp);
 }
 //input for num
 int num;
 cin >> num;
 
 
    int result = noOfElement(element, num);
 cout << result;
 
 
    return 0;
}