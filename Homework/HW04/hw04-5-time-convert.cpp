/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/

#include <stdio.h>

int main() {
    
    float days ;

    //รับค่าจำนวนวันจากผู้ใช้
    printf( "Input Days : " ) ;
    scanf( "%f",&days ) ;

    //เเปลงจากหน่วย วัน เป็น วินาที
    float seconds_per_days = 24 * 60 * 60 ;
    float seconds = days * seconds_per_days ;

    // เเสดงผลลัพธิ์
    printf("%0.1f days = %0.1f * seconds\n", days , seconds ) ;

    return 0 ;
}
