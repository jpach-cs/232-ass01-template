//char * AUTHOR_NAME = (char *) "Jakub Pach";
//char * AUTHOR_AUTHORSHIP = (char *) "I acknowledge that I have worked on this assignment independently, except where explicitly noted and referenced. Any collaboration or use of external resources has been properly cited. I am fully aware of the consequences of academic dishonesty and agree to abide by the university's academic integrity policy. I understand the seriousness and implications of plagiarism.";


// --------- FUNCTION IMPLEMENTATIONS ------------
#include <stdio.h>
//#include <cstdint>

// ============================================================
// CSCI 232 - DEBUGGING LAB
//
// General rule:
//
// DO NOT GUESS THE ANSWER.
//
// For every challenge:
//   1. Read the code.
//   2. Uncomment the indicated code.
//   3. Set a breakpoint.
//   4. Run the debugger.
//   5. Inspect Variables.
//   6. Use Step Over / Step Into as requested.
//   7. Use Watch when requested.
//   8. Change the final return value to your observed answer.
//   9. Run the unit tests.
//
// The return value is intentionally 0 before the student
// completes the challenge.
// ============================================================


// ============================================================
// CHALLENGE 01
// Variables + Breakpoint
// ============================================================
//
// Summary
//
// Learn to stop the program at a breakpoint and inspect
// local variables.
//
// TASK:
//
// 1. Set a breakpoint on the line containing "int z".
// 2. Run the debugger.
// 3. Look at x and y in Variables.
// 4. Use Step Over.
// 5. Observe the value of z.
// 6. Change "return 0" to return the value of z.
//
// Expected final form:
//
//     return <your observed value>;
// ============================================================

int challenge01()
{
    int x = 7;
    int y = 3;

    // int z = x * y + 2;

    return 0;
}


// ============================================================
// CHALLENGE 02
// Step Over
// ============================================================
//
// Summary
//
// Practice executing one statement at a time.
//
// TASK:
//
// 1. Uncomment all three statements.
// 2. Set a breakpoint before the first statement.
// 3. Use Step Over.
// 4. Watch the value of x after EACH statement.
// 5. Return the final value of x.
//
// IMPORTANT:
//
// Do not calculate the answer only on paper.
// The purpose is to practice observing program state.
// ============================================================

int challenge02()
{
    int x = 4;

    // x = x * 3;
    // x -= 5;
    // x *= 2;

    return 0;
}


// ============================================================
// CHALLENGE 03
// Watch
// ============================================================
//
// Summary
//
// Learn how to use Watch to follow variables while the
// program executes.
//
// TASK:
//
// 1. Uncomment the three statements.
// 2. Add x and y to Watch.
// 3. Set a breakpoint before the first statement.
// 4. Use Step Over one statement at a time.
// 5. Observe how BOTH variables change.
// 6. Return x + y after all three statements.
//
// IMPORTANT:
//
// Watch x and y instead of relying only on Variables.
// ============================================================

int challenge03()
{
    int x = 3;
    int y = 7;

    // x = x + y;
    // y = x - y;
    // x = x - y;

    return 0;
}


// ============================================================
// CHALLENGE 04
// Global vs Local Variable
// ============================================================
//
// Summary
//
// Learn that a local variable can have the same name as
// a global variable.
//
// TASK:
//
// 1. Set a breakpoint on the first commented statement.
// 2. Uncomment BOTH statements.
// 3. Inspect "value" in Variables.
// 4. Step Over.
// 5. Inspect value
// 6. Return the sum of the final value.
//

// ============================================================

int value = 10;

int challenge04()
{
    int value = 25;

    // value += 5;

    return 0;
}


// ============================================================
// CHALLENGE 05
// Shadowing
// ============================================================
//
// Summary
//
// Practice understanding which variable exists in the
// current scope.
//
// TASK:
//
// 1. Uncomment the statement inside the inner block.
// 2. Set a breakpoint on that statement.
// 3. Look at the different x variables.
// 4. Step Over.
// 5. Continue execution.
// 6. Determine the final values.
// 7. Return:
//
//       outer x + inner x
//
// IMPORTANT:
//
// There are multiple variables named x.
// The debugger should help you determine which one
// is currently active.
// ============================================================

