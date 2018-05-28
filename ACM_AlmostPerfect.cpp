/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ACM_AlmostPerfect.cpp
 * Author: tongd
 *
 * Created on November 25, 2017, 2:50 AM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

/*
 * 
 */
int main() {
    int num;
    while(cin >> num) {
        int sum = 1;
        int upperBound = sqrt(num);
        for(int lowerBound = 2; lowerBound <= upperBound; lowerBound++) {
            if (num % lowerBound == 0) {
                if(lowerBound != num/lowerBound) {
                    sum = sum + lowerBound + num/lowerBound;   
                }
                else sum = sum + lowerBound;             
            }
        }
        if (sum == num) cout << num << " perfect" << endl;
        else if (num - sum <= 2 && num - sum >= -2) cout << num << " almost perfect" << endl;
        else cout << num << " not perfect" << endl;
    }
    return 0;
}

