# GIFT — Lời giải (Quy hoạch động)

## Đề bài
Jame có N món quà, món quà thứ i có giá trị là Ai.  
Jame muốn tặng N món quà này cho hai bạn sao cho độ chênh lệch giữa tổng giá trị các món quà mà mỗi bạn nhận được là nhỏ nhất.

**Input (GIFT.INP)**
- Dòng 1: N (số món quà)
- Dòng 2: N số nguyên dương A1 A2 ... AN

**Output (GIFT.OUT)**
- Một số nguyên: độ chênh lệch nhỏ nhất giữa tổng giá trị hai phần.

---

## Lưu ý về công thức trong Markdown
Một số trình đọc Markdown **không hỗ trợ LaTeX** (ví dụ `\sum`) mặc định.  
Để tránh lỗi hiển thị, trong file này mình **không dùng lệnh LaTeX** mà dùng ký hiệu ASCII đơn giản.

---

## Phân tích (dạng chữ, không dùng LaTeX)
- Tổng tất cả các quà: S = A1 + A2 + ... + AN
- Nếu chọn một tập con có tổng T thì phần còn lại có tổng S - T.
- Độ chênh lệch giữa hai phần: |(S - T) - T| = |S - 2*T|
- Bài toán quy về: tìm T (tổng của một tập con) gần nhất với S/2.

---

## Ý tưởng giải (Quy hoạch động - Subset Sum)
- Dùng mảng dp:
  - dp[j] = true nếu có thể tạo tổng j từ một số phần tử.
  - Khởi tạo: dp[0] = true.
  - Cập nhật với mỗi phần tử x: duyệt j từ half xuống x, nếu dp[j-x] là true thì dp[j] = true.
- Sau khi duyệt hết, tìm j ≤ S/2 lớn nhất mà dp[j] = true.
- Kết quả: ans = S - 2*j

---

## Độ phức tạp
- Thời gian: O(N * (S/2))
- Bộ nhớ: O(S/2)
- Thích hợp khi tổng S không quá lớn (ví dụ N ≤ 100, Ai ≤ 1000).

---

## Code (C++), đọc/ghi file GIFT.INP và GIFT.OUT

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Đọc từ file input, ghi ra file output
    freopen("GIFT.INP", "r", stdin);
    freopen("GIFT.OUT", "w", stdout);

    int N;
    if (!(cin >> N)) return 0;
    vector<int> A(N);
    long long S = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        S += A[i];
    }

    int half = S / 2;
    vector<char> dp(half + 1, false);
    dp[0] = true;

    for (int x : A) {
        for (int j = half; j >= x; --j) {
            if (dp[j - x]) dp[j] = true;
        }
    }

    int best = 0;
    for (int j = half; j >= 0; --j) {
        if (dp[j]) { best = j; break; }
    }

    cout << llabs(S - 2LL * best) << "\n";
    return 0;
}
```

---

## Ví dụ mẫu (GIFT.INP)
```
8
4 6 25 41 10 35 27 16
```
Kết quả (GIFT.OUT) sẽ là:
```
4
```

---
