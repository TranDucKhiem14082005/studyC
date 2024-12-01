#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_N 30

int n, S; 
int coins[MAX_N];  
int bestSolution[MAX_N];  
int minCoins = INT_MAX; 


int bound(int index, int sum, int count, int *current) {
    if (sum >= S) return count; 
    if (index == n) return INT_MAX;  
    int remaining = S - sum;
    int tMax = coins[index];
    return count + (remaining + tMax - 1) / tMax;  
}

int main() {
	FILE *inp = fopen("ATM.inp", "r");
    FILE *out = fopen("ATM_out.out", "w");

    fscanf(inp, "%d %d", &n, &S);  
    for (int i = 0; i < n; ++i) {
        fscanf(inp, "%d", &coins[i]);  
    }
}
