#include<stdio.h>
#include<stdbool.h>

bool dp[69][100009];
int N, S, A[10009];

int main() {
    scanf("%d %d", &N, &S);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
    };

    dp[0][0] = true;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            if (dp[i-1][j] == true) dp[i][j] =true;
            if(j >= A[i]){
                if (dp[i-1][j-A[i]] == true) dp[i][j] = true;
            };
        };
    };
    
    if (dp[N][S] == true) {
        printf("Yes");
    } else {
        printf("No");
    };
}