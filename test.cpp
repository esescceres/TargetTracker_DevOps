#include <iostream>
#include <cassert> // Test fonksiyonları (assert) için gerekli kütüphane

// Asıl programımızdaki hedef kontrol mantığı
bool isTargetInView(int x, int y) {
    if (x < 0 || x > 1920) return false;
    if (y < 0 || y > 1080) return false;
    return true;
}

int main() {
    std::cout << "--- Running Automated Tests ---" << std::endl;

    // Test 1: Normal, geçerli koordinatlar geldiğinde sistem "true" dönmeli
    assert(isTargetInView(960, 540) == true);

    // Test 2: Sensör arızalandı ve X koordinatı eksi (-) geldi. Sistem "false" dönmeli
    assert(isTargetInView(-50, 500) == false);

    // Test 3: Sensör ekran dışı çok büyük bir Y değeri gönderdi. Sistem "false" dönmeli
    assert(isTargetInView(1000, 2500) == false);

    std::cout << "Success: All tests passed successfully!" << std::endl;
    
    // 0 dönmesi, DevOps pipeline'ına "Her şey yolunda, yeşil ışık yak" demektir.
    return 0; 
}