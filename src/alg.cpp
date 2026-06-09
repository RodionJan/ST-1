// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrim(uint64_t val) {
    if (val < 2) return false;
    if (val == 2) return true;
    if ((val & 1) == 0) return false;
    
    uint64_t d = 3;
    while (d * d <= val) {
        if (val % d == 0) return false;
        d += 2;
    }
    return true;
}

uint64_t nPrim(uint64_t x) {
    if (x == 0) return 0;
    if (x == 1) return 2;
    
    uint64_t found = 1;
    uint64_t num = 3;
    
    while (found < x) {
        if (checkPrim(num)) {
            found++;
        }
        if (found < x) {
            num += 2;
        }
    }
    return num;
}

uint64_t nextPrim(uint64_t valu) {
    uint64_t next = valu + 1;
    if (next <= 2) return 2;
    while (!checkPrim(next)) {
        next++;
    }
    return next;
}

uint64_t sumPrim(uint64_t bound) {
    uint64_t total = 0;
    for (uint64_t n = 2; n < bound; n++) {
        if (checkPrim(n)) {
            total += n;
        }
    }
    return total;
}