int challenge05()
{
    int x = 10;

    {
        int x = 30;

        // x += 5;
    }

    return 0;
}


// ============================================================
// CHALLENGE 06
// Casting
// ============================================================
//
// Summary
//
// Observe the difference between integer arithmetic and
// floating-point arithmetic.
//
// TASK:
//
// 1. Uncomment both declarations.
// 2. Set a breakpoint before them.
// 3. Inspect a and b.
// 4. Step Over the first statement.
// 5. Step Over the second statement.
// 6. Observe the difference between integer division and
//    floating-point division.
// 7. Return the integer value of result1 * 10 + result2.
//
// NOTE:
//
// The goal is not advanced mathematics.
// The goal is to observe what the debugger shows you.
// ============================================================

int challenge06()
{
    int a = 7;
    int b = 2;

    // int result1 = a / b;
    // double result2 = (double)(a) / b;

    return 0;
}


// ============================================================
// CHALLENGE 07
// Pointer Basics
// ============================================================
//
// Summary
//
// Understand:
//
//     &x     -> address of x
//     y      -> address stored in y
//     *y     -> value located at that address
//
// TASK:
//
// 1. Uncomment the pointer code.
// 2. Set a breakpoint on "*y = 4".
// 3. Before executing the line, inspect:
//
//       x
//       y
//       *y
//
// 4. Use Step Over.
// 5. Inspect x, y and *y again.
// 6. Return the FINAL value of x.
//
// IMPORTANT:
//
// The important observation is:
//
//       y did NOT change.
//       x DID change.
//       *y represents the value stored at x's address.
// ============================================================

int challenge07()
{
    int x = 2;

    // int *y = &x;
    // *y = 4;

    return 0;
}


// ============================================================
// CHALLENGE 08
// Array + Pointer Dereference
// ============================================================
//
// Summary
//
// Understand that an array name can be used as an address
// of its first element.
//
// TASK:
//
// 1. Uncomment the pointer statements.
// 2. Set a breakpoint before the first statement.
// 3. Add p and *(p + 3) to Watch.
// 4. Use Step Over.
// 5. Inspect:
//
//       p
//       *p
//       *(p + 1)
//       *(p + 2)
//       *(p + 3)
//
// 6. Return the value of *(p + 3).
//
// IMPORTANT:
//
// The purpose is to understand:
//
//       p
//       *p
//       *(p + 1)
//
// These are NOT the same thing.
// ============================================================

int challenge08()
{
    int values[] = {10, 20, 30, 40, 50};

    // int *p = values;
    // int result = *(p + 3);

    return 0;
}


// ============================================================
// CHALLENGE 09
// Pointer Arithmetic
// ============================================================
//
// Summary
//
// Observe how pointer arithmetic moves between array
// elements.
//
// TASK:
//
// 1. Uncomment the pointer statements.
// 2. Set a breakpoint before "int *q".
// 3. Watch:
//
//       p
//       q
//       *p
//       *q
//
// 4. Step Over.
// 5. Compare the addresses stored in p and q.
// 6. Determine the value stored at q.
// 7. Return the value of *q.
//
// IMPORTANT:
//
// Do NOT assume:
//
//       p + 1 = one byte later
//
// Pointer arithmetic advances according to the pointed-to
// type.
// ============================================================

int challenge09()
{
    int values[] = {11, 22, 33, 44};

    // int *p = values;
    // int *q = p + 2;

    return 0;
}


// ============================================================
// CHALLENGE 10
// Pointer to Pointer
// ============================================================
//
// Summary
//
// Understand:
//
//       pp -> p -> x
//
// TASK:
//
// 1. Uncomment the pointer-to-pointer code.
// 2. Set a breakpoint before "**pp = 42".
// 3. Inspect:
//
//       x
//       p
//       *p
//       pp
//       *pp
//       **pp
//
// 4. Step Over.
// 5. Inspect all values again.
// 6. Return the final value of x.
//
// IMPORTANT:
//
// The important concept is the chain:
//
//       pp
//        |
//        v
//        p
//        |
//        v
//        x
// ============================================================

