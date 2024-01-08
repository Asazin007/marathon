#include <stdio.h>

int countseq(char st[], int len, int n, char seq[]) {
    int count = 0;
    for (int i = 0; i <= n - len; i++) {
        int match = 1;
        for (int j = 0; j < len; j++) {
            if (st[i + j] != seq[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            count++;
            i += len - 1; // Jump to the end of the matched sequence
        }
    }
    return count;
}

void groupAnalyzer(char st[], int len, int n) {
    char seq[len + 1]; // Adding 1 for the null-terminator
    seq[len] = '\0';   // Null-terminating the sequence
    int counted[n - len + 1][len + 1];
    for (int i = 0; i < n - len + 1; i++) {
        for (int j = 0; j < len + 1; j++) {
            counted[i][j] = '\0'; // Initialize to null-terminator
        }
    }

    for (int i = 0; i <= n - len; i++) {
        for (int j = i; j < len + i; j++) {
            seq[j - i] = st[j];
        }
        int alreadyCounted = 0;

        // Check if the sequence has been counted before
        for (int k = 0; k < n - len + 1; k++) {
            int match = 1;
            for (int l = 0; l < len; l++) {
                if (counted[k][l] != seq[l]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                alreadyCounted = 1;
                break; // Break out of the loop once a match is found
            }
        }

        if (!alreadyCounted) {
            int count = countseq(st, len, n, seq);
            printf("%s %d\n", seq, count);

            // Update the counted array with the current sequence
            for (int l = 0; l < len; l++) {
                counted[i][l] = seq[l];
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char ch[n + 1]; // Adding 1 for the null-terminator
    scanf("%s", ch);
    int len;
    scanf("%d", &len);
    groupAnalyzer(ch, len, n);
    return 0;
}
