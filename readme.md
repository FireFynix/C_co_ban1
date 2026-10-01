<!--
File: readme.md
Author: [Khiem]
Created on: [01/10/2026]
Description: [Homework no 2]
-->

## Important: Please Add Your Own Report

Welcome to your report file. In the next section, please add your own report below. You can include your analysis, findings, and any relevant information.

Make sure to add your information to the begining of this file.

### Weekly Task Description

You can find the detailed description of the weekly task in the file: [task_description.md](task_description.md).

### Revision Task

For the revision task, please refer to: [revision.md](revision.md).

---

# Week 2 Report

## PHẦN 2: BÁO CÁO LÝ THUYẾT

### Mục 1: Biến & Hằng số
*   **Khái niệm Biến:** để lưu trữ dữ liệu
*   **Scope (Phạm vi):** 
*   **Từ khóa static, extern, volatile:**
    *   `static`: giới hạn phạm vi biến toàn cục trong file
    *   `extern`: Khai báo biến đã được định nghĩa ở một file khác
    *   `volatile`: Báo cho thằng compiler biết gt biến có thể bị thay đổi bất ngờ bởi phần cứng
*   **Cú pháp khai báo hằng + ví dụ:**
    *   Dùng `#define`: `#define PI 3.14`
    *   Dùng từ khóa `const`: `const int max = 100;`

### Mục 2: Kiểu dữ liệu
*   **Phân loại:**
*   **Miền giá trị:** Vd: `char` là -128 đến 127, `int` là -2147483648 đến 214748364 
*   **Cơ chế lưu trữ bù 2 :** Cách máy tính lưu số âm: Đảo bit của số dương rồi cộng thêm 1
*   **Số thực IEEE 754:** (Số thực được lưu dưới dạng: 1 bit dấu, các bit mũ - exponent, các bit phần định trị - mantissa)
*   **Code in `sizeof`:**
```c
    #include <stdio.h>
    int main() {
        int a;
        printf("Size of int: %lu bytes\n", sizeof(a));
        return 0;
    }
```

### Mục 3: Tràn số nguyên (Integer Overflow)
*   **Định nghĩa:** Hiện tượng xảy ra khi cố gắng lưu một giá trị lớn hơn hoặc nhỏ hơn mức mà kiểu dữ liệu đó có thể chứa
*   **3 đoạn code minh họa (Đảm bảo độc lập):**
    1.  *Tràn số dương có dấu:*
        ```c
        char a = 127;
        a = a + 1; // tràn thành -128
        ```
    2.  *Tràn số âm có dấu:*
        ```c
        char b = -128;
        b = b - 1; // quay lại thành 127
        ```
    3.  *Tràn số không dấu (với Unsigned):*
        ```c
        unsigned char c = 255;
        c = c + 1; // Sẽ quay về 0
        ```
*   **Giải pháp phòng tránh:** 
*   Sử dụng kiểu dữ liệu có kích thước lớn hơn (vd: dùng `long long` thay vì `int`)
*   Kiểm tra điều kiện trước khi thực hiện phép toán cộng/nhân -> đảm bảo kết quả không vượt qua giới hạn

### Mục 4: printf/scanf
*   **Giá trị trả về:**
    *   `printf`: Trả về số lượng ký tự đã in thành công
    *   `scanf`: Trả về số lượng biến đã đọc thành công theo đúng định dạng
*   **Format specifiers thường dùng:** `%d` (int), `%f` (float), `%c` (char), `%s` (string)
*   **Kỹ thuật đọc chuỗi chứa khoảng trắng:** Sử dụng `scanf(" %[^\n]", str);` (Đọc cho đến khi gặp dấu xuống dòng/enter)

### Mục 5: Toán tử
*   **Giá trị phép gán:** Phép gán (vd: `a = 5`) trả về giá trị vừa được gán (là 5). Điều này cho phép gán liên tiếp: `a = b = 5`
*   **Phân biệt `&&`  vs `&` :**
    *   `&&`  và `||` : Trả về kết quả đúng (1) hoặc sai (0) dựa trên tính logic của biểu thức.
    *   `&` và `|`: Toán tử thao tác trên từng bit
*   **Code ví dụ:**
```c
    #include <stdio.h> 
    int main() {
        int a = 5, b = 3;
        printf("Ktra logic: %d\n", a && b); 
        printf("Ktra bit: %d\n", a & b); 
        return 0;
    }
```
### Mục 6: Bảng ASCII

| Thập phân (Dec) | Hex | Ký tự (Char) | Phân nhóm |
| :--- | :--- | :--- | :--- |
| 0 | 0x00 | NUL | Control |
| 10 | 0x0A | LF (\n) | Control |
| 32 | 0x20 | (Space) | Printable |
| 48 | 0x30 | '0' | Printable |
| 65 | 0x41 | 'A' | Printable |
| 97 | 0x61 | 'a' | Printable |


### Mục 7: Lời giải 2 bài toán mẫu
*   **In mã ASCII của ký tự:**
    ```c
    char c = 'A';
    printf("Ky tu %c co ma ASCII la: %d\n", c, c);
    ```
*   **Hoán vị 2 số không dùng biến tạm:**
    ```c
    int a = 5, b = 10;
    int temp = a;
    a = b;
    b = temp; 
    printf("a = %d, b = %d", a, b);
    ```