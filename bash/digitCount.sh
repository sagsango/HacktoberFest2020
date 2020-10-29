function digitCount() {
	n=$1
	d=0
	while [ $n -ne 0 ]
	do
		((d=d+1))
		((n=n/10))
	done
	echo digit count:$d
}
read n
digitCount $n
