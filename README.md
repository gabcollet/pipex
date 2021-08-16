# pipex
**Pipex project school 42**

This program takes the infile, outfile to redirect the STDIN (<), STDOUT (>) and 2 commands to pipe. To execute the mandatory program, type the command listed below. The arguments will be processed as same as < infile cmd1 | cmd2 > outfile on the shell.
```
./pipex <infile> <cmd1> <cmd2> <outfile>
```
To execute the bonus program, the project needs to be compiled with the bonus rule before. Then, it takes the infile, outfile to redirect STDIN (<), STDOUT (>) like previous one, but multiple commands can be accepted. The arguments will be process as same as < infile cmd1 | cmd2 | cmd3 ... > outfile on the shell.
```
./pipex <infile> <cmd1> <cmd2> <cmd3> ... <outfile>
```
Only for the bonus program, it supports not only the single angle bracket for the STDOUT (>), but also the double angle bracket for the STDOUT (>>). The single angle bracket will overwite the entire file, but the double angle bracket will append after the file. This can be done by writing the arguments with the index 1 has the here_doc. In this case, the double bracket for the STDIN (<<) will be supported instead of the single bracket for the STDIN (<). That means, infile will be replaced and the lines that a user typed will be written on the STDIN until typing the limiter. When the limiter is typed, the first commands will be executed by taking all of the lines of the STDIN (except the limiter).
```
./pipex here_doc <limiter> <cmd1> <cmd2> <cmd3> ... <outfile>
```
