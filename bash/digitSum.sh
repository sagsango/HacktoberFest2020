function digitSum() {
	n=$1
	sum=0;
	while [ $n -ne 0 ]
	do
		((sum=sum+n%10))
		((n=n/10))
	done
	echo digitSum:$sum
}
read n
digitSum $n
