# Interpreter

Construct an interpretor written in C language to interpret an assembly language based on the following basic instructions for a machine having only one register, which is accumulator, and all the operands are in memory:

| Opcode | Operand	Comment |
| -------- | -------- |
| ADD X    | Add memory location x into acc.    |
| SUB X    | Substract X from Acc.    |
| MUL X    | Multiply X with Acc.    |
| DIV X    | Divide acc. by X.    |
| AND X    | And X with acc.    |
| NOT X    | Complement acc.    |
| OR X    | Or X with acc.    |
| LD X    | Load memory location X at acc.    |
| ST X    | Store acc. at memory location X    |
