a=1
folder=$@
target_folder=$PWD"/bin/data/volumes/fullbody2/"
mkdir $target_folder
cd $folder
for i in $(ls *.dcm)
do
	new=$(printf "%04d.tif" ${a}) #04 pad to length of 4 
	echo ${new}
	convert ${i} -auto-level -depth 8 -normalize -resize 50% ${new}
	mv $folder${new} $target_folder${new}
	let a=a+1
done