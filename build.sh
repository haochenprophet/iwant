src_dir=$PWD
date
echo "Start build:$src_dir"
#step 1:check and rm
if [[ -f ${src_dir}/src/iwant ]];then
	rm ${src_dir}/src/iwant -f
fi
#step 2:make
cd ${src_dir}/src/
make main=${1^^} debug=${2^^}
#step 3:check and mv
if [[ -f ${src_dir}/src/iwant ]];then
	mv ${src_dir}/src/iwant ${src_dir}/ -f
	echo "Build done!"
else
	echo "Build fail!"
fi
#
date