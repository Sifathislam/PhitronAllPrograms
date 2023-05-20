#include <stdio.h>

int main() {
    // Take input of the number of test cases
    int test_case;
    scanf("%d", &test_case);

    // Run the test cases
    for (int t = 1; t <= test_case; t++) {
        // Take input of the list size
        int n;
        scanf("%d", &n);

        int arry[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arry[i]);
        }

        // Take input of the number to find
        int s;
        scanf("%d", &s);

        // Flag to check if the number is found
        int found = 0;
        // Variable for position of the number
        int position = -1;
    // find the numeber
        for (int i = 0; i < n; i++) {
            if (arry[i] == s) {
                found = 1;
                position = i + 1; // Add 1 to get the 1-baswsed position
                break;
            }
        }

        // Print the result
        if (found) {
            printf("Case %d: %d\n", t, position);
        } else {
            printf("Case %d: Not Found\n", t);
        }
    }

    return 0;
}
