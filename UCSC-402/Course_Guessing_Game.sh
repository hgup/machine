!/usr/bin/bash

# M & P -> Mathematical Physics
# M & C -> Theoretical Chemistry
# P & C -> Physical Chemistry
# M & P & C -> Computational Science

# pA or pB -> M
# pC or pD -> P
# pE or pF -> C

Name="$1"
day=`date +%A`
hour=`date +%H`
if [[ $hour -lt 5 ]]
    then t="night"
    elif [[ $hour -lt 12 ]]
    then t="morning"
    elif [[ $hour -lt 16 ]]
    then t="afternoon"
    elif [[ $hour -lt 19 ]]
    then t="evening"
    else t="night"
fi

echo "Hi $Name, How are you doing this fine $day $t?"
echo "Let us start the game"

echo -n "Do you attend classes of Prof. A?"
read pA
echo -n "Do you attend classes of Prof. B?"
read pB
echo -n "Do you attend classes of Prof. C?"
read pC
echo -n "Do you attend classes of Prof. D?"
read pD
echo -n "Do you attend classes of Prof. E?"
read pE
echo -n "Do you attend classes of Prof. F?"
read pF

M=0
P=0
C=0
if [[ pA -eq "y" || pB -eq "y" ]]
then M=1
fi
if [[ pC -eq "y" || pD -eq "y" ]]
then P=1
fi
if [[ pE -eq "y" || pF -eq "y" ]]
then C=1
fi
if [[ M -eq 1 && P -eq 1 && C -eq 1 ]]
then C="Computational Science"
elif [[ M -eq 1 && P -eq 1 ]]
then C="Mathematical Physics"
elif [[ C -eq 1 && P -eq 1 ]]
then C="Physical Chemistry"
elif [[ M -eq 1 && C -eq 1 ]]
then C="Theoretical Chemistry"
elif [[ M -eq 1 ]]
then C="Mathematics"
elif [[ P -eq 1 ]]
then C="Physics"
elif [[ C -eq 1 ]]
then C="Chemistry"
else
echo "Fibber!"
exit 0
fi


echo "$Name, You must be from the $C course, right?"