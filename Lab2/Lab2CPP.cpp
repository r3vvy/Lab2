﻿#include<iostream>
using namespace std;
int main() {

    int i = 69;  

    int number = 72; 

    i = i + number; 

    int array[3] = { 0,0,0 }; 

    int* iPointer = &i; 

    number = *iPointer; 

    *iPointer = 15;

    iPointer = &array[0]; 

    iPointer += 2;

    array[0] = 5;

    *iPointer = 6;
}