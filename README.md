# Number crunch

Given the following following math equation, where each letter represents a unique digit:

```text
   ABCDE
  - HIJC
--------
=  HIDCK
```

How many solutions exist to this problem?

## Building & Running

```bash
$ make
$ bin/number_crunch
```

## Complexity

| Method              | Iteration Count | Space complexity | Time Complexity |
|---------------------|----------------:|-----------------:|----------------:|
| Count, 1B-9B        |      8999999999 |             O(1) |            10^n |
| Permutations, 10x10 |         3628800 |             O(1) |              n! |

## Time

```sh-session
$ time bin/number_crunch
[...]

real	0m0.023s
user	0m0.023s
sys	0m0.000s
```
