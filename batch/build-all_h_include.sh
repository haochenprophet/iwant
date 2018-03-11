rm -f all_h_include.h

echo \#ifndef ALL_H_INCLUDE > all_h_include.log
echo \#define ALL_H_INCLUDE >>all_h_include.log
echo >>all_h_include.log

for i in $(ls *.h sql/*.h  keywords/*.h  dictionary/*.h instruction/*.h math/*.h)
do
	echo \#include \"$i\" >>all_h_include.log
done

echo >>all_h_include.log
echo \#endif >>all_h_include.log

mv all_h_include.log all_h_include.h
make