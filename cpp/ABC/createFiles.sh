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

num=187

for i in {1..50}
do
	FILE_NUM=$(( $num + $i ))
	for j in 1 2 3 4 5 6; do
		filename="${upperCase[${j}]}/${FILE_NUM}_${smallCase[${j}]}.cpp"
		touch ${filename}
		cat A/168_a.cpp > ${filename}
	done
done
