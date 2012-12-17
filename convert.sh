a=1
folder=$@
target_folder="/Users/jameskong/openframework/of_v0073_osx_release/apps/Meteorological/VolumetricsCamera/bin/data/volumes"
mkdir $target_folder/$folder
cd ./$folder
for i in $(ls *.dcm)
do
	new=$(printf "%04d.tif" ${a}) #04 pad to length of 4 
	convert ${i} -auto-level -depth 8 -normalize -resize 50% ${new}
	mv ${new} $target_folder/$folder
	let a=a+1
done