
# Commands

## I/O
- `fputs(string, fp1)` 

- `fgets(s_var, 80, fp1)` reads 79 characters from `fp1` and an extra `\n`

- `fprintf(f1,"%...",var_*)` prints formatted

- `fscanf(f2, "%...",&var_0)` scans from the files and puts in the `var_0`

- `feof(fp1)` is the file at EOF?

## ERROR HANDLING 

- `ferror(fp1)` 0 if no errors, otherwise non-zero
    
    - `perror()` prompts the error churned out by the last `ferror` call

## SEEKING

- `fseek(fp, offset, position)` offsets the cursor by relative position, which can be:
    
    - `SEEK_SET`(0, beginning)
    - `SEEK_CUR`(1, current)
    - `SEEK_END`(2, end)

- `ftell(fp)` tells where the current file pointer is at

- `rewind(fp)` sets the fp to the start of 0

# Good Practices

- always check whether your file has been read or not by testing if the file pointer is `NULL` or not before doing the operation.

- use commandline arguments by using this simple syntax rule

    - `num_args` gives the number of arguments passed
    - `argv[]` gives you a list of arguments
    - `argv[0]` is the name of the file run

```c
int main(int num_args, char* argv[]){
  while(args)
    printf("%s\n", argv[--args]);
    //...
}
```


