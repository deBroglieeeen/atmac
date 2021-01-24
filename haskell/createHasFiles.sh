set -x
declare -A smallCase
declare -A upperCase
smallCase["1"]="a"
smallCase["2"]="b"
smallCase["3"]="c"
smallCase["4"]="d"
smallCase["5"]="e"
smallCase["6"]="f"

upperCase["1"]="A"
upperCase["2"]="B"
upperCase["3"]="C"
upperCase["4"]="D"
upperCase["5"]="E"
upperCase["6"]="F"

num=0

mkdir "ABC"
for i in {1..6}
do
	mkdir "ABC/${upperCase[${i}]}"
done

for i in {1..250}
do
	FILE_NUM=$(( $num + $i ))
	for j in 1 2 3 4 5 6; do
		filename="ABC/${upperCase[${j}]}/${FILE_NUM}_${smallCase[${j}]}.hs"
		touch ${filename}
	done
done
