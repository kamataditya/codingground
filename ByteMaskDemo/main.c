#include <stdio.h>
#include <stdint.h>

void printByteMask(uint8_t);
uint64_t returnMaskedData(uint64_t, uint8_t);

int main()
{
    uint64_t data = 1311768465173141112; //represents 8 bytes
    uint8_t byteMask = (1<<7)|(1<<5)|(1<<3)|(1<<1); //represents byte masks for the 8 byte data
     
    printf("Unmasked data is %016llx", data);
    printf("\nByte mask is :");
    printByteMask(byteMask);
    
    //uint64_t return data;
    

    return 0;
}

void printByteMask(uint8_t byteMask)
{
    for(int i=0;i<8;i++)
    {
        if(byteMask & 0x1)
            printf("1");
        else
            printf("0");
        
        byteMask>>1;
    }
}

uint64_t returnMaskedData(uint64_t data, uint8_t byteMask)