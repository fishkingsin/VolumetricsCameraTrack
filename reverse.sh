a=1
for i in *.tif; do
  new=$(printf "%04d.tif" ${a}) #04 pad to length of 4
  mv ${i} ${new}
  let a=a+1
done