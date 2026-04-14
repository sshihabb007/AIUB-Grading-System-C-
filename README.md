# AIUB Student Grading System (C++)

A console-based academic management tool designed to automate the calculation of grades according to the official **American International University-Bangladesh (AIUB)** grading policies. This project simplifies the process of evaluating student performance by calculating total marks, grade points, and letter grades based on user-defined inputs.

---

## 📝 Project Description
This C++ application serves as a digital grade book for educators and students at AIUB. It automates the calculation of a student's final results by taking into account the weighted marks of multiple assessments, including Mid-terms, Final-terms, Quizzes, and Assignments.

The system is built with a focus on accuracy and compliance with the AIUB grading scale, ensuring that the transition from numerical marks to grade points (GPA) is seamless. It is an ideal project for demonstrating the application of structured programming in C++, utilizing control flow, conditional logic, and formatted console output.

---

## ✨ Key Features
* **Comprehensive Data Entry:** Input student identifiers such as Name, Student ID, and Semester.
* **Assessment Segmentation:** Supports individual mark entry for:
    * **Quizzes & Assignments** (Continuous Assessment)
    * **Mid-term Examination** (Weighted Assessment)
    * **Final-term Examination** (Weighted Assessment)
* **Automated GPA Calculation:** Instantly calculates the total marks and maps them to the correct Grade Point (0.00 - 4.00) and Letter Grade (F - A+).
* **AIUB Scale Compliance:** Pre-programmed with the standard AIUB grading intervals (e.g., 90-100 for A+).
* **Clean Console UI:** Features a structured and readable output format for displaying the final academic report.

---

## 📊 AIUB Grading Scale Implemented
The project follows the official AIUB academic regulations:

| Marks (%) | Letter Grade | Grade Point |
| :--- | :--- | :--- |
| 90 - 100 | **A+** | 4.00 |
| 85 - 89 | **A** | 3.75 |
| 80 - 84 | **B+** | 3.50 |
| 75 - 79 | **B** | 3.25 |
| 70 - 74 | **C+** | 3.00 |
| 65 - 69 | **C** | 2.75 |
| 60 - 64 | **D+** | 2.50 |
| 50 - 59 | **D** | 2.25 |
| 0 - 49 | **F** | 0.00 |

---

## 🚀 Getting Started

### Prerequisites
* A C++ compiler (e.g., GCC/MinGW, Clang, or MSVC).
* An IDE or Text Editor (e.g., VS Code, Code::Blocks, or Dev-C++).

### Installation & Execution
1. **Clone the repository:**
   ```bash
   git clone [https://github.com/sshihabb007/AIUB-Grading-System-C-.git](https://github.com/sshihabb007/AIUB-Grading-System-C-.git)
Navigate to the project directory:

Bash
cd AIUB-Grading-System-C-
Compile the source code:

Bash
g++ "AIUB Grading System.cpp" -o GradingSystem
Run the application:

Bash
./GradingSystem
🛠️ Technologies Used
Language: C++

Paradigm: Procedural / Structured Programming

Documentation: Microsoft PowerPoint

📁 Repository Structure
AIUB Grading System.cpp: The primary source code containing the grading logic.

AIUB Grading System.pptx: A presentation detailing the project's design and workflow.

Note: This project was developed to demonstrate fundamental programming concepts applied to real-world academic requirements.
