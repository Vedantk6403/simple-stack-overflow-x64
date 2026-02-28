# simple-stack-overflow-x64
A Proof-of-Concept project demonstrating a basic stack-based buffer overflow on Linux x86-64, bypassing standard flow control to execute a hidden function.

🎯 Goal
Redirect program execution logic by overwriting the Instruction Pointer (RIP) on the stack to jump to the secret_function().

⚙️ Environment
OS: Kali Linux

Arch: amd64

Protections Disabled: NX, Stack Canaries, PIE.

🚀 Usage
Compile the target:

```Bash
gcc -fno-stack-protector -no-pie -o src/vuln src/vuln.c
```
Run the exploit:

```Bash
python3 exploit/exploit.py
```

📝 Detailed Analysis
For a full walkthrough of the debugging process and stack analysis, check out my blog post here: [Link To Your Blog Post]
