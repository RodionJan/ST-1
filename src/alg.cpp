// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrim(uint64_t val) {
    if (val < 2) return false;
    if (val == 2) return true;
    if ((val & 1) == 0) return false;

    uint64_t divisor = 3;
    while (divisor * divisor <= val) {
        if (val % divisor == 0) return false;
        divisor += 2;
    }
    return true;
}

uint64_t nPrim(uint64_t x) {
    if (x == 0) return 0;
    if (x == 1) return 2;

    uint64_t found = 1;
    uint64_t candidate = 3;

    while (found < x) {
        if (checkPrim(candidate)) {
            found++;
        }
        if (found < x) {
            candidate += 2;
        }
    }
    return candidate;
}

uint64_t nextPrim(uint64_t valu) {
    uint64_t next = valu + 1;
    if (next < 3) return 2;

    while (!checkPrim(next)) {
        next++;
    }
    return next;
}

uint64_t sumPrim(uint64_t bound) {
    uint64_t total = 0;
    for (uint64_t num = 2; num < bound; num++) {
        if (checkPrim(num)) {
            total += num;
        }
    }
    return total;
}
