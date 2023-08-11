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
    
    int days ;

    //รับค่าจำนวนวันจากผู้ใช้
    printf( "Input Days : " ) ;
    scanf( "%d",&days ) ;

    //เเปลงจากหน่วย วัน เป็น วินาที
    int seconds_per_days = 24 * 60 * 60 ;
    int seconds = days * seconds_per_days ;

    // เเสดงผลลัพธิ์
    printf("%d days = %d seconds\n", days , seconds ) ;

    return 0 ;
}
