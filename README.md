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

## Time

```sh-session
$ time bin/number_crunch
50817 - 4628 = 46189
63140 - 5721 = 57419
64790 - 5817 = 58973
70839 - 6458 = 64381
80519 - 7365 = 73154
82609 - 7546 = 75063
83160 - 7541 = 75619
84150 - 7631 = 76519
91620 - 8356 = 83264
93607 - 8546 = 85061

real	0m0.023s
user	0m0.023s
sys	0m0.000s
```