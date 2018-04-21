# elo
Header file for c++ for calculating elo 

# How to use
`include "elo.h"` to include the file

elo.h has 2 functions, one with a default baseline elo of 4000, and one where you specify your own.

Simply do
`elo::calcElo(score, baselineScore);` to get your elo. Return type is double.

To specify your own baseline elo simply do
`elo::calcElo(score, baselineScore, baselineElo);`

Variable typing is automatic as the function uses templating.
