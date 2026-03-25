# include <stdio.h>   

int main() {
    int n, m, i, j, k;

    // n = number of processes, m = number of resources
    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter number of resource types: ");
    scanf("%d", &m);

    int alloc[n][m], max[n][m], need[n][m];
    int avail[m];

    // Input Allocation Matrix
    printf("\nEnter Allocation Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &alloc[i][j]);
        }
    }

    // Input Max Matrix
    printf("\nEnter Max Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    // Input Available Resources
    printf("\nEnter Available Resources:\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &avail[i]);
    }

    // Calculate Need Matrix = Max - Allocation
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    printf("\nNeed Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    int finish[n], safeSeq[n];
    for(i = 0; i < n; i++) {
        finish[i] = 0;
    }

    int work[m];
    for(i = 0; i < m; i++) {
        work[i] = avail[i];
    }

    int count = 0;

    // Banker's Algorithm Logic
    while(count < n) {
        int found = 0;
        for(i = 0; i < n; i++) {
            if(finish[i] == 0) {
                int flag = 1;
                for(j = 0; j < m; j++) {
                    if(need[i][j] > work[j]) {
                        flag = 0;
                        break;
                    }
                }

                if(flag) {
                    for(k = 0; k < m; k++) {
                        work[k] += alloc[i][k];
                    }

                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }

        if(found == 0) {
            printf("\nSystem is NOT in a safe state.\n");
            return 0;
        }
    }

    printf("\nSystem is in a SAFE state.\nSafe sequence is: ");
    for(i = 0; i < n; i++) {
        printf("P%d ", safeSeq[i]);
    }

    printf("\n");
    return 0;
}
