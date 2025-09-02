#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    int t = 1;
    while (t--) {
        ll n, m, vuong_size;
        scanf("%lld %lld %lld", &n, &m, &vuong_size);

        // Số viên đá cần theo chiều dọc
        ll doc = (n + vuong_size - 1) / vuong_size;

        // Số viên đá cần theo chiều ngang
        ll hang = (m + vuong_size - 1) / vuong_size;

        // Tổng số viên đá cần dùng
        ll kq = doc * hang;

        printf("%lld\n", kq);
    }
}




