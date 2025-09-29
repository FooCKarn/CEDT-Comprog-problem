#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1) while loop (ทำซ้ำตราบใดที่เงื่อนไขยังเป็นจริง)
    
        int i = 0;
        while (i++ <3) {      // เงื่อนไขตรวจทุกครั้งก่อนเข้า
            cout<<i<<endl;            // อย่าลืมเพิ่ม/ลดค่าเพื่อหลุดลูป
        }
    

    // 2) do-while loop (รันอย่างน้อย 1 ครั้งก่อนค่อยเช็กเงื่อนไข)
        int x = 0;
        do {
            cout << "[do-while] runs at least once. x=" << x << "\n";
            x++;
        } while (x < 1);
    

    // 3) common for loop (รูปแบบที่ใช้บ่อย: เริ่ม; เงื่อนไข; ปรับค่า)
    
        int n = 5, sum = 0;
        for (int i = 0; i < n; ++i) {  // i = 0..n-1
            sum += (i + 1);
        }
        cout << "[for] sum 1.." << n << " = " << sum << "\n";
    

    // 4) ลูปแบบลดค่า (decrement order)
    
        cout << "[dec] ";
        for (int i = 5; i >= 1; --i) { // นับถอยหลัง 5..1
            cout << i << (i == 1 ? "\n" : " ");
        }
    

    // 5) ลูปที่มี break และ continue
    
        cout << "[break/continue] ";
        for (int i = 1; i <= 10; ++i) {
            if (i % 2 == 0) continue; // ข้ามเลขคู่ (ข้ามรอบนี้ไป)
            if (i > 7) break;         // หยุดทั้งลูปเมื่อเงื่อนไขจริง
            cout << i << " ";
        }
        cout << "\n";
    

    // 6) range-based for loop (C++11+) — เขียนสั้น อ่านง่าย

        vector<int> a = {3, 1, 4, 1, 5};
        cout << "[range-for] ";
        for (int v : a) {              // อ่านค่าอย่างเดียว
            cout << v << " ";
        }
        cout << "\n";

        // ถ้าจะ “แก้ค่า” ใช้ reference
        for (int &v : a) v *= 2;
        cout << "[range-for ref] ";
        for (int v : a) cout << v << " ";
        cout << "\n";
    

    // 7) nested loops (ลูปซ้อนลูป)
    
       cout << "[nested] 1..3 x 1..3 = products\n";
        for (int i = 1; i <= 3; ++i) {        // ลูปนอก: แถว
            for (int j = 1; j <= 3; ++j) {    // ลูปใน: คอลัมน์
                cout << i * j << (j == 3 ? "\n" : " ");
            }
        }
    

     //8) ลูปแบบใช้ธง (flags/sentinel) เพื่อหยุดเมื่อ “พบ” สิ่งที่ต้องการ
    
        vector<int> a = {10, 20, 30, 40};
        int target = 30;
        bool found = false;                    // ธงเริ่มต้น: ยังไม่พบ
        for (int v : a) {
            if (v == target) { found = true; break; } // พบแล้วหยุดทันที
        }
        cout << "[flag] found? " << (found ? "yes" : "no") << "\n";
    

    // 9) ข้อผิดพลาดที่พบบ่อย: ลูปไม่สิ้นสุด (infinite loop)
    
        // ❌ ลืมเพิ่ม/ลดค่าใน while → เงื่อนไขจริงตลอด ลูปไม่จบ
        // int i = 0;
        // while (i < 3) { cout << i << " "; /* ไม่มี i++ */ }

        // ✅ แก้: ต้องปรับค่าตัวแปรให้เข้าใกล้จุดสิ้นสุด
        /*cout << "[fix infinite] ";
        int i = 0;
        while (i < 3) { cout << i << " "; i++; }
        cout << "\n";*/

        // ❌ ใส่ ; ต่อท้าย for โดยไม่ตั้งใจ → บล็อกข้างล่างหลุดจากลูป
        // for (int k = 0; k < 3; k++); { cout << "not in loop\n"; }
        // ✅ แก้: เอา ; ที่ไม่จำเป็นออก
    

    // 10) ข้อผิดพลาด: off-by-one (+1/-1 พลาดจนเกินขอบเขต)
    
         vector<int> a = {7, 8, 9};
        int n = (int)a.size();

        // ❌ พลาดเขียน i <= n ทำให้เข้าถึง a[n] (เกินขอบ)
        // for (int i = 0; i <= n; i++) cout << a[i] << " "; // OOB!

        // ✅ เขียนให้ชัดเจน: ใช้ i < n
        cout << "[off-by-one] ";
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";

        // เคส “Fencepost” (เว้นวรรคคั่น แต่ไม่อยากเว้นท้ายสุด)
        // cout << "[fencepost] ";
        // for (int i = 1; i <= n; i++) {
        //     cout << i;
        //     if (i < n) cout << " ";   // เช็กเงื่อนไขคั่น “เฉพาะก่อนตัวสุดท้าย”
        // }
        // cout << "\n";
    

    // 11) ข้อผิดพลาด: แก้ค่าตัวแปรลูปโดยไม่ตั้งใจ & ขอบเขตตัวแปร (scope)
    {
        /*cout << "[modify var] ";
        for (int i = 0; i < 5; i++) {
            cout << i << " ";
            // ❌ หลีกเลี่ยงการแก้ i แบบสุ่ม เช่น i += 2; จะข้ามค่าที่ต้องการ
            // ✅ ถ้าจำเป็นต้อง “กระโดด” ให้คอมเมนต์ชัดเจนว่าทำไม
        }
        cout << "\n";

        // ตัวอย่าง scope: ตัวแปรในลูปใช้ได้แค่ด้านในเท่านั้น
        for (int t = 0; t < 2; t++) {
            int inside = 42;           // ใช้ได้เฉพาะในบล็อกนี้
        }
        // ❌ จะ compile error ถ้าเรียกใช้ inside ตรงนี้
        // cout << inside;

        // Shadowing: ชื่อทับกัน อ่านยาก เสี่ยงงง
        int x = 5;
        {
            int x = 10; // ตัวนี้ “บัง” x ข้างนอก
            cout << "[shadow inner x] " << x << "\n"; // 10
        }
        cout << "[shadow outer x] " << x << "\n";     // 5*/
    }

    return 0;
}
