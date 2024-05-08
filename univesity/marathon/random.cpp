#include <stdio.h>

int main() {
    int t, n, i;
    scanf("%d", &t); // Read number of test cases
    while (t--) {
        scanf("%d", &n); // Read number of segments
        int li, ri;
        int current_min, current_max;
        int possible = 1; // Flag to check if completing the level is possible

        for (i = 0; i < n; i++) {
            scanf("%d %d", &li, &ri);
            if (i == 0) {
                // Initialize with the first segment
                current_min = li;
                current_max = ri;
            } else if (possible) {
                // Only update if still possible
                if (current_min < li) current_min = li;
                if (current_max > ri) current_max = ri;
                
                // If range becomes invalid
                if (current_min > current_max) {
                    possible = 0; // Mark as impossible to proceed
                }
            }
        }
        
        if (possible) {
            // The final answer for this test case, if possible
            printf("%d\n", current_max);
        } else {
            // Output a marker or assumption value when not possible (needs specification)
            printf("-1\n"); // Assuming -1 to denote impossible cases, adjust as needed
        }
    }
    return 0;
}
