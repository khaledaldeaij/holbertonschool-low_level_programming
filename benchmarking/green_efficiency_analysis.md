
# Green Tech Efficiency Analysis

## Measurement Methodology

In this project, I measured the execution time of C programs using the clock() function from the standard time.h library. All programs were compiled using the required GCC flags, including -Wall, -Werror, -Wextra, -pedantic, -std=gnu89, and -Wno-long-long.

I executed the algorithm comparison program three times on the same machine to maintain consistent testing conditions. I recorded the execution time of both implementations and calculated their average execution times.

For the instrumentation experiment, I measured three phases separately: BUILD_DATA, PROCESS, and REDUCE. I also measured the total execution time of the program. The measurements were converted into seconds using CLOCKS_PER_SEC.

## Observed Performance Differences

The naive algorithm recorded execution times of 1.740255, 1.709679, and 1.706266 seconds. Its average execution time was approximately 1.718733 seconds.

The single-pass algorithm recorded execution times of 0.000068, 0.000069, and 0.000068 seconds. Its average execution time was approximately 0.00006833 seconds.

Based on these measurements, the naive algorithm was approximately 25,152 times slower than the single-pass algorithm.

The naive algorithm uses nested loops with O(n^2) time complexity, while the single-pass algorithm uses one loop with O(n) time complexity.

However, the two algorithms produced different results. The naive algorithm returned 625025000, while the single-pass algorithm returned 25000. Therefore, this experiment demonstrates a difference in execution time, but the implementations are not functionally equivalent.

In the instrumentation experiment, the TOTAL execution time was 0.000945 seconds. BUILD_DATA took 0.000268 seconds, PROCESS took 0.000445 seconds, and REDUCE took 0.000225 seconds.

PROCESS was the slowest phase in this recorded execution.

## Relation Between Runtime and Energy Consumption

Execution time can help developers understand software efficiency. Programs requiring more CPU processing time may consume more energy because the processor remains active longer.

In my measurements, the naive algorithm required significantly more CPU time than the single-pass algorithm. This suggests that reducing unnecessary computation can potentially improve energy efficiency.

The instrumentation experiment also showed that the PROCESS phase required the most CPU time among the three measured phases.

However, the experiment did not directly measure electricity consumption. Therefore, I cannot conclude exactly how much energy either implementation consumed.

## Limitations of the Experiment

One limitation is that the clock() function measures CPU execution time rather than electrical power consumption.

Another limitation is that the algorithm comparison was performed only three times. Additional measurements would provide stronger evidence about performance consistency.

The single-pass execution times were extremely small, meaning timing precision could affect the calculated performance ratio.

Additionally, the two algorithms produced different results, making a direct comparison of equivalent functionality impossible.

The instrumentation experiment was recorded once, so its results may vary across additional executions.

## Practical Engineering Takeaway

This experiment demonstrated the importance of measuring software performance instead of assuming which implementation is faster.

The single-pass algorithm completed its computation much faster in the recorded measurements, while the instrumentation experiment identified PROCESS as the longest phase.

In practical software development, engineers should use efficient algorithms, measure performance repeatedly, and verify that compared implementations produce equivalent results.

Improving runtime efficiency may help reduce energy consumption, but actual energy savings require additional measurement tools.

