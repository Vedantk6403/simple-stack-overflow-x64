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
For a full walkthrough of the debugging process and stack analysis, check out my blog post here:
[![View Live Demo](https://img.shields.io/badge/Full_Writeup-View_Post-0077b5?style=for-the-badge&logo=bookstack&logoColor=white)](https://vedantk6403.github.io/my-portfolio/blog/buffer-overflow.html)


### 🔗 Connect with me:
[<img align="left" alt="LinkedIn" width="22px" src="https://cdn.jsdelivr.net/npm/simple-icons@v3/icons/linkedin.svg" />](https://www.linkedin.com/in/vedant-karande-936787247/)
[<img align="left" alt="GitHub" width="22px" src="https://cdn.jsdelivr.net/npm/simple-icons@v3/icons/github.svg" />](https://github.com/Vedantk6403)
<br />
