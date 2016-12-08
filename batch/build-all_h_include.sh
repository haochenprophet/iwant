rm -f all_h_include.h

echo \#ifndef ALL_H_INCLUDE > all_h_include.h
echo \#define ALL_H_INCLUDE >>all_h_include.h
echo >>all_h_include.h

for i in $(ls *.h sql/*.h)
do
	echo \#include \"$i\" >>all_h_include.h
done

echo >>all_h_include.h
echo \#endif >>all_h_include.h

make