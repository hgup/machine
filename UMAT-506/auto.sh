# automate my C workflow
# AUTHOR: Hursh Gupta
# DATED: 8-3-23
#
# 
#

runC(){
	FILE=`ls -Art *.c | tail -n 1`
	echo -e "\e[36mRunning: \e[97m\e[4m$FILE\e[24m"
	gcc $FILE -lm && ./a.out
}

compileRun(){
	gcc -c *.c
	gcc *.o -o ./a.out
	./a.out
}


alias run="runC"
alias crun="compileRun"


