# print just 10th line of file.txt

grep -n "" file.txt | grep -P '^10:' | cut -d: -f2