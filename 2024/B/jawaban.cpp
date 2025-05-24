//
// Created by cahInfor on 24/05/25.
//

#include <iostream>

using namespace std;

int solve(const long long B, const long long C, const long long D) {
    int result = 0;
    const long long candil_bebek = C - D;
    for (long long i = D+1; i <= B; i++) {
        if (candil_bebek % i == 0) {
            result++;
        }
    }

    return result;
}