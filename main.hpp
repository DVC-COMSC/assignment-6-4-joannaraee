#include <iostream>
using namespace std;

void swapValues(int &, int &); 
void swapValues(int &, int &, int &); 
void swapValues(int &, int &, int &, int &);  


void swapValues(int &n1, int &n2) {
    int temp = n1; 
    n1 = n2; 
    n2 = temp; 
}

void swapValues(int &n1, int &n2, int &n3) {
    int temp = n1; 
    n1 = n2; 
    n2 = n2; 
    n3 = temp; 
}

void swapValues(int &n1, int &n2, int &n3, int &n4) {
    int temp = n1; 
    n1 = n4; 
    n4 = temp; 
    temp = n2; 
    n2 = n3; 
    n3 = temp; 
}