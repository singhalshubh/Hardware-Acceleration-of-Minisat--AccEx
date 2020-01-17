[![CodeFactor](https://www.codefactor.io/repository/github/singhalshubh/hardware-acceleration-of-minisat--accex/badge)](https://www.codefactor.io/repository/github/singhalshubh/hardware-acceleration-of-minisat--accex)

USC-Viterbi 2019 Internship - Prof. Sandeep Gupta and Prof. Pierluigi Nuzzo.

# Problem Statement
SAT Solvers efficiency can be increased by paralleising and optimising the software functions. By what %
should that function’s time be reduced to obtain the total expected execution time is the problem statement which would help to decide the extent of parallelism that can be acheived in the SAT Solvers.

# Insight of solution
Studied which function and which part of that function in SAT Solvers accounts for the highest % of execution time by using
call graph and flat profile in GPROF.</br>
Formulated a generic relation to decide the extent of parallelism for improving the SAT Solver’s overall efficiency- By what %
should that function’s time be reduced to obtain the total expected execution time.</br>
Main Results (for minisat - a variant of SAT):</br>
1.) The propagate function was the one that needed to be optimized as it accounts for approximately 75% of the total
execution time.</br>
2.) Assigned a machine independent attribute - call id for every call to replace the default execution time of the call with
the optimized input.</br>
3.) Graph between the percentage reduction of propagate() vs percentage reduction of total time due to propagate() illustrated that the decrease in total time is exponential and time taken by propagate can be reduced only up-to a certain
point(76%) as then, the total execution time starts increasing, thus nullifying the effect of parallelism.</br>
Similar analysis of other complex variants of SAT like graph coloring are under progress.</br>
For more detailed analysis on how the profiling was carried out, what all changes were made to GPROF to form AccEx and what is the importance of these results are all illustrated in https://arxiv.org/abs/1909.13058

# How to run program and what does these files mean?
Presentation shows how to run the program and the handout elaborates on how did I create AccEx tool for profiling programs with some additions required to accelerate minisat using hardware.
