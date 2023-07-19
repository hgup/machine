# Summary: So its (kinda) simple.
# First, we get the permission values from the files
# Next, we create an associative list (like a python dictionary) that will hold the count of permissions

# a slight edit: since, there are 512 possible permissions
# we won't be displaying the redundant zeros

# read the file name from cmd args
file=$1

declare -a perms
# IFS is Internal Field Seperator: we set this to newline to iterate through lines of the output of `ls -l`
IFS='
'
for i in `ls -l $file`
do
    perms+=("${i:1:8}")
done

# unset the first value of perms array that shows the "total" # of files
unset perms[0]

# good practice: in case we use such an iteration later
unset IFS

# create an associative list that will count the permissions
declare -A count
for p in "${perms[@]}"
do
    # set the permissions present to zero; declare as integer to allow addition
    declare -i count[$p]=0
done

# count the permissions
for p in "${perms[@]}"
do
    count[$p]=${count[$p]}+1
done

# print the permissions along with their corresponding count
for p in "${!count[@]}"; do
    echo "$p ${count[$p]}"
done
