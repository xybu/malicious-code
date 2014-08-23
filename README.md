# malicious-code

Some test cases against a sandbox program.

## src

### big_file_writer.c

Write 1M data to a file. Used to test file size limit.

### fork_bomb.c

Halt the system by doing infinite `fork()` and filling the process table.

### mem_killer.c

Halt the system by repeatedly allocating memory.

### sleeper.c

Sleep for 1 min. Used to test timeout feature.

## scripts

### invalid_file_access.sh

Write to the parent dir (which is R-only or hidden).

### invalid_network.sh

Fetch webpage from the internet to test if internet access is blocked.