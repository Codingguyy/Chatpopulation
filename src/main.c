#include <tice.h>
#include <stdlib.h>
#include <keypadc.h>
#include <stdint.h>
#include <graphx.h>
#include <string.h>
/* Main function, called first */
int main(void){
const char *chars = "\0\0\0\0\0\0\0\0\0\0\"wrmh\0\0?[vqlg\0\0:zupkfc\0 ytojeb\0\0xsnida\0\0\0\0\0\0\0\0";
uint8_t key, i = 0;
char buffer[50];
buffer[i] = 0;
 

	uint24_t people;
	people = 3;

    gfx_Begin();

	gfx_Rectangle(10,10,300,211);
	gfx_PrintStringXY(">", 15,212);

    key = os_GetCSC();
while (!(key == sk_Clear)){
	 key = os_GetCSC();
    if(chars[key]) {
        buffer[i++] = chars[key];
		buffer[i] = 0;
		gfx_PrintStringXY(buffer, 23,211);
    }

	 if (key == sk_Enter){
	 		if (strcmp(buffer, "stat") == 0){
				gfx_ShiftUp(8);	
				gfx_SetColor(255);
				gfx_FillRectangle(11,210,300,11);
				gfx_PrintStringXY(">", 15,212);
				gfx_SetColor(0);
				gfx_Rectangle(10,10,300,211);
				memset(buffer, 0, sizeof(buffer));
				
	i = 0;
	}
}
}

return 0;
gfx_End();
}
