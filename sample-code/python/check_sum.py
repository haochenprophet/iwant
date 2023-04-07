import sys
import os
import string
import datetime

def check_sum(file_name):
	try:
		file = open(file_name,'rb+')
		data=file.read()

		checksum=0
		for each in data:
			checksum += each
		checksum &= 0xFFFFFFFF

		file.close()
		return checksum
	except :
		print("Error:",__file__,"function: check_sum()  file_name=",file_name)
		return 0

#argv[1] file name
def main (argv):
	file_chk_sum=check_sum(argv[1])
	print("file_chk_sum=",hex(file_chk_sum))

	sys.exit(0)

if __name__=="__main__":
	main(sys.argv)