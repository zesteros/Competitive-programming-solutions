#include <bits/stdc++.h>
using namespace std;

int n, a[120];

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);

    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);

    printf("%d ",a[n-1]);

    return 0;
}