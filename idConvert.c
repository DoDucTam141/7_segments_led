#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include<math.h>
/*
* THONG TIN SINH VIEN BAO GOM:                 *
*ID, HO VA TEN, TUOI, QUE QUAN, DIEM TRUNG BINH*
*TINH NANG:                                    *
*THEM, XOA, SUA, TIM SINH VIEN                 *
*XOA, SUA, TIM SINH VIEN PHAI LOC DUOC THEO:   *
* TEN, ID, TUOI, QUE QUAN VA DIEM TRUNG BINH   *
*/
/*TIM HIEU VE GIT*/

void idConvert2Char(int id, char* pLowerBit, char* pHigherBit)
{
    uint8_t arr[16];
    int temp = id;
    for (int i = 0; i < 16; i++)
    {
        arr[i] = temp % 2;
        temp = (temp - arr[i])/2;
        /*printf("%hhd", arr[i]);*/

    }
    int lowerBitNum = 0;
    for (int i = 0; i < 8; i++)
    {
        lowerBitNum = lowerBitNum + arr[i]*pow(2, i);
    }
    int higherBitNum = 0;
    for (int i = 8; i < 16; i++)
    {
        higherBitNum = higherBitNum + arr[i]*pow(2, i - 7);
    }
        *pLowerBit = (char)lowerBitNum;
        *pHigherBit = (char)higherBitNum;

}
int main()
{
    int idNumber = 65;
    char LowerBit = '1';
    char HigherBit = '1';
    idConvert2Char(idNumber, &LowerBit, &HigherBit);
    printf("%c%c\n", LowerBit, HigherBit);
    return 0;
}