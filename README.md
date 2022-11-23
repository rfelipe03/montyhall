# montyhall
Monty Hall problem example in C

# Compiling

```sh
make montyhall
```

# Running

`./montyhall` to run in interactive mode or `for i in $(seq 1000); do printf "${FIRST_DOOR}\n${SWITCH}\n" | ./montyhall >> ${SAVEFILE} 2> /dev/null; done` to perform tests automatically and save the results to a file. Then grep to see results.

# Conclusion

Statistically it is advantageous to switch doors. In our analysis, 971/1000 (97.1%) of the guesses are correct when you switch doors, while only 109/1000 (10.9%) are correct when you don't.
