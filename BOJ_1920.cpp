#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

// B1에 수정사항
int main(void)
{
    int N, M, tmp;
    vector<int> A;
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%d", &tmp);
        A.push_back(tmp);
    }

    sort(A.begin(), A.end());

    scanf("%d", &M);
    for (int i=0; i<M; i++) {
        scanf("%d", &tmp);
        printf("%d\n", binary_search(A.begin(), A.end(), tmp));
    }
}