int challenge10()
{
    int x = 5;
    int *p = &x;

    // int **pp = &p;
    // **pp = 42;

    return 0;
}


// ============================================================
// CHALLENGE 11
// Step Into + Step Out
// ============================================================
//
// Summary
//
// Practice entering a function with Step Into and leaving
// it with Step Out.
//
// TASK:
//
// 1. Uncomment the call to add().
// 2. Set a breakpoint on the call.
// 3. Use Step Into.
// 4. Inspect a and b inside add().
// 5. Step through the return.
// 6. Use Step Out if necessary.
// 7. Return the result.
//
// IMPORTANT:
//
// Observe that the debugger moves from:
//
//       challenge11()
//             |
//             v
//           add()
// ============================================================

int add(int a, int b)
{
    return a + b;
}

int challenge11()
{
    int x = 7;

    // int result = add(x, 5);

    return 0;
}


// ============================================================
// CHALLENGE 12
// Call Stack
// ============================================================
//
// Summary
//
// Learn to read the Call Stack when several functions
// are active.
//
// TASK:
//
// 1. Uncomment the call to calculate().
// 2. Set a breakpoint inside transform().
// 3. Use Step Into to reach transform().
// 4. Open Call Stack.
// 5. Identify:
//
//       transform()
//       calculate()
//       challenge12()
//       main()
//
// 6. Inspect the variables in the current stack frame.
// 7. Step Out.
// 8. Return the final result.
//
// IMPORTANT:
//
// The Call Stack shows HOW the program reached the current
// function.
// ============================================================

int transform(int x)
{
    return x * 3;
}

int calculate(int x)
{
    return transform(x + 2);
}

int challenge12()
{
    // int result = calculate(4);

    return 0;
}


// ============================================================
// CHALLENGE 13
// Recursion + Call Stack
// ============================================================
//
// Summary
//
// Practice using the Call Stack with recursion.
//
// This is intentionally NOT a normal factorial.
//
// The recursive function performs a left shift and XOR.
// The answer should be discovered by debugging.
//
// TASK:
//
// 1. Uncomment the recursive call.
// 2. Set a breakpoint inside mystery().
// 3. Run mystery(4).
// 4. Use Step Into repeatedly.
// 5. Watch the Call Stack grow.
// 6. Observe the value of n and previous.
// 7. Use Step Out while returning from recursion.
// 8. Determine the final result.
// 9. Replace return 0 with your observed result.
//
// IMPORTANT:
//
// Do not calculate the result first.
// Follow the recursive calls using the debugger.
//
// Bitwise operations:
//
//       <<   left shift
//       ^    XOR
// ============================================================

int mystery(int n)
{
    if (n <= 1)
        return 1;

    // int previous = mystery(n - 1);
    // return (previous << 1) ^ n;

    return 0;
}

int challenge13()
{
    // int result = mystery(4);

    return 0;
}


// ============================================================
// CHALLENGE 14
// BOSS CHALLENGE
//
// Global variable
// Local variable
// Array
// Pointer
// Pointer arithmetic
// Function calls
// Recursion
// Call Stack
// Watch
// Step Into
// Step Over
// Step Out
// ============================================================
//
// Summary
//
// This challenge combines the major skills from the lab.
//
// TASK:
//
// 1. Uncomment the call in challenge14().
// 2. Set a breakpoint in transformData().
// 3. Use Step Into.
// 4. Add these expressions to Watch where appropriate:
//
//       n
//       p
//       *p
//
// 5. Observe the Call Stack.
// 6. Follow the recursive calls.
// 7. Pay attention to:
//
//       p + n
//       *(p + n)
//
// 8. Use Step Out as the recursive calls return.
// 9. Determine the final result.
// 10. Replace return 0 with your observed result.
//
// IMPORTANT:
//
// Do not try to solve this by guessing.
// The purpose of the challenge is to make you use the
// debugger to understand the execution.
// ============================================================

int transformData(int *p, int n)
{
    if (n == 0)
        return *p;

    // int value = *(p + n);
    // return transformData(p, n - 1) + value;

    return 0;
}

int challenge14()
{
    int data[] = {4, 7, 2, 9};

    // int result = transformData(data, 3);

    return 0;
}