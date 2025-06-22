#  MULTITHREADED-FILE-COMPRESSION

COMPANY : CODTECH IT SOLUTION

NAME : RAHISH KUMAR

INTERN ID : CT04DF599

DOMAIN :  C++ PROGRAMMING

DURATION : 4 WEEKS

MENTOR : NEELA SANTHOSH

Task Overview:
🔧 Project Title:
Run-Length Encoding Based File Compressor and Decompressor (C++ Implementation)

📄 Objective:
The goal of this task is to implement a simple and efficient Run-Length Encoding (RLE) based file compressor and decompressor using C++. The tool reads an input file, compresses or decompresses it based on the user’s choice, and outputs the result to a separate file. This technique is especially useful for compressing repetitive character data, such as in text files.

🧠 What is RLE?
Run-Length Encoding (RLE) is a basic form of lossless data compression. It works by reducing the physical size of repeating characters. For example, the string AAAABBBCCDAA becomes 4A3B2C1D2A. This makes it an ideal solution for compressing files with high character repetition. RLE is often used in image compression (like BMP or TIFF), simple text files, and other areas where patterns frequently repeat.

💻 Program Description:
This C++ program supports two modes:

Compression Mode ('c')

Reads data from a file named input.txt.

Applies RLE compression to convert repeating characters into a shorter format.

Saves the result into compressed.txt.

Example: Input = AAAAABBBCC; Output = 5A3B2C.

Decompression Mode ('d')

Reads data from compressed.txt.

Decodes the RLE format back to the original uncompressed string.

Saves the result into decompressed.txt.

Example: Input = 5A3B2C; Output = AAAAABBBCC.

📦 Files Used:
input.txt: The file containing original content to be compressed.

compressed.txt: Stores the result of RLE compression.

decompressed.txt: Contains the decompressed data from the RLE format.

✨ Key Features:
Clean and modular code using modern C++ practices.

Gracefully handles missing or unreadable files.

Removes exception handling and replaces it with safe and logical branching.

Provides clear terminal prompts and feedback to the user.

Can be reused or extended for batch processing or GUI integration.

🧱 Code Structure:
encodeRLE(): Implements the compression logic using a counter-based loop.

decodeRLE(): Reconstructs the original string by parsing number-character patterns.

main(): Handles user input, file I/O, and controls flow between compress/decompress operations.

🔍 Usage Instructions:
Place the content to compress in input.txt.

Run the program.

Enter 'c' to compress or 'd' to decompress.

Check compressed.txt or decompressed.txt for the output.

🧑‍💻 Applications and Scope:
Useful in teaching compression basics.

Can be integrated into simple backup tools.

Serves as a foundational exercise in file handling, string processing, and data encoding.

This task demonstrates not only core C++ programming skills like file handling, string manipulation, and user input, but also the practical application of a widely-used data compression algorithm. It is an excellent project for students and beginners looking to explore algorithmic problem solving in real-world scenarios.


OUTPUT-
![Image](https://github.com/user-attachments/assets/7355bf67-536d-4ba9-b8ec-64156c36a446)

![Image](https://github.com/user-attachments/assets/6d11f86c-6b9c-412d-9fdf-78e518649dbf)
![Image](https://github.com/user-attachments/assets/22d422f3-c1f1-4af5-b48a-00dd08dbd6b5)
![Image](https://github.com/user-attachments/assets/6024c7f7-5d40-4377-a2c8-e6d249496496)
