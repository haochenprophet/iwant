rm -f all_h_include.h

echo \#ifndef ALL_H_INCLUDE > all_h_include.log
echo \#define ALL_H_INCLUDE >>all_h_include.log
echo >>all_h_include.log

for i in $(ls *.h hardware/*.h  sql/*.h  dictionary/*.h instruction/*.h  keywords/*.h  math/*.h  tree/*.h)
do
	echo \#include \"$i\" >>all_h_include.log
done

echo >>all_h_include.log
echo \#endif >>all_h_include.log

mv all_h_include.log all_h_include.h
make