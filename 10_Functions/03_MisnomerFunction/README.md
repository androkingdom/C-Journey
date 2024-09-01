## Overview
There's a function called `change` that attempts to change the value of a variable. However, the change doesn't affect the original variable in the `main` function. Here's why:
## Code Explanation

```c
int change(int a) {
    a = 77; // Misnomer
    return 0;
}
```

- **Function `change`**: This function takes an integer `a` as a parameter and attempts to set its value to `77`.
- **Misnomer**: The comment "Misnomer" suggests that the name or action is misleading, indicating that while the function seems to change the value of `a`, it doesn't actually affect the variable in the calling function.

## Calling the Function

```c
int b = 22;
change(b); // The value of b remains 22
printf("b is %d", b);
```

- **Variable `b`**: In the `main` function, `b` is set to `22`.
- **Calling `change(b)`**: When `b` is passed to the `change` function, the value of `b` (which is `22`) is copied to the parameter `a`. Inside the `change` function, `a` is modified to `77`. However, this modification only affects the local copy of `a` within the function.
- **Output**: After calling `change(b)`, the value of `b` remains `22` in the `main` function. This is because the `change` function only modifies its local copy of `a`, not the original variable `b` in the `main` function.

### Why the Value Doesn't Change

- **Pass by Value**: In C, when you pass a variable to a function, the value of that variable is copied into the function's parameter. This means that the function works with a copy of the variable, not the original. Changes made to the parameter inside the function do not affect the original variable in the calling function.

## Summary

- The `change` function appears to modify the value of `a`, but because `a` is just a local copy of `b`, the original `b` remains unchanged after the function call. This behavior is due to C's "pass by value" mechanism, where only a copy of the variable is passed to the function.