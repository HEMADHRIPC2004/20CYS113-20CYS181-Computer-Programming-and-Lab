#include <stdio.h>

int main() {
    // Define matrices A and B
    
    int A[3][3];
    int B[3][3];
    int C[3][3];
    for(int x=0; x<3; x++) {
        for(int y=0; y<3; y++) {
            scanf("%d", &A[x][y]);
        }
    }
    
    for(int u=0; u<3; u++) {
        for(int v=0; v<3; v++) {
            scanf("%d", &B[u][v]);
        }
    }
    // Perform matrix multiplication
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++) {
            int sum = 0;
            for(int k = 0; k < 3; k++) {
                sum += A[x][k] * B[k][y];
            }
            C[x][y] = sum;
        }
    }

    // Print the resultant matrix
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++) {
            printf("%d ", C[x][y]);
        }
        printf("\n");
    }

    return 0;
}

