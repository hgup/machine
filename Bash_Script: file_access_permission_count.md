Given a directory as a command line argument, write a bash script `file_access_permission_count.sh`
to generate a frequency count of files with various access permissions in that directory. 

Example output:  
$ ./file_access_permission_count /home/sk/mydir 
r-------- 2 
-w------- 0 
--x------ 0 
rw------- 2 
..
..
.. 
rwxrwxrwx 13 $