# C++ Experiment 4: To study and implement C++ Bitwise Operators

## Aim

To:
1. To do basic bitwise operators.
2. To set and reset specific bits of given number

---

## Objectives

- To use bitwise operators(`&`,`|`,`^`,`~`,`<<`,`>>`)
- To understand the logic behind setting and resetting specific bits using left shift and bitwise operators.

---

## Theory
### What are Bitwise Operators?
- Bitwise operators perform operations directly on binary bits of integers.
- Each bit is either 0 or 1, and these operators let us manipulate bits individually, unlike arithmetic or logical operators which operate on entire values.

- They are commonly used in:
- Embedded systems and microcontrollers
- Cryptography
- Digital logic simulation
- Memory-efficient coding (e.g., flags and masks)
  
| Operator    | Symbol | Description                                     |
|-------------|--------|-------------------------------------------------|
| AND         | `&`    | Sets bit to 1 only if both bits are 1           |
| OR          | `\|`   | Sets bit to 1 if at least one bit is 1          |
| XOR         | `^`    | Sets bit to 1 if only one of the bits is 1      |
| NOT         | `~`    | Inverts all bits (0 becomes 1, 1 becomes 0)     |
| Left Shift  | `<<`   | Shifts bits to the left, multiplying by 2       |
| Right Shift | `>>`   | Shifts bits to the right, dividing by 2         |

    

###  Set and Reset a Bit
- In many applications, especially in embedded systems, hardware control, and memory optimization, we often need to change only one specific bit in a number — not the whole number.

- This is useful for:
-- Turning on/off a feature (flags)
-- Controlling specific hardware bits (like LEDs, relays, sensors)
-- Performing fast and memory-efficient operations

- Setting a bit means changing a specific bit to 1, regardless of its current value.
- `1 <<` pos shifts 1 to the left by pos bits, creating a mask.
- Bitwise OR `|` ensures the bit at that position becomes 1.
- Other bits remain unchanged.

- Resetting a bit means changing a specific bit to 0, regardless of its current value.
- 1 << pos creates a mask with 1 at the desired position.
- `~` inverts the mask to have 0 at the bit we want to reset.
- Bitwise AND & turns that bit to 0, leaving other bits unchanged.

## Program Description

### ✅ Part 1: Syntax
- We define 2 numbers and perform bitwise operations on them.
- `AND` returns 1 only when both the bit inputs are 1.
- `Right Shift` shifts all the 1s towards right side, basically divides the number by 2.
- `Left Shift` shifts all the 1s towards left side, basically multiplies the number by 2.
- `XOR` returns one only when the bit inputs are not equal to each other.
- `NOT` returns the Two's complement of the entered number.
- `OR` returns 1 even if any of the bit input is 1.
- However, the output of the program is decimal.
  
### ✅ Part 2: Logic
 - Set specific bits -  num | (1 << bit_position)
 - Reset specific bits - num & (~(1 << bit_position))
---

## Concepts Used

- Bitwise Operator(`&`,`|`,`^`,`~`,`<<`,`>>`)
- Set and reset specific bits

---
### 🧪 Sample Output
- Set and Reset Operations
```
Enter a number to be set: 
33
Enter the position of bit to be set: 
4
Enter a number to be reset: 
44
Enter the position of bit to be reset: 
5
Set number: 49
Reset number: 12
```
-  Bitwise operators
```
Enter 2 numbers :
33
55
And :33
XOR :22
OR :55
Left Shift :132
Right Shift :8
NOT :-56
```

