/**
 * Copyright 2018 Harsh Parekh.
 * Licensed under GPLv3.
 */

typedef unsigned char uschar;

typedef struct Cell {
 uschar ctype;
 uschar csub;
 int rval; // Index of the register.
 int val;  // Value whenever appropriate.
} Cell;

// Cell type: ctype
#define COPERATOR 1
#define COPERAND 2
#define LABEL 3

//Cell subtype: csub
// OPERATORS
// Data Transfer Group
#define MOV   10
#define MVI   11
#define LXI   12
#define LDA   13
#define STA   14
#define LHLD  15
#define SHLD  16
#define LDAX  17
#define STAX  18
#define XCHG  19
// Arithmetic & Logical Group
#define ADD 20
#define ADC 21
#define ADI 22
#define ACI 23
#define DAD 24
#define SUB 25
#define SBB 26
#define SUI 27
#define SBI 28
#define INR 29
#define DCR 30
#define INX 31
#define DCX 32
#define DAA 33
#define ANA 34
#define ANI 35
#define ORA 36
#define ORI 37
#define XRA 38
#define XRI 39
#define CMA 40
#define CMC 41
#define STC 42
#define CMP 43
#define CPI 44
#define RLC 45
#define RRC 46
#define RAL 47
#define RAR 48
// Branch Group
#define JMP   48
#define JZ    49
#define JNZ   50
#define JC    51
#define JNC   52
#define JP    53
#define JM    54
#define JPE   55
#define JPO   56
#define CALL  57
#define RET   58
#define RST   59
// Machine Control Group
#define IN    60
#define OUT   61
#define PUSH  62
#define POP   63
#define HLT   64
#define XTHL  65
#define SPHL  66
#define EI    67
#define DI    68
#define SIM   69
#define RIM   70
#define NOP   71

// OPERANDS
#define REGISTER  01
#define DATA      02
#define IMM       03
