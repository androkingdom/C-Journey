# Void Functions in C

## Overview
In C programming, a `void` function is a function that **does not return a value**. Instead, it performs an action or a series of actions and then exits. These functions are commonly used when a task needs to be executed without the need to return any result to the caller.

## Function Prototype
```c
void SayHello();
```
The function prototype declares the function `SayHello` as a `void` function, meaning it doesn't return any value.

## Function Definition
```c
void SayHello(){
    printf("Hello Guys !!");
}
```
The function definition provides the implementation of `SayHello`. It simply prints the message "Hello Guys !!" to the console.

## Main Function
```c
int main(){
    SayHello(); // Calling Function "SayHello"
    return 0;
}
```
In the `main` function, the `SayHello` function is called, which executes its code and prints the message.

## Key Points
- **Void Functions**: A `void` function does not return any value. It is used when the task to be performed does not require any output to be returned.
- **Function Call**: The function `SayHello` is called in the `main` function. Since it has no return value, there's no need to capture any output.

## Example Output
When you run this program, the output will be:
```
Hello Guys !!
```