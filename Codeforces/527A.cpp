#include <stdio.h>
#define ll long long

ll a, b, r;

void swap(ll &x,ll &y) {
    ll z = x;
    x = y;
    y = z;
}

int main() {
    scanf("%I64d %I64d",&a,&b);

    if(b > a)
        swap(a,b);

    while(b) {
        r += a / b;

        ll z = a;
        a = b;
        b = z%b;
    }

    printf("%I64d",r);

    return 0;
}