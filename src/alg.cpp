// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrim(uint64_t val) {
    if (val <= 1) return false;
    if (val == 2) return true;
    if (val % 2 == 0) return false;
    for (uint64_t i = 3; i * i <= val; i += 2) {
        if (val % i == 0) return false;
    }
    return true;
}

uint64_t nPrime(uint64_t x) {
    if (x == 0) return 0;
    if (x == 1) return 2;
    uint64_t count = 1;
    uint64_t candidat = 3;
    while (count < x) {
        if (checkPrime(candidat)) {
            count++;
        }
        if (count < x) {
            candidat += 2;
        }
    }
    return candidat;
}

uint64_t nextPrime(uint64_t valu) {
    uint64_t candidat = valu + 1;
    if (candidat <= 2) return 2;
    while (!checkPrime(candidat)) {
        candidat++;
    }
    return candidat;
}

uint64_t sumPrime(uint64_t bound) {
    uint64_t summ = 0;
    for (uint64_t i = 2; i < bound; i++) {
        if (checkPrime(i)) {
            summ += i;
        }
    }
    return summ;
}
