#include <stdio.h>
//using namespace std;

int main() {
    int n, m;
// cin >> n >> m;
    scanf("%d%d",&n,&m);
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            a[i][j] = i - j;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            // cout << a[i][j] << " ";
            printf("%d ", a[i][j]);
        }
        printf("\n");
        // cout << endl;
    }

    return 0;
}
