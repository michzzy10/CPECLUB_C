CPEHUB Week 2:Memory Management & System Logic
This directory contains three projects focused on low-level memory manipulation, structured data, and security concepts in C. 
1. Mini Firewall (Packet Filtering)   Objective: Design a firewall that filters and orders network packets based on priority and sequence.
*  Logic: The firewall processes 10 packets, each assigned a serial number and a priority (1 = highest).
*  Priority Rules: Output is ordered first by highest priority and then by lowest serial number for packets with matching priorities.
*  Skills: Arrays of structs, nested sorting algorithms, and multi-condition logic.
  
2. Shell-Based "Phonebook"   Objective: Manage a contact database using structured data and direct memory manipulation.
*  Logic: Defined a Contact struct with fixed-size character arrays for names and phone numbers.
*  Pointer Challenge: Implemented "Pass by Reference" by passing pointers to memory addresses instead of entire structs.
*  Skills: struct definition, pointer dereferencing, and handling strings with Null terminators (\0).
  
3. Simple Substitution Cipher   Objective: Create a security tool that encrypts messages by manipulating bytes.
*  Logic: The program shifts ASCII values of characters based on a user-provided integer "key."
*  Pointer Challenge: Used a pointer to iterate through the contiguous memory block where the string is stored, dereferencing the pointer (*) to modify characters        until the Null terminator is reached.
*  Skills: ASCII manipulation, pointer arithmetic, and understanding memory-level vulnerabilities.  
