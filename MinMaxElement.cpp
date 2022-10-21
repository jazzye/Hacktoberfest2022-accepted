//MinMax Element in CPP

#include<iostream>   
#include<algorithm>   
#include<vector>   
using namespace std;   
    
int main()   
{   
    // initializing vector of integers   
    vector<int> vi = { 5, 3, 4, 4, 3, 5, 3 };   
            
    // declaring pair pointer to catch the return value   
    pair<vector<int>::iterator, vector<int>::iterator> mnmx;   
            
    // using minmax_element() to find   
    // minimum and maximum element   
    // between 0th and 3rd number   
    mnmx = minmax_element(vi.begin(), vi.begin() + 4);   
            
    // printing position of minimum and maximum values.   
    cout << "The minimum value position obtained is : ";   
    cout << mnmx.first - vi.begin() << endl;   
            
    cout << "The maximum value position obtained is : ";   
    cout << mnmx.second - vi.begin() << endl;   
            
    cout << endl;   
            
    // using duplicated   
    // prints 1 and 5 respectively   
    mnmx = minmax_element(vi.begin(), vi.end());   
            
    // printing position of minimum and maximum values.   
    cout << "The minimum value position obtained is : ";   
    cout << mnmx.first - vi.begin() << endl;   
            
    cout << "The maximum value position obtained is : ";   
    cout << mnmx.second - vi.begin()<< endl;   
      
    return 0;  
}   
