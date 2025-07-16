#include <stdio.h>

const int GOBAL_RATE = 20;

void calcuate(){
    const int LOCAL_BONUS = 80;
    printf("GLOBAL_RATE = %d\n", GOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);    
}

int main(){
    calcuate();
    printf("GLOBAL_RATE in main = %d\n", GOBAL_RATE);
    return 0;
}


// ค่าคงที่ GLOBAL_RATE เเละ LOCAL_BONUS ต่างกันอย่างไร
   // GLOBAL_RATE เป็นค่าคงที่ระดับglobal เลยใช้ได้ทุกที่ในโปรแกรม ส่วน LOCAL_BONUS จะประกาศอยู่ในฟังก์ชัน calcuate มันเลยจะเรียกใช้ได้เเค่ฟังก์ชันนั้นเท่านั้น ถ้าเรียกที่อื่นจะ error
// เกิดอะไรขึ้นถ้าเขียน  GLOBAL_RATE = 20 หรือ LOCAL_BONUS = 80
   // จะเกิด compile-time error เพราะค่าคงที่ที่ประกาศด้วย const ไม่สามารถเปลี่ยนค่าได้หลังจากประกาศ
// ทำไม LOCAL_BONUS ถึงไม่สามารถดรียกใช้ใน main()ได้
   // เพราะLOCAL_BONUSมันเป็นตัวเเปร local อยู่ในฟังก์ชัน calcuate เท่านั้นmain()ไม่รู้จักตัวเเปรนี้เลย เลยใช้ไม่ได้ ถ้าเรียกใช้ก็จะเจอ error
// อภิปราย เเละสรุปผลการทดลอง
   // ถ้าประกาศตัวเเปรเเบบ const มันจะเปลี่ยนค่าไม่ได้
   // ตัวเเปรที่ประกาศข้างนอก(global) จะใช้ได้ทุกฟังก์ชัน
   // ตัวเเปรที่อยู่ในฟังก์ชัน (local) จะใช้ได้เเค่ในฟังก์ชันนั้น
   // เวลาใช้ตัวเเปรต้อวรู้ว่ามันอยู่ตรงไหน ไม่งั้นจะเรียกใช้ผิดที่ เเล้วโปรแกรมจะ error
