# USC-Viterbi 2019 Internship - Prof. Sandeep Gupta and Prof. Pierluigi Nuzzo.
# Need for SAT acceleration and Problem Statement
SAT applications, involve millions of variables to be solved (like in circuit verification). This issue can be addressed and solved by accelerating SAT Solver either by hardware or software. Software optimizations and parallelism are being worked on, but simultaneously question arises : Why not try with hardware?

# Insight of solution 
There is a possibility of acceleration of SAT Solvers by a (hardware) chip. Instead of designing a hardware chip and testing it whether it really works, what we did was to emulate the results of hardware and feed these inputs to SAT solver and analyse the reduction in total execution time. This was achieved by using open source software GPROF. It analyses the flow of program and execution time at every call or instruction of a program.

# How to run program and what does these files mean?
Presentation shows how to run the program and the handout elaborates on how did I create AccEx tool for profiling programs with some additions required to accelerate minisat using hardware.